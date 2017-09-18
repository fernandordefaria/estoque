#include "categmodal.h"

CategModal::CategModal(){
    //
}

QString CategModal::getCodigo() const{
    return codigo;
}

void CategModal::setCodigo(const QString &value){
    codigo = value;
}

QString CategModal::getNome() const{
    return nome;
}

void CategModal::setNome(const QString &value){
    nome = value;
}

QString CategModal::getDesc() const{
    return desc;
}

void CategModal::setDesc(const QString &value){
    desc = value;
}
