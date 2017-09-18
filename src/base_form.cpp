#include "base_form.h"
#include <QDebug>

Base_Form::Base_Form(QWidget *parent) : QDialog(parent) {
    //Create da Classe Form_clie
    createComponents();
    setIcons();
    setLayouts();
    setValuesTable();

    connect(this->btnEdit, SIGNAL(clicked()), this, SLOT(editar()));
    connect(this->btnDel, SIGNAL(clicked()), this, SLOT(remove()));
    connect(this->table, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(doubleClick(QModelIndex)));
}

void Base_Form::doubleClick(const QModelIndex &index) {
    QModelIndexList selection = this->table->selectionModel()->selectedRows(0);

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();
        this->setIndexCod(id);
        if(this->getAutoClose() == true){
            this->close();
        }
    }
}

void Base_Form::createComponents() {
    this->resize(600, 400);
    grid = new QGridLayout(this);
    layTop = new QHBoxLayout();
    table = new Table(this);
    btnCad = new QPushButton(this);
    btnEdit = new QPushButton(this);
    btnDel = new QPushButton(this);
    pesq = new QLineEdit(this);
    tableModel = new QSqlTableModel();
}

void Base_Form::setIcons() {
    icAdd.addFile(QStringLiteral(":/imagens/icons/add-icon-1.png"), QSize(), QIcon::Normal, QIcon::Off);
    icEdt.addFile(QStringLiteral(":/imagens/icons/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
    icDel.addFile(QStringLiteral(":/imagens/icons/1493332785_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
    btnCad->setIcon(icAdd);
    btnCad->setText("Cadastrar");
    btnEdit->setIcon(icEdt);
    btnEdit->setText("Editar");
    btnDel->setIcon(icDel);
    btnDel->setText("Deletar");
}

void Base_Form::setLayouts() {
    layTop->addWidget(pesq);
    layTop->addWidget(btnCad);
    layTop->addWidget(btnEdit);
    layTop->addWidget(btnDel);
    grid->addLayout(layTop, 0, 0, 1, 1);
    grid->addWidget(table, 1, 0, 1, 1);
}

void Base_Form::setValuesTable() {
    //table->setEditTriggers(QAbstractItemView::EditKeyPressed);
    //table->setEditTriggers(QAbstractItemView::SelectedClicked);
    table->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
    table->setSelectionMode(QAbstractItemView::SingleSelection);
    table->setSelectionBehavior(QAbstractItemView::SelectRows);
    table->resizeRowsToContents();
    table->resizeColumnsToContents();
    this->tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    
}

bool Base_Form::submit() {
    tableModel->database().transaction();
    if (tableModel->submitAll()) {
        tableModel->database().commit();
        return true;
    } else {
        tableModel->database().rollback();
        return false;
    }
}

void Base_Form::remove() {
    QMessageBox::StandardButton dialog;
    dialog = QMessageBox::warning(this, "Atenção!",
            "Tem certeza que deseja excluir este campo?",
            QMessageBox::Yes | QMessageBox::No);
    if (dialog == QMessageBox::Yes) {
        tableModel->removeRow(table->currentIndex().row());
        if (!submit())
            qDebug() << "Erro ou remover o campos!" << endl;
    }
}

void Base_Form::editar() {
    QMessageBox::StandardButton dialog;
    dialog = QMessageBox::warning(this, "Atenção!",
            "Tem certeza que deseja editar esse campo?",
            QMessageBox::Yes | QMessageBox::No);
    if (dialog == QMessageBox::Yes) {
        if (!submit())
            qDebug() << "Erro ou editar o campos!" << endl;
    }
}

void Base_Form::changeEvent(QEvent *e) {
    QDialog::changeEvent(e);
    if (e->type() == QEvent::WindowStateChange) {
        if (this->isEnabled()) {
            per();
        } else {
            per();
        }
    }
}

void Base_Form::per() {
    Permissao * per = new Permissao(this);
    bool enab = false;
    if (per->getTipo() == "user") {
        enab = false;
    } else {
        enab = true;
    }

    this->btnDel->setEnabled(enab);
    this->btnEdit->setEnabled(enab);

    delete per;
}

bool Base_Form::getAutoClose() const
{
    return autoClose;
}

void Base_Form::setAutoClose(bool value)
{
    autoClose = value;
}

QString Base_Form::getIndexCod() const
{
    return indexCod;
}

void Base_Form::setIndexCod(const QString &value)
{
    indexCod = value;
}

Table *Base_Form::getTable() const {
    return table;
}

Base_Form::~Base_Form() {
    delete tableModel;
    delete btnDel;
    delete btnEdit;
    delete btnCad;
    delete table;
    delete layTop;
    delete grid;
}
