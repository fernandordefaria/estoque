#include "login.h"
#include <QException>
#include <QDebug>

Login::Login(){
    query = new QSqlQuery();
}

Login::~Login(){
    delete query;
}

bool Login::resNome(const QString &nome, const QString &senha){
    try{
        query->exec("SELECT * FROM usuarios WHERE nome='"+nome+"' AND senha='"+senha+"' ");
        return true;
    }catch(QException e){
        qDebug() << "Erro ao tentar acessar o nome" << query->lastError();
        e.raise();
        return false;
    }
}

QSqlQuery *Login::getQuery(){
    return this->query;
}
