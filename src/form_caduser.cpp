#include "form_caduser.h"
#include "ui_form_caduser.h"
#include <QMessageBox>
#include <QDebug>
#include "connection.h"

form_cadUser::form_cadUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_cadUser){
    ui->setupUi(this);
}

form_cadUser::~form_cadUser(){
    delete ui;
}

void form_cadUser::on_btnCad_clicked(){
    QMessageBox msg;
    if(ui->edtNome->text().length() > 0){
        if(ui->edtSenha->text().length() > 0){
            if(ui->edtSenha->text() == ui->edtRepetSenha->text()){
                query = new QSqlQuery();
                query->prepare("SELECT nome FROM users WHERE nome=(:nome)");
                query->bindValue(":nome", this->ui->edtNome->text().toLower());
                if(query->exec()){
                    if(!query->next()){
                        query->prepare("INSERT INTO users(nome, senha, tipo)"
                                      "VALUES(:nome, :senha, :tipo)");
                        query->bindValue(":nome", this->ui->edtNome->text().toLower());
                        query->bindValue(":senha", this->ui->edtSenha->text().toLower());
                        query->bindValue(":tipo", this->ui->cbTipo->currentText().toLower());
                        if(query->exec()){
                            QMessageBox m;
                            m.setText("Dados cadastrados com sucesso.");
                            m.exec();
                        }
                    }else{
                        QMessageBox m;
                        m.setText("Usuário já cadastrado.");
                        m.exec();
                    }
                }
                delete query;
            }else{
                msg.setText("As senhas não são iguais.");
                msg.exec();
            }
        }else{
            msg.setText("Campo senha está em branco!");
            msg.exec();
        }
    }else{
        msg.setText("Campo nome está em branco!");
        msg.exec();
    }
}

void form_cadUser::on_btnSair_clicked(){
    close();
}
