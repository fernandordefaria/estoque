#ifndef PRODUTOSDAO_H
#define PRODUTOSDAO_H

#include <QObject>
#include <QSqlQuery>
#include <QVector>
#include "../model/produtosmodal.h"
#include <QSqlQueryModel>

class ProdutosDAO : public QSqlQueryModel{
    Q_OBJECT
public:
    explicit ProdutosDAO(QObject *parent = 0);
    void select(QString campo, QString condicao);
    void insert();
    void update();
    void deleteData();
    ~ProdutosDAO();
private:
    QSqlQuery *query;
    ProdutosModal* produtosModel;
};

#endif // PRODUTOSDAO_H
