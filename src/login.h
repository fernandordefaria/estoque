#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>

class Login{
public:
    Login();
    ~Login();
    bool resNome(const QString& nome, const QString &senha);
    QSqlQuery *getQuery();
private:
    QSqlQuery *query;
};

#endif // LOGIN_H
