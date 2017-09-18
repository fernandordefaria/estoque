#include "form_tecnico.h"

Form_Tecnico::Form_Tecnico(QWidget *parent)
: Base_Form(parent) {
    this->setWindowTitle("Técnico");
    this->setSignals();
    this->setTableModel();
}

void Form_Tecnico::setSignals() {
    connect(this->btnCad, SIGNAL(clicked()), this, SLOT(showCad()));
    connect(this->pesq, SIGNAL(textChanged(QString)), this, SLOT(filterTable(QString)));
}

void Form_Tecnico::filterTable(const QString&) {
    this->tableModel->setFilter("nome LIKE '" + this->pesq->text()+"%'");
    this->tableModel->select();
    this->table->setModel(this->tableModel);
}

void Form_Tecnico::setTableModel() {
    this->tableModel->setTable("tecnico");

    this->tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    this->tableModel->setHeaderData(0, Qt::Horizontal, tr("Código"));
    this->tableModel->setHeaderData(1, Qt::Horizontal, tr("Nome"));
    this->tableModel->setHeaderData(2, Qt::Horizontal, tr("Telefone"));

    this->tableModel->select();

    this->table->setModel(this->tableModel);
    this->table->hideColumn(0);
}

void Form_Tecnico::showCad() {
    cadTec = new Form_CadTec(this);
    cadTec->setModal(true);
    cadTec->exec();
    delete cadTec;
    this->setTableModel();
}

