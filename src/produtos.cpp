#include "produtos.h"

Produtos::Produtos(QObject *parent) :
    QObject(parent){
    //
    tableModel = new QSqlTableModel(this);
}

QSqlTableModel *Produtos::select(const QString &query) const{
    tableModel->setTable("produtos");

    tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tableModel->setHeaderData(0, Qt::Horizontal, tr("Código"));
    tableModel->setHeaderData(1, Qt::Horizontal, tr("Marca"));
    tableModel->setHeaderData(2, Qt::Horizontal, tr("Modelo"));
    tableModel->setHeaderData(3, Qt::Horizontal, tr("Código de Barras"));
    tableModel->setHeaderData(4, Qt::Horizontal, tr("Valor"));
    tableModel->setHeaderData(5, Qt::Horizontal, tr("Quantidade"));

    tableModel->select();

    return tableModel;
}

Produtos::~Produtos(){
    delete tableModel;
}

void Produtos::submit(){
    tableModel->database().transaction();
    if (tableModel->submitAll()) {
        tableModel->database().commit();
    } else {
        tableModel->database().rollback();
        qDebug () << tableModel->lastError().text() << endl;
    }
}

void Produtos::editar(){
    QMessageBox::StandardButton dialog;
    dialog = QMessageBox::warning(NULL,"Atenção!",
    "Tem certeza que deseja editar esse campo?",
    QMessageBox::Yes | QMessageBox::No);
    if(dialog == QMessageBox::Yes) {
        submit();
    }
}

void Produtos::remove(int row){
    QMessageBox::StandardButton dialog;
    dialog = QMessageBox::warning(NULL, "Atenção!",
    "Tem erteza que deseja excluir este campo?",
    QMessageBox::Yes | QMessageBox::No);
    if(dialog == QMessageBox::Yes) {
        tableModel->removeRow(row);
        submit();
    }
}
