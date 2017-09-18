#include "form_categ.h"

Form_Categ::Form_Categ(QWidget *parent) : Base_Form(parent){
    this->setTableModel();
    setSignals();
    this->setWindowTitle("Categorias");
}

void Form_Categ::setTableModel(){
    this->tableModel->setTable("categ");
    this->tableModel->setHeaderData(0, Qt::Horizontal, tr("Código"));
    this->tableModel->setHeaderData(1, Qt::Horizontal, tr("Nome"));
    this->tableModel->setHeaderData(2, Qt::Horizontal, tr("Descrição"));
    this->tableModel->select();
    this->table->setModel(this->tableModel);
    this->table->hideColumn(0);
}

void Form_Categ::setSignals(){
    connect(this->btnCad, SIGNAL(clicked()), this, SLOT(showCad()));
}

void Form_Categ::showCad(){
    cadCateg = new Form_CadCateg(this);
    cadCateg->setModal(true);
    cadCateg->exec();
    this->setTableModel();
    delete cadCateg;
}
