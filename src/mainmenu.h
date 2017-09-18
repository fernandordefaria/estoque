#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <QCloseEvent>
#include "form_users.h"
#include "dialog_login.h"
#include "form_tecnico.h"
#include "form_os.h"
#include "form_produtos.h"
#include "form_clie.h"
#include "utils/permissao.h"
#include "form_faturamento.h"
#include <QEvent>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow{
    Q_OBJECT
public:
    explicit MainMenu(QWidget *parent = 0);
    void setSignals();
    ~MainMenu();
private slots:
    void vPermi();
    void abrirCadClie();
    void abrirProd();
    void on_actUser_triggered();
    void on_actOs_triggered();
    void onLogout();
    void on_actTec_triggered();
    void on_actionactFaturamento_triggered();

private:
    void closeEvent(QCloseEvent *event);
    void changeEvent(QEvent *event);
    Form_Clie *formClie;
    Form_Produtos *fProd;
    Form_Users *fUser;
    Form_Os *fOs;
    Form_Tecnico *fTec;
    Dialog_Login login;
    Ui::MainMenu *ui;
    Permissao *per;
    Form_Faturamento *fatur;
};

#endif // MAINMENU_H
