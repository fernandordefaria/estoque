#ifndef FORM_OS_H
#define FORM_OS_H

#include "base_form.h"
#include "form_cados.h"
#include "report/reportos.h"

class Form_Os : public Base_Form{
    Q_OBJECT
public:
    explicit Form_Os(QWidget *parent = 0);
    void setSignals();
    void setTable();
    void setBtnReport();
public slots:
    void showCad();
    void edtForm();
    void showReport();
    void filterTable(const QString &);
private:
    Form_CadOS *cadOs;
    void edt();
    QPushButton *btnReport;
    ReportOs rep;
};

#endif // FORM_OS_H
