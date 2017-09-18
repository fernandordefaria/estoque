#ifndef PERMISSAO_H
#define PERMISSAO_H

#include <QObject>
#include <QSqlQuery>
#include <QString>
#include <QDebug>
#include <QSqlError>
#include "exceptionsql.h"

class Permissao : public QObject{
    Q_OBJECT
public:
    explicit Permissao(QObject *parent = 0);

    QString getTipo() const;
    void setTipo(const QString &value);

    ~Permissao();
private:
    QSqlQuery *query;
    QString tipo;
};

#endif // PERMISSAO_H
