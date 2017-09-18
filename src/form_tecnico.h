#ifndef FORM_TECNICO_H
#define FORM_TECNICO_H

#include <QObject>
#include "base_form.h"
#include "form_cadtec.h"

class Form_Tecnico : public Base_Form{
    Q_OBJECT
public:
    explicit Form_Tecnico(QWidget *parent = 0);
private slots:
    void showCad();
    void filterTable(const QString &);
private:
    void setSignals();
    void setTableModel();
    Form_CadTec *cadTec;
};

#endif // FORM_TECNICO_H
