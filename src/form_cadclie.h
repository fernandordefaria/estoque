#ifndef FORM_CADCLIE_H
#define FORM_CADCLIE_H

#include <QDialog>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QDate>

namespace Ui {
class Form_CadClie;
}

class Form_CadClie : public QDialog{
    Q_OBJECT
public:
    explicit Form_CadClie(QWidget *parent = 0);
    ~Form_CadClie();
private slots:
    void sair();
    void onCadClie();
    void validators();
private:
    Ui::Form_CadClie *ui;
    void setSignals();
    QSqlQuery *query;
};

#endif // FORM_CADCLIE_H
