#include "form_users.h"

Form_Users::Form_Users(QWidget *parent) : Base_Form(parent){
    this->setWindowTitle("Usuários");
    setSignals();
    this->setTableModel();
}

void Form_Users::setSignals(){
    this->connect(this->btnCad, SIGNAL(clicked()), this, SLOT(showCad()));
    this->connect(this->pesq, SIGNAL(textChanged(QString)), this, SLOT(filterTable(QString)));
}

void Form_Users::showCad(){
    fCadUser = new form_cadUser(this);
    fCadUser->setModal(true);
    fCadUser->exec();
    delete fCadUser;
    this->setTableModel();
}

void Form_Users::filterTable(const QString&) {
    this->tableModel->setFilter("nome LIKE '" + this->pesq->text()+"%'");
    this->tableModel->select();
    this->table->setModel(this->tableModel);
}

void Form_Users::setTableModel(){
    this->tableModel->setTable("users");

    this->tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);

    this->tableModel->setHeaderData(0, Qt::Horizontal, tr("Código"));
    this->tableModel->setHeaderData(1, Qt::Horizontal, tr("Nome"));
    this->tableModel->setHeaderData(2, Qt::Horizontal, tr("Senha"));
    this->tableModel->setHeaderData(3, Qt::Horizontal, tr("Tipo"));

    this->tableModel->select();

    this->table->setModel(this->tableModel);

    this->table->hideColumn(0);
    this->table->hideColumn(2);
}

