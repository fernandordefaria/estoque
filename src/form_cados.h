#ifndef FORM_CADOS_H
#define FORM_CADOS_H

#include "form_clie.h"
#include "form_tecnico.h"
#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>
#include <QIntValidator>
#include <QString>
#include <QPushButton>
#include <QModelIndexList>
#include <QModelIndex>
#include <QMessageBox>
#include <QVariant>
#include <QSqlError>
#include "utils/property.h"
#include <QSqlRecord>
#include <QDateTime>
#include <QDate>

namespace Ui {
class Form_CadOS;
}

class Form_CadOS : public QDialog{
    Q_OBJECT
public:
    explicit Form_CadOS(QWidget *parent = 0);
    void setSignals();
    void setTableProd();
    void validate();
    void setUpdateFields(int codigo);
    void setDataEdits();
    ~Form_CadOS();
private slots:
    void showClie();
    void showTec();
    void cadOs();
private:
    Ui::Form_CadOS *ui;
    QSqlTableModel *tableProd;
    Form_Clie *fc;
    Form_Tecnico *fp;
};

#endif // FORM_CADOS_H
