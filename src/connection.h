#ifndef DADOS_H
#define DADOS_H

#include <QObject>
#include <QSqlDatabase>
#include "utils/constantes.h"

class Dados : public QObject{
    Q_OBJECT
public:
    explicit Dados(QObject *parent = 0);
    QSqlDatabase getConexao();
    ~Dados();
private:
    QSqlDatabase db;
};

#endif // DADOS_H
