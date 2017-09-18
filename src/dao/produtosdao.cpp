#include "produtosdao.h"

ProdutosDAO::ProdutosDAO(QObject *parent) : QSqlQueryModel(parent){
    this->query = new QSqlQuery();
}

void ProdutosDAO::select(QString campo, QString condicao){
    this->query->prepare("SELECT * FROM produtos WHERE :campo=:conficao");
    this->query->bindValue(":campo", campo);
    this->query->bindValue(":condicao", condicao);
    this->query->exec();
    //this->setQuery(this->query);
}

void ProdutosDAO::insert(){
    //
}

ProdutosDAO::~ProdutosDAO(){
    //
}
