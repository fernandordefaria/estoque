#include "form_cadcateg.h"
#include "ui_form_cadcateg.h"
#include <QMessageBox>
#include "utils/property.h"

Form_CadCateg::Form_CadCateg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_CadCateg){
    ui->setupUi(this);
}

Form_CadCateg::~Form_CadCateg(){
    delete ui;
}

void Form_CadCateg::on_btnCancel_clicked(){
    this->close();
}

void Form_CadCateg::on_btnCad_clicked(){
    //Cadastra a Categotia;
    //Primeiro eu faço um select
    //Para ver se a categoria já existe
    QMessageBox m;
    if(ui->edtNome->text() != ""){
        categDao = new CategDao();
        categDao->getCategModel()->setNome(ui->edtNome->text());
        categDao->getCategModel()->setDesc(ui->edtDesc->text());
        if(categDao->insert()){
            m.setText(MSG_SUCESS_CAD);
        }else{
            m.setText(MSG_ERRO_CAD);
        }
        m.exec();

        delete categDao;
    }
    //Chama o métido cadastrar da classe DAO
}
