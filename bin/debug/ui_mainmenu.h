/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QAction *actUser;
    QAction *actProd;
    QAction *actOs;
    QAction *actClie;
    QAction *actTec;
    QAction *actLogout;
    QAction *actSair;
    QAction *actionactFaturamento;
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuCadastros;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(748, 550);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/icons/1493109010_inventory-maintenance.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainMenu->setWindowIcon(icon);
        MainMenu->setStyleSheet(QString::fromUtf8(""));
        actUser = new QAction(MainMenu);
        actUser->setObjectName(QString::fromUtf8("actUser"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/icons/acessoclientes.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/imagens/1493108886_Accept-Male-User.png"), QSize(), QIcon::Normal, QIcon::On);
        actUser->setIcon(icon1);
        actUser->setAutoRepeat(false);
        actUser->setVisible(true);
        actProd = new QAction(MainMenu);
        actProd->setObjectName(QString::fromUtf8("actProd"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/icons/1493109065_product.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/imagens/1493109059_product.png"), QSize(), QIcon::Normal, QIcon::On);
        actProd->setIcon(icon2);
        actOs = new QAction(MainMenu);
        actOs->setObjectName(QString::fromUtf8("actOs"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/icons/1493108748_order-history.png"), QSize(), QIcon::Normal, QIcon::Off);
        actOs->setIcon(icon3);
        actClie = new QAction(MainMenu);
        actClie->setObjectName(QString::fromUtf8("actClie"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagens/icons/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        actClie->setIcon(icon4);
        actTec = new QAction(MainMenu);
        actTec->setObjectName(QString::fromUtf8("actTec"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imagens/icons/tecnico.png"), QSize(), QIcon::Normal, QIcon::Off);
        actTec->setIcon(icon5);
        actLogout = new QAction(MainMenu);
        actLogout->setObjectName(QString::fromUtf8("actLogout"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imagens/icons/sign-out-logout-icon-0.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLogout->setIcon(icon6);
        actSair = new QAction(MainMenu);
        actSair->setObjectName(QString::fromUtf8("actSair"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imagens/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSair->setIcon(icon7);
        actionactFaturamento = new QAction(MainMenu);
        actionactFaturamento->setObjectName(QString::fromUtf8("actionactFaturamento"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imagens/icons/fineceiro.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionactFaturamento->setIcon(icon8);
        centralWidget = new QWidget(MainMenu);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(0, 0, 751, 511));
        mdiArea->setStyleSheet(QString::fromUtf8(""));
        MainMenu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainMenu);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 748, 20));
        menuBar->setNativeMenuBar(true);
        menuCadastros = new QMenu(menuBar);
        menuCadastros->setObjectName(QString::fromUtf8("menuCadastros"));
        MainMenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainMenu);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(48, 48));
        mainToolBar->setFloatable(false);
        MainMenu->addToolBar(Qt::LeftToolBarArea, mainToolBar);

        menuBar->addAction(menuCadastros->menuAction());
        menuCadastros->addAction(actUser);
        menuCadastros->addAction(actProd);
        menuCadastros->addAction(actTec);
        mainToolBar->addAction(actOs);
        mainToolBar->addAction(actionactFaturamento);
        mainToolBar->addAction(actProd);
        mainToolBar->addAction(actClie);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actUser);
        mainToolBar->addAction(actTec);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actLogout);
        mainToolBar->addAction(actSair);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "Sistema de Estoque", nullptr));
        actUser->setText(QCoreApplication::translate("MainMenu", "Usu\303\241rios", nullptr));
#if QT_CONFIG(tooltip)
        actUser->setToolTip(QCoreApplication::translate("MainMenu", "Usu\303\241rios", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actUser->setShortcut(QCoreApplication::translate("MainMenu", "Ctrl+Shift+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actProd->setText(QCoreApplication::translate("MainMenu", "Cadastro de Produtos", nullptr));
#if QT_CONFIG(shortcut)
        actProd->setShortcut(QCoreApplication::translate("MainMenu", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actOs->setText(QCoreApplication::translate("MainMenu", "Ordem de Servi\303\247o", nullptr));
#if QT_CONFIG(shortcut)
        actOs->setShortcut(QCoreApplication::translate("MainMenu", "Ctrl+Alt+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actClie->setText(QCoreApplication::translate("MainMenu", "Clientes", nullptr));
#if QT_CONFIG(tooltip)
        actClie->setToolTip(QCoreApplication::translate("MainMenu", "Clientes", nullptr));
#endif // QT_CONFIG(tooltip)
        actTec->setText(QCoreApplication::translate("MainMenu", "T\303\251cnico", nullptr));
#if QT_CONFIG(shortcut)
        actTec->setShortcut(QCoreApplication::translate("MainMenu", "Ctrl+Alt+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actLogout->setText(QCoreApplication::translate("MainMenu", "Logout", nullptr));
        actSair->setText(QCoreApplication::translate("MainMenu", "Sair", nullptr));
        actionactFaturamento->setText(QCoreApplication::translate("MainMenu", "actFaturamento", nullptr));
#if QT_CONFIG(tooltip)
        actionactFaturamento->setToolTip(QCoreApplication::translate("MainMenu", "Faturamento", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionactFaturamento->setShortcut(QCoreApplication::translate("MainMenu", "Ctrl+Alt+Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        menuCadastros->setTitle(QCoreApplication::translate("MainMenu", "Cadastros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
