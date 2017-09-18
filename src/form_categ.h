#ifndef FORM_CATEG_H
#define FORM_CATEG_H

#include <QObject>
#include "form_cadcateg.h"
#include "base_form.h"
#include <QModelIndexList>
#include <QModelIndex>

class Form_Categ : public Base_Form{
    Q_OBJECT
public:
    explicit Form_Categ(QWidget *parent = 0);
    void setTableModel();
    void setSignals();
public slots:
    void showCad();
private:
    Form_CadCateg *cadCateg;
};

#endif // FORM_CATEG_H
