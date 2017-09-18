#include "form_cados.h"
#include "ui_form_cados.h"

Form_CadOS::Form_CadOS(QWidget *parent) :
QDialog(parent), ui(new Ui::Form_CadOS) {
    ui->setupUi(this);
    tableProd = new QSqlTableModel();
    ui->edtStatus->setEnabled(false);
    this->setSignals();
    this->setTableProd();
    this->validate();
    this->setDataEdits();
}

void Form_CadOS::setSignals() {
    connect(ui->btnClie, SIGNAL(clicked()), this, SLOT(showClie()));
    connect(ui->btnTec, SIGNAL(clicked()), this, SLOT(showTec()));
    connect(ui->btnClose, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->btnCad, SIGNAL(clicked()), this, SLOT(cadOs()));
}

void Form_CadOS::setTableProd() {
    this->tableProd->setTable("produtos");
    this->tableProd->setHeaderData(0, Qt::Horizontal, tr("Código do Produto"));
    this->tableProd->setHeaderData(1, Qt::Horizontal, tr("Descrição"));
    this->tableProd->setHeaderData(2, Qt::Horizontal, tr("Unidade"));
    this->tableProd->setHeaderData(3, Qt::Horizontal, tr("Valor Venda"));
    this->tableProd->setHeaderData(4, Qt::Horizontal, tr("Valor Compra"));
    this->tableProd->setHeaderData(5, Qt::Horizontal, tr("Categoria"));
    tableProd->select();
    ui->tableProdutos->setModel(tableProd);
}

void Form_CadOS::validate() {
    ui->edtCodClie->setValidator(new QIntValidator(ui->edtCodClie));
    ui->edtCodTec->setValidator(new QIntValidator(ui->edtCodTec));
    ui->edtValRep->setValidator(new QDoubleValidator(ui->edtValRep));
}

void Form_CadOS::cadOs() {
    //Pego o ultimo registro e
    //salvo na tabela de prod_os
    QMessageBox msg;
    if(this->ui->edtNumOS->text().length() <= 0){
        if (ui->edtMarca->text().length() > 0 ||
                ui->edtModelo->text().length() > 0 ||
                ui->edtImai->text().length() > 0 ||
                ui->edtCodClie->text().length() > 0 ||
                ui->areaDefeito->toPlainText().length() > 0 ||
                ui->areaLaudo->toPlainText().length() > 0 ||
                ui->edtValRep->text().length() > 0 ||
                ui->edtCodTec->text().length() > 0) {
            //Insiro a nota no bando de dados
            QSqlTableModel *model = new QSqlTableModel();
            model->setTable("os");
            model->insertRow(0, QModelIndex());
            model->setData(model->index(0, 1), QDate::currentDate());
            model->setData(model->index(0, 2), ui->edtMarca->text());
            model->setData(model->index(0, 3), ui->edtModelo->text());
            model->setData(model->index(0, 4), ui->edtImai->text());
            model->setData(model->index(0, 5), ui->edtCodClie->text());
            model->setData(model->index(0, 6), ui->areaApare->toPlainText());
            model->setData(model->index(0, 7), ui->areaDefeito->toPlainText());
            model->setData(model->index(0, 8), ui->areaLaudo->toPlainText());
            model->setData(model->index(0, 9), ui->edtValRep->text().replace(",", "."));
            model->setData(model->index(0, 10), ui->cbTipoPg->currentText());
            model->setData(model->index(0, 11), ui->edtCodTec->text());
            model->setData(model->index(0, 12), ui->edtDateRep->date().toString("yyyy-MM-dd"));
            if (model->submitAll()) {
                try {
                    model->clear();
                    model->setTable("os");
                    model->select();
                    model->rowCount(QModelIndex());
                    QSqlTableModel *prod = new QSqlTableModel();
                    QModelIndexList selection = this->ui->tableProdutos->selectionModel()->selectedRows();
                    if (!selection.empty()) {
                        QModelIndex index = selection.at(0);
                        int cod = model->record(model->rowCount(QModelIndex())-1).value("codigo").toInt();
                        foreach(index, selection){
                            prod->setTable("prod_os");
                            prod->insertRow(0, QModelIndex());
                            prod->setData(prod->index(0, 0), cod);
                            prod->setData(prod->index(0, 1), index.data().toInt());
                            prod->submitAll();
                        }
                    }
                } catch (QException &e) {
                    qDebug() << QSqlError::StatementError << endl;
                }
                model->database().commit();
                msg.setText(MSG_SUCESS_CAD);
                msg.exec();
                delete model;
            } else {
                msg.setText(MSG_ERRO_CAD);
                msg.exec();
            }
        } else {
            msg.setText(MSG_BRANCO);
            msg.exec();
        }
    }else{
        QSqlQuery query;
        query.prepare("UPDATE os SET "
                      "data = :data,"
                      "marca = :marca,"
                      "modelo = :modelo,"
                      "imei = :imei,"
                      "codClie = :codClie,"
                      "aparencia= :aparencia,"
                      "defeito = :defeito,"
                      "laudo = :laudo,"
                      "valorReparo = :valorReparo,"
                      "tipoPg = :tipoPg,"
                      "codTec = :codTec,"
                      "dataReparo = :dataReparo,"
                      "status = :status "
                      "WHERE codigo = :codigo ");
        query.bindValue(":data", ui->edtDataOs->text());
        query.bindValue(":marca", ui->edtMarca->text());
        query.bindValue(":modelo", ui->edtModelo->text());
        query.bindValue(":imei", ui->edtImai->text());
        query.bindValue(":codClie", ui->edtCodClie->text());
        query.bindValue(":aparencia", ui->areaApare->toPlainText());
        query.bindValue(":defeito", ui->areaDefeito->toPlainText());
        query.bindValue(":laudo", ui->areaLaudo->toPlainText());
        query.bindValue(":valorReparo", ui->edtValRep->text().replace(",", "."));
        query.bindValue(":tipoPg", ui->cbTipoPg->currentText());
        query.bindValue(":codTec", ui->edtCodTec->text());
        query.bindValue(":dataReparo", ui->edtDateRep->date().toString("yyyy-MM-dd"));
        query.bindValue(":codigo", ui->edtNumOS->text());
        if(query.exec()){
            msg.setText("Ordem de Serviço editada com sucesso.");
            msg.exec();
        }else {
            msg.setText(MSG_ERRO_CAD);
            msg.exec();
        }
    }
}

void Form_CadOS::setUpdateFields(int codigo){
    //int cod = model->record(model->rowCount(QModelIndex())-1).value("codigo").toInt();
    if(codigo > 0){
        QSqlQuery query;
        query.prepare("SELECT * FROM os WHERE codigo = :codigo");
        query.bindValue(":codigo", codigo);
        if(query.exec() && query.next()){
            this->ui->edtNumOS->setText(query.value(0).toString());
            this->ui->edtDataOs->setText(query.value(1).toString());
            this->ui->edtMarca->setText(query.value(2).toString());
            this->ui->edtModelo->setText(query.value(3).toString());
            this->ui->edtImai->setText(query.value(4).toString());
            this->ui->edtCodClie->setText(query.value(5).toString());
            this->ui->areaApare->setPlainText(query.value(6).toString());
            this->ui->areaDefeito->setPlainText(query.value(7).toString());
            this->ui->areaLaudo->setPlainText(query.value(8).toString());
            this->ui->edtValRep->setText(query.value(9).toString());
            this->ui->edtCodTec->setText(query.value(11).toString());
            this->ui->edtDateRep->setDate(query.value(12).toDate());
            this->ui->edtStatus->setText(query.value(13).toString());
        }
    }
}

void Form_CadOS::setDataEdits(){
    this->ui->edtDateRep->setMinimumDateTime(QDateTime::currentDateTime());
    this->ui->edtDateRep->setMinimumDate(QDate::currentDate());
    this->ui->edtDateRep->setDateTime(QDateTime::currentDateTime());
    this->ui->edtDateRep->setDate(QDate::currentDate());
}

void Form_CadOS::showClie() {
    fc = new Form_Clie(this);
    fc->setModal(true);
    fc->getTable()->setEditTriggers(QAbstractItemView::NoEditTriggers);
    fc->setAutoClose(true);
    fc->exec();
    this->ui->edtCodClie->setText(fc->getIndexCod());
    delete fc;
}

void Form_CadOS::showTec() {
    fp = new Form_Tecnico(this);
    fp->setModal(true);
    fp->getTable()->setEditTriggers(QAbstractItemView::NoEditTriggers);
    fp->setAutoClose(true);
    fp->exec();
    this->ui->edtCodTec->setText(fp->getIndexCod());
    this->fp->close();
    delete fp;
}

Form_CadOS::~Form_CadOS() {
    delete tableProd;
    delete ui;
}
