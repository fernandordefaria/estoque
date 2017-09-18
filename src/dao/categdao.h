#ifndef CATEGDAO_H
#define CATEGDAO_H

#include <QString>
#include <QList>
#include <QSqlResult>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QException>
#include "../model/categmodal.h"

class CategDao{
public:
    CategDao();
    CategModal *getCategModel() const;
    void setCategModel(CategModal *value);
    bool insert();
    ~CategDao();
private:
    QSqlQuery *query;
    QSqlRecord *record;
    QSqlResult *result;
    CategModal *categModel;
};

#endif // CATEGDAO_H
