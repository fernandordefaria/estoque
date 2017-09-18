#include "form_os.h"
#include <iostream>

Form_Os::Form_Os(QWidget *parent) : Base_Form(parent){
    this->setWindowTitle("Ordem de Serviço");
    this->setBtnReport();
    this->setSignals();
    this->setTable();
}

void Form_Os::setSignals(){
    this->connect(this->btnCad, SIGNAL(clicked()), this, SLOT(showCad()));
    this->disconnect(this->btnEdit, SIGNAL(clicked()), this, SLOT(editar()));
    this->connect(this->btnEdit, SIGNAL(clicked()), this, SLOT(edtForm()));
    this->connect(this->btnReport, SIGNAL(clicked()), this, SLOT(showReport()));
    this->connect(this->pesq, SIGNAL(textChanged(QString)), this, SLOT(filterTable(QString)));
}

void Form_Os::filterTable(const QString&) {
    this->tableModel->setFilter("codigo LIKE '" + this->pesq->text()+"%'");
    this->tableModel->select();
    this->table->setModel(this->tableModel);
}

void Form_Os::setBtnReport(){
    btnReport = new QPushButton();
    btnReport->setText("Relatório");
    QIcon iReport;
    iReport.addFile(QStringLiteral(":/imagens/icons/reports.png"),
                    QSize(),
                    QIcon::Normal,
                    QIcon::On);
    btnReport->setIcon(iReport);
    btnReport->setVisible(true);
    this->layTop->addWidget(btnReport);
}

void Form_Os::setTable(){
    //
    this->tableModel->setTable("os");
    this->tableModel->setHeaderData(0, Qt::Horizontal, tr("Código"));
    this->tableModel->setHeaderData(1, Qt::Horizontal, tr("Data"));
    this->tableModel->setHeaderData(2, Qt::Horizontal, tr("Marca"));
    this->tableModel->setHeaderData(3, Qt::Horizontal, tr("Modelo"));
    this->tableModel->setHeaderData(4, Qt::Horizontal, tr("IMEI"));
    this->tableModel->setHeaderData(5, Qt::Horizontal, tr("Cliente"));
    this->tableModel->setHeaderData(6, Qt::Horizontal, tr("Aparencia Geral"));
    this->tableModel->setHeaderData(7, Qt::Horizontal, tr("Defeito"));
    this->tableModel->setHeaderData(8, Qt::Horizontal, tr("Laudo"));
    this->tableModel->setHeaderData(9, Qt::Horizontal, tr("Valor do Reparo"));
    this->tableModel->setHeaderData(10, Qt::Horizontal, tr("Tipo de Pagamento"));
    this->tableModel->setHeaderData(11, Qt::Horizontal, tr("Técnico"));
    this->tableModel->setHeaderData(12, Qt::Horizontal, tr("Data do Reparo"));
    this->tableModel->setHeaderData(13, Qt::Horizontal, tr("Status da Ordem"));
    this->tableModel->select();
    this->table->setModel(this->tableModel);
    this->table->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void Form_Os::showCad(){
    cadOs = new Form_CadOS(this);
    cadOs->setModal(true);
    cadOs->exec();
    delete cadOs;
    this->setTable();
}

void Form_Os::edtForm(){
    this->edt();
    this->setTable();
}

void Form_Os::showReport(){
    QModelIndexList selection = this->table->selectionModel()->selectedRows(0);

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();
        this->rep.createPDF(id);
    }
}

void Form_Os::edt(){
    QModelIndexList selection = this->table->selectionModel()->selectedRows(0);

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        int id = idIndex.data().toInt();
        //
        QSqlTableModel *model = new QSqlTableModel();
        model->setTable("os");
        model->selectRow(id);
        this->cadOs = new Form_CadOS(this);
        this->cadOs->setModal(true);
        this->cadOs->setUpdateFields(id);
        this->cadOs->exec();
        delete cadOs;
    }
}
