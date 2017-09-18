#ifndef FORM_CADUSER_H
#define FORM_CADUSER_H

#include <QDialog>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>

namespace Ui {
class form_cadUser;
}

class form_cadUser : public QDialog{
    Q_OBJECT
public:
    explicit form_cadUser(QWidget *parent = 0);
    ~form_cadUser();

private slots:
    void on_btnCad_clicked();
    void on_btnSair_clicked();
private:
    Ui::form_cadUser *ui;
    //Users *users;
    QSqlQuery *query;
};

#endif // FORM_CADUSER_H
