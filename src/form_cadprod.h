#ifndef FORM_CADPROD_H
#define FORM_CADPROD_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include "form_categ.h"
#include <QFocusEvent>

namespace Ui {
class Form_CadProd;
}

class Form_CadProd : public QDialog{
    Q_OBJECT
public:
    explicit Form_CadProd(QWidget *parent = 0);
    void validators();
    void setSignals();
    ~Form_CadProd();
private slots:
    void cad();
    void on_pushButton_clicked();
private:
    Ui::Form_CadProd *ui;
    QSqlQuery *query;
    Form_Categ *categ;

};

#endif // FORM_CADPROD_H
