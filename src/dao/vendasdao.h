#ifndef VENDASDAO_H
#define VENDASDAO_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QDebug>
#include <QException>

class VendasDAO{
public:
    VendasDAO();
    void getObject();
    bool insert();
    bool update();
    bool deleted(int id);

    int getId() const;
    void setId(int value);

    int getProduct() const;
    void setProduct(int value);

    double getValorVenda() const;
    void setValorVenda(double value);

    int getCliente() const;
    void setCliente(int value);

    int getVendedor() const;
    void setVendedor(int value);

    QDate getDateVenda() const;
    void setDateVenda(const QDate &value);

    char getStatus() const;
    void setStatus(char value);

    ~VendasDAO();
private:
    int id;
    int product;
    double valorVenda;
    int cliente;
    int vendedor;
    QDate dateVenda;
    char status;
    QSqlQuery *query;
};

#endif // VENDASDAO_H
