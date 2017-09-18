#include "form_cadclie.h"
#include "ui_form_cadclie.h"
#include <QMessageBox>
#include <QRegExpValidator>

Form_CadClie::Form_CadClie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_CadClie){
    ui->setupUi(this);

    setSignals();
    validators();
    ui->edtData->setCalendarPopup(true);
}

void Form_CadClie::setSignals(){
    connect(ui->btnSair, SIGNAL(clicked()), SLOT(sair()));
    connect(ui->btnCad, SIGNAL(clicked()), SLOT(onCadClie()));
}

void Form_CadClie::sair(){
    this->close();
}

void Form_CadClie::onCadClie(){
    QString nome, sobre, email, cpf, sexo, end, tl;
    QDate dt;

    nome = ui->edtNome->text().toLower();
    sobre = ui->edtSobre->text().toLower();
    cpf = ui->edtCpf->text().toLower();
    email = ui->edtEmail->text().toLower();
    sexo = ui->cbSexo->currentText().toLower();
    end = ui->edtEnd->text().toLower();
    dt = ui->edtData->date();
    tl = ui->edtTel->text().toLower();


    if((nome != "") &&
            (cpf != "") &&
            (tl != "")){
        //Cadastra os clientes no DB
        query = new QSqlQuery();
        query->prepare("INSERT INTO clientes "
                       "(nome, sobrenome, cpf, sexo, endereco, data_nasc, telefone, email) "
                   "VALUES (:nome, :sobrenome, :cpf, :sexo, :endereco, :data_nasc, :telefone, :email)");
        query->bindValue(":nome", nome);
        query->bindValue(":sobrenome", sobre);
        query->bindValue(":email", email);
        query->bindValue(":cpf", cpf);
        query->bindValue(":sexo", sexo);
        query->bindValue(":endereco", end);
        query->bindValue(":data_nasc", dt.toString("yyyy-MM-dd"));
        query->bindValue(":telefone", tl);
        if(query->exec()){
            QMessageBox m;
            m.setText("Dados cadastrados com sucesso.");
            m.exec();
        }else{
            qDebug() << query->lastError().text() << endl;
            QMessageBox me;
            me.setText("Erro ao cadastrar os dados.");
            me.exec();
        }
    }else{
        QMessageBox branco;
        branco.setText("Preencha todos os campos.");
        branco.exec();
    }
}

void Form_CadClie::validators(){
    ui->edtNome->setPlaceholderText("Digite o Nome...");
    ui->edtSobre->setPlaceholderText("Digite o Sobrenome...");
    ui->edtTel->setInputMask("(99)99999-9999;_");
    ui->edtEmail->setPlaceholderText("Digite o E-Mail do cliente");
    ui->edtCpf->setInputMask("999.999.999-99;0");
}

Form_CadClie::~Form_CadClie(){
    delete ui;
}
