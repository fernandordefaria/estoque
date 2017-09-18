#include "produtosmodal.h"

ProdutosModal::ProdutosModal(){
    //
}

QString ProdutosModal::getNome() const{
    return nome;
}

void ProdutosModal::setNome(const QString &value){
    nome = value;
}

QString ProdutosModal::getMarca() const{
    return marca;
}

void ProdutosModal::setMarca(const QString &value){
    marca = value;
}

QString ProdutosModal::getModelo() const{
    return modelo;
}

void ProdutosModal::setModelo(const QString &value){
    modelo = value;
}

float ProdutosModal::getValor() const{
    return valor;
}

void ProdutosModal::setValor(float value){
    valor = value;
}

int ProdutosModal::getQuant() const{
    return quant;
}

void ProdutosModal::setQuant(int value){
    quant = value;
}

int ProdutosModal::getCateg() const{
    return categ;
}

void ProdutosModal::setCateg(int value){
    categ = value;
}
