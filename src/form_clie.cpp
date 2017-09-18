#include "form_clie.h"
#include <QModelIndexList>

Form_Clie::Form_Clie(QWidget *parent) : Base_Form(parent) {
    this->setWindowTitle("Cadastro de Clientes");
    this->setSignals();
    this->setTable();
}

void Form_Clie::showCad() {
    cadClie = new Form_CadClie(this);
    cadClie->setModal(true);
    cadClie->exec();
    delete cadClie;
    setTable();
}

void Form_Clie::setSignals() {
    connect(this->btnCad, SIGNAL(clicked()), this, SLOT(showCad()));
    connect(this->pesq, SIGNAL(textChanged(QString)), this, SLOT(filterTable(QString)));
}

void Form_Clie::filterTable(const QString&) {
    this->tableModel->setFilter("nome LIKE '" + this->pesq->text()+"%'");
    this->tableModel->select();
    this->table->setModel(this->tableModel);
}

void Form_Clie::setTable() {
    this->tableModel->setTable("clientes");
    this->tableModel->setHeaderData(0, Qt::Horizontal, tr("Código"));
    this->tableModel->setHeaderData(1, Qt::Horizontal, tr("Nome"));
    this->tableModel->setHeaderData(2, Qt::Horizontal, tr("Sobrenome"));
    this->tableModel->setHeaderData(3, Qt::Horizontal, tr("CPF"));
    this->tableModel->setHeaderData(4, Qt::Horizontal, tr("Sexo"));
    this->tableModel->setHeaderData(5, Qt::Horizontal, tr("Endereço"));
    this->tableModel->setHeaderData(6, Qt::Horizontal, tr("Data Nascimento"));
    this->tableModel->setHeaderData(7, Qt::Horizontal, tr("Telefone"));
    this->tableModel->setHeaderData(8, Qt::Horizontal, tr("Email"));
    this->tableModel->select();

    this->table->setModel(this->tableModel);
}
