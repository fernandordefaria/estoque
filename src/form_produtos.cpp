#include "form_produtos.h"

Form_Produtos::Form_Produtos(QWidget *parent) : Base_Form(parent) {
    this->setWindowTitle("Produtos");
    this->setTable();
    this->setSignals();
}

void Form_Produtos::showCad() {
    cadProd = new Form_CadProd(this);
    cadProd->setModal(true);
    cadProd->exec();
    delete cadProd;
    this->setTable();
}

void Form_Produtos::filterTable(const QString &) {
    this->tableModel->setFilter("codigo LIKE '" + this->pesq->text()+"%'");
    this->tableModel->select();
    this->table->setModel(this->tableModel);
}

void Form_Produtos::setTable() {
    this->tableModel->setTable("produtos");
    this->tableModel->setHeaderData(0, Qt::Horizontal, tr("Código do Produto"));
    this->tableModel->setHeaderData(1, Qt::Horizontal, tr("Descrição"));
    this->tableModel->setHeaderData(2, Qt::Horizontal, tr("Unidade"));
    this->tableModel->setHeaderData(3, Qt::Horizontal, tr("Valor Venda"));
    this->tableModel->setHeaderData(4, Qt::Horizontal, tr("Valor Compra"));
    this->tableModel->select();
    this->table->setModel(this->tableModel);
}

void Form_Produtos::setSignals() {
    connect(this->btnCad, SIGNAL(clicked()), this, SLOT(showCad()));
    connect(this->pesq, SIGNAL(textChanged(QString)), this, SLOT(filterTable(QString)));
}
