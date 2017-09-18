#ifndef FORM_CLIE_H
#define FORM_CLIE_H

#include <QObject>
#include "base_form.h"
#include "form_cadclie.h"
#include <QModelIndex>
#include <QString>
#include <QSqlQueryModel>

class Form_Clie : public Base_Form{
    Q_OBJECT
public:
    explicit Form_Clie(QWidget *parent = 0);
    void setTable();
    void setSignals();
public slots:
    void showCad();
    void filterTable(const QString &);
private:
    Form_CadClie *cadClie;
};

#endif // FORM_CLIE_H
