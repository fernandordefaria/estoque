#include "dialog_login.h"
#include "ui_dialog_login.h"
#include <QMessageBox>
#include <QDebug>

Dialog_Login::Dialog_Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Login){
    ui->setupUi(this);

    dados = new Dados(this);
    startSignals();
    lembrar();
}


void Dialog_Login::startSignals(){
    connect(ui->btnEntrar, SIGNAL(clicked()), SLOT(entrarSistema()));
    connect(ui->btnCancelar, SIGNAL(clicked()), SLOT(close()));
}

void Dialog_Login::lembrar(){
    query = new QSqlQuery();
    bool lembrar = false;
    int codigo = 0;
    query->prepare("SELECT * FROM userAtual");
    if(!query->exec()){
        qDebug() << query->lastError().text() << endl;
        return;
    }
    if(!query->next()){
        qDebug() << query->lastError().text() << endl;
        return;
    }
    //Variáveis que recebem os valores do banco
    codigo = query->value(0).toInt();
    lembrar = query->value(1).toBool();
    //Verifica se está logado
    if(lembrar){
        query->clear();
        query->prepare("SELECT * FROM users WHERE codigo=(:cod)");
        query->bindValue(":cod", codigo);
        if(!query->exec() || !query->next()){
            qDebug() << query->lastError().text() << endl;
            return;
        }
        //
        QString nome = query->value(1).toString();
        QString senha = query->value(2).toString();

        ui->edtNome->setText(nome);
        ui->edtSenha->setText(senha);
        ui->checkBox->setChecked(true);
        //this->logar();
    }
    //
    delete query;
}

void Dialog_Login::logar(){
    QMessageBox m;
    query = new QSqlQuery();//Instancio na memória.
    //Preparo a Query para ser executada
    query->prepare("SELECT * FROM users WHERE nome=(:nome) AND senha=(:senha)");
    //Atribuo os valores
    query->bindValue(":nome", this->ui->edtNome->text().toLower());
    query->bindValue(":senha", this->ui->edtSenha->text().toLower());
    //Tenta executar a query. Se sim ele verifica se existe
    //Um registro. se não existir ele dá uma msg de erro.
    if(query->exec()){
        //Verifica se não existe registro no Banco de Dados.
        if(query->next()){
            //Existe o usuário e senha.
            int id = 0;//variável que recebe o valor do ID
            int codigo = 0;//Variável que recebe o código do cliente
            bool logar = false;
            codigo = query->value(0).toInt();
            if(ui->checkBox->isChecked())
                logar = true;
            //Crio o objeto cUser
            cUser = new QSqlQuery();//Instancia a query na memória.
            cUser->prepare("SELECT * FROM userAtual");
            if(cUser->exec()){
                if(cUser->next()){
                    //Existe registro no currentUser
                    id = cUser->value(0).toInt();
                    cUser->clear();
                    cUser->prepare("UPDATE userAtual SET codigo=(:codigo), lembrar=(:logar) WHERE codigo=(:id)");
                    cUser->bindValue(":id", id);
                    cUser->bindValue(":codigo", codigo);
                    cUser->bindValue(":logar", logar);
                    if(!cUser->exec()){
                        qDebug() << cUser->lastError() << endl;
                    }
                }else{
                    cUser->prepare("INSERT INTO userAtual(codigo, lembrar) VALUES (:codigo, :logar)");
                    cUser->bindValue(":codigo", codigo);
                    cUser->bindValue(":logar", logar);
                    if(!cUser->exec()){
                        qDebug() << cUser->lastError() << endl;
                    }
                }
            }
            delete cUser;
            this->hide();
        }else{
            m.setText("Usuário não cadastrado.");
            m.exec();
        }
    }else{
        qDebug() << query->lastError() << endl;
    }
    delete query;
}

void Dialog_Login::entrarSistema(){
    logar();
}

void Dialog_Login::closeEvent(QCloseEvent *event){
    QMessageBox::StandardButton dialog;
    dialog = QMessageBox::warning(this, "Atenção!",
    "Tem certeza que deseja sair?",
    QMessageBox::Yes | QMessageBox::No);
    if( dialog == QMessageBox::Yes) {
        QApplication::quit();
    } else {
        event->ignore();
    }
}

Dialog_Login::~Dialog_Login(){
    delete dados;
    delete ui;
}
