#ifndef FORM_PRODUTOS_H
#define FORM_PRODUTOS_H

#include "base_form.h"
#include "form_cadprod.h"
#include <QPushButton>
#include <QIcon>
#include <QString>

class Form_Produtos : public Base_Form{
    Q_OBJECT
public:
    explicit Form_Produtos(QWidget *parent = 0);
private slots:
    void showCad();
    void filterTable(const QString &);
private:
    void setTable();
    void setSignals();
    Form_CadProd *cadProd;
};

#endif // FORM_PRODUTOS_H
