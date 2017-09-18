#include "form_cadprod.h"
#include "ui_form_cadprod.h"
#include <QString>
#include <QVariant>
#include <QSqlTableModel>
#include <QModelIndex>
#include "utils/property.h"

Form_CadProd::Form_CadProd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_CadProd){
    ui->setupUi(this);
    validators();
    setSignals();
    this->setWindowTitle("Cadastro de Produtos");
    this->ui->edtCod->setFocus();
}

void Form_CadProd::validators(){
    ui->edtValorCompra->setValidator(new QDoubleValidator(-999.9, 999.0, 2, ui->edtValorCompra));
    ui->edtValorVenda->setValidator(new QDoubleValidator(-999.9, 999.0, 2, ui->edtValorVenda));
    ui->edtUnidade->setValidator(new QIntValidator(ui->edtUnidade));
    ui->edtCod->setValidator(new QIntValidator(ui->edtCod));
}

void Form_CadProd::on_pushButton_clicked(){
    categ = new Form_Categ(this);
    categ->getTable()->setEditTriggers(QAbstractItemView::NoEditTriggers);
    categ->exec();
    delete categ;
}

void Form_CadProd::setSignals(){
    connect(ui->btnCad, SIGNAL(clicked()), SLOT(cad()));
    connect(ui->btnSair, SIGNAL(clicked()), SLOT(close()));
}

void Form_CadProd::cad(){
    //Primeiro eu verifico se o produto já existe
    QMessageBox msg;
    if((ui->edtCod->text().length() > 0) ||
        (ui->edtDesc->text().length() > 0) ||
        (ui->edtUnidade->text().length() > 0) ||
        (ui->edtValorCompra->text().length() > 0) ||
        (ui->edtValorVenda->text().length() > 0)){
        
        QSqlTableModel *model = new QSqlTableModel();
        model->setTable("produtos");
        model->insertRow(0, QModelIndex());
        model->setData(model->index(0, 0), ui->edtCod->text());
        model->setData(model->index(0, 1), ui->edtDesc->text());
        model->setData(model->index(0, 2), ui->edtUnidade->text());
        model->setData(model->index(0, 3), ui->edtValorCompra->text().replace(",", "."));
        model->setData(model->index(0, 4), ui->edtValorVenda->text().replace(",", "."));
        if(!model->submitAll()){
            msg.setText(MSG_ERRO_CAD);
            msg.exec();
        }else{
            model->database().commit();
            msg.setText(MSG_SUCESS_CAD);
            msg.exec();
            delete model;
        }
    }else{
        msg.setText(MSG_BRANCO);
        msg.exec();
    }
}


Form_CadProd::~Form_CadProd(){
    delete ui;
}

