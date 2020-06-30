#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>
#include <QJsonArray>
#include <QJsonObject>

class Login{
private:
    QJsonObject &json;
    QJsonArray arr;
public:
    Login();
};

#endif // LOGIN_H
