#ifndef FORM_USERS_H
#define FORM_USERS_H

#include <QWidget>
#include <QObject>
#include "base_form.h"
#include "form_caduser.h"

class Form_Users : public Base_Form{
    Q_OBJECT
public:
    explicit Form_Users(QWidget *parent = 0);
    void setSignals();
public slots:
    void showCad();
    void filterTable(const QString &);
private:
    void setTableModel();
    form_cadUser *fCadUser;
};

#endif // FORM_USERS_H
