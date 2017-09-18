#include "form_cadtec.h"
#include "ui_form_cadtec.h"
#include <QMessageBox>
#include <QDebug>
#include <QModelIndexList>

Form_CadTec::Form_CadTec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_CadTec){
    ui->setupUi(this);

    setSignals();
    validator();

    QModelIndexList m;
}

void Form_CadTec::setSignals(){
    connect(ui->btnCadTec, SIGNAL(clicked()), SLOT(cadastrar()));
    connect(ui->btnCancelar, SIGNAL(clicked()), SLOT(close()));
}

void Form_CadTec::validator(){
    ui->edtTelefone->setInputMask("(99)99999-9999;_");
}

void Form_CadTec::cadastrar(){
    //if(this->ui->){}
    QMessageBox m;
    if(this->ui->edtNome->text().length() > 0){
        q = new QSqlQuery;
        q->prepare("SELECT nome FROM tecnico WHERE nome=(:nome)");
        q->bindValue(":nome", ui->edtNome->text());
        if(q->exec()){
            if(q->next()){
                m.setText("Técnico já está cadastrado!");
                m.exec();
            }else{
                q->clear();
                q->prepare("INSERT INTO tecnico(nome, telefone)VALUES(:nome, :telefone)");
                q->bindValue(":nome", ui->edtNome->text());
                q->bindValue(":telefone", ui->edtTelefone->text());
                if(q->exec()){
                    m.setText("Técnico cadastrado com sucesso.");
                    m.exec();
                }
            }
        }else{
            qDebug() << q->lastError() << endl;
        }
        delete q;
    }else{
        m.setText("Campo nome está vazio!");
    }
}

void Form_CadTec::keyPressEvent(QKeyEvent *e){
    if (e->key() == Qt::Key_Return || e->key() == Qt::Key_Enter){
        QObject *obj = QApplication::focusWidget(); //objeto atualmente em foco
        if (obj->inherits("QAbstractSpinBox")
                ||  obj->inherits("QLineEdit")
                || obj->inherits("QCheckBox")
                || obj->inherits("QComboBox")){
                QKeyEvent repi(e->type(), Qt::Key_Tab, Qt::NoModifier ,QString::null, e->isAutoRepeat(), e->count());
                *e = repi;
            }
        }
        QWidget::keyPressEvent(e); //chama o eventkey modificado ou não
}

Form_CadTec::~Form_CadTec(){
    delete ui;
}

