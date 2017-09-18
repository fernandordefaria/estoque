#ifndef DIALOG_LOGIN_H
#define DIALOG_LOGIN_H

#include <QDialog>
#include "login.h"
#include <QObject>
#include <QCloseEvent>
#include "connection.h"

namespace Ui {
class Dialog_Login;
}

class Dialog_Login : public QDialog{
    Q_OBJECT
public:
    explicit Dialog_Login(QWidget *parent = 0);
    ~Dialog_Login();
    void startSignals();
private slots:
    void entrarSistema();
    void lembrar();
    void logar();
private:
    void closeEvent(QCloseEvent *event);
    Ui::Dialog_Login *ui;
    Login *login;
    QSqlQuery *query;
    Dados *dados;
    QSqlQuery *cUser;
};

#endif // DIALOG_LOGIN_H
