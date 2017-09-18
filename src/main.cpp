#include "mainmenu.h"
#include "dialog_login.h"
#include <QApplication>
#include "log.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    MainMenu w;
    w.show();

    Dialog_Login l;
    l.show();


    Log log;

    return a.exec();
}
