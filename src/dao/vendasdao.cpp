#include "vendasdao.h"

VendasDAO::VendasDAO(){
    query = new QSqlQuery;
    QString sql = "SELECT "
                       "id, "
                       "product, "
                       "valorVenda, "
                       "cliente, "
                       "vendedor, "
                       "dataVenda, "
                       "status "
                    "FROM sales "
                    "WHERE id = "+this->getId();
    this->query->prepare(sql);
    this->query->exec();
}

void VendasDAO::getObject(){
    this->setId(this->query->value(0).toInt());
    this->setProduct(this->query->value(1).toInt());
    this->setValorVenda(this->query->value(2).toDouble());
    this->setCliente(this->query->value(3).toInt());
    this->setVendedor(this->query->value(4).toInt());
    this->setDateVenda(this->query->value(5).toDate());
    //this->setStatus(this->query->value(6).toChar());
}

bool VendasDAO::insert(){
    QString sql = "INSERT INTO sales("
                  "id,product, valorVenda,"
                  "cliente, vendedor,dataVenda,status)"
                  "VALUES(:id, :product, :valorVenda,"
                  ":cliente, :vendedor,:dataVenda,:status)";

    this->query->clear();
    this->query->prepare(sql);
    this->query->bindValue(":id", this->getId());
    this->query->bindValue(":product", this->getProduct());
    this->query->bindValue(":valorVenda", this->getValorVenda());
    this->query->bindValue(":cliente", this->getCliente());
    this->query->bindValue(":vendedor", this->getVendedor());
    this->query->bindValue(":dataVenda", this->getDateVenda());
    this->query->bindValue(":status", this->getStatus());
    if(this->query->exec())
        return true;
    return false;
}

bool VendasDAO::update(){
    QString sql = "UPDATE sales SET "
                  "product = :product,"
                  "valorVenda = :valorVenda,"
                  "cliente = :cliente,"
                  "vendedor = :vendedor,"
                  "dataVenda = :dataVenda,"
                  "status = :status "
                  "WHERE id = :id ";

    this->query->clear();
    this->query->prepare(sql);
    this->query->bindValue(":id", this->getId());
    this->query->bindValue(":product", this->getProduct());
    this->query->bindValue(":valorVenda", this->getValorVenda());
    this->query->bindValue(":cliente", this->getCliente());
    this->query->bindValue(":vendedor", this->getVendedor());
    this->query->bindValue(":dataVenda", this->getDateVenda());
    this->query->bindValue(":status", this->getStatus());
    this->query->exec();
        return true;
    return false;
}

bool VendasDAO::deleted(int id){

}

int VendasDAO::getId() const{
    return id;
}

void VendasDAO::setId(int value){
    id = value;
}

int VendasDAO::getProduct() const{
    return product;
}

void VendasDAO::setProduct(int value){
    product = value;
}

double VendasDAO::getValorVenda() const{
    return valorVenda;
}

void VendasDAO::setValorVenda(double value){
    valorVenda = value;
}

int VendasDAO::getCliente() const{
    return cliente;
}

void VendasDAO::setCliente(int value){
    cliente = value;
}

int VendasDAO::getVendedor() const{
    return vendedor;
}

void VendasDAO::setVendedor(int value){
    vendedor = value;
}

QDate VendasDAO::getDateVenda() const{
    return dateVenda;
}

void VendasDAO::setDateVenda(const QDate &value){
    dateVenda = value;
}

char VendasDAO::getStatus() const{
    return status;
}

void VendasDAO::setStatus(char value){
    status = value;
}
