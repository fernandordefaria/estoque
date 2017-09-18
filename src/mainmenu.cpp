#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "connection.h"
#include <QCoreApplication>
#include <QDebug>
#include <QMessageBox>

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu){
    ui->setupUi(this);
    //vPermi();
    setSignals();
    this->showMaximized();
    this->setCentralWidget(this->ui->menuBar);
    this->setCentralWidget(this->ui->mdiArea);
}

void MainMenu::setSignals(){
    connect(ui->actClie, SIGNAL(triggered()), SLOT(abrirCadClie()));
    connect(ui->actProd, SIGNAL(triggered()), SLOT(abrirProd()));
    connect(ui->actLogout, SIGNAL(triggered()), SLOT(onLogout()));
    connect(ui->actSair, SIGNAL(triggered()), SLOT(close()));
}

void MainMenu::vPermi(){
    per = new Permissao(this);
    if(per->getTipo() == "user"){
        ui->actUser->setVisible(false);
        ui->actionactFaturamento->setVisible(false);
    }else{
        ui->actUser->setVisible(true);
        ui->actionactFaturamento->setVisible(true);
    }
    delete per;
}

void MainMenu::abrirCadClie(){
    formClie = new Form_Clie(this);
    ui->mdiArea->closeAllSubWindows();
    ui->mdiArea->addSubWindow(formClie);
    formClie->showMaximized();
    formClie->exec();
    delete formClie;
}

void MainMenu::abrirProd(){
    fProd = new Form_Produtos(this);
    ui->mdiArea->closeAllSubWindows();
    ui->mdiArea->addSubWindow(fProd);
    fProd->showMaximized();
    fProd->exec();
    delete fProd;
}

void MainMenu::closeEvent(QCloseEvent *event){
    QMessageBox::StandardButton dialog;
    dialog = QMessageBox::warning(this, "Atenção!",
    "Tem certeza que deseja sair?",
    QMessageBox::Yes | QMessageBox::No);
    if( dialog == QMessageBox::Yes) {
        QApplication::quit();
    } else {
        event->ignore();
    }
}

void MainMenu::changeEvent(QEvent *event){
    QWidget::changeEvent(event);
    if (event->type() == QEvent::ActivationChange){
        if(this->isActiveWindow()){
            vPermi();
        }else{
            vPermi();
        }
    }
}

void MainMenu::on_actUser_triggered(){
    fUser = new Form_Users(this);
    ui->mdiArea->closeAllSubWindows();
    ui->mdiArea->addSubWindow(fUser);
    fUser->showMaximized();
    fUser->exec();
    delete fUser;
}

void MainMenu::on_actOs_triggered(){
    fOs = new Form_Os(this);
    ui->mdiArea->closeAllSubWindows();
    ui->mdiArea->addSubWindow(fOs);
    fOs->showMaximized();
    fOs->exec();
    delete fOs;
}

void MainMenu::onLogout(){
    login.show();
}

void MainMenu::on_actTec_triggered(){
    fTec = new Form_Tecnico(this);
    ui->mdiArea->closeAllSubWindows();
    ui->mdiArea->addSubWindow(fTec);
    fTec->showMaximized();
    fTec->exec();
    delete fTec;
}

void MainMenu::on_actionactFaturamento_triggered(){
    fatur = new Form_Faturamento(this);
    ui->mdiArea->closeAllSubWindows();
    ui->mdiArea->addSubWindow(fatur);
    fatur->showMaximized();
    fatur->exec();
    delete fatur;
}

MainMenu::~MainMenu(){
    delete ui;
}
