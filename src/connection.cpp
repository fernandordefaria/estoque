#include "connection.h"
#include <QDebug>
#include <QSqlError>
#include <QLibrary>

Dados::Dados(QObject *parent) : QObject(parent){
    db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setHostName(HOSTNAME_PGSQL);
    //db.setPort(PORT_PGSQL);
    //db.setUserName(USER_PGSQL);
    //db.setPassword(PASSWD_PGSQL);
    //db.setDatabaseName(DATABASE_PRD);
    db.setDatabaseName("estoque.db");
    if(!db.open()){
        qDebug() << db.lastError() << endl;
    }
}

QSqlDatabase Dados::getConexao(){
    return this->db;
}

Dados::~Dados(){
    db.close();
}
