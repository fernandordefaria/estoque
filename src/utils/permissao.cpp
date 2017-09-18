#include "permissao.h"

Permissao::Permissao(QObject *parent)
    : QObject(parent){
    //
    query = new QSqlQuery();

    query->prepare("SELECT u.tipo "
                   "FROM userAtual AS cu "
                   "LEFT JOIN users AS u ON(u.codigo = cu.codigo)");
    try{
        query->exec();
        query->next();
        this->setTipo(query->value(0).toString());
    }catch(ExceptionSQL &e){
        e.raise();
    }
}


QString Permissao::getTipo() const{
    return tipo;
}

void Permissao::setTipo(const QString &value){
    tipo = value;
}

Permissao::~Permissao(){
    delete query;
}
