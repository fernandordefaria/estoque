#ifndef SYSTEMUTILS_H
#define SYSTEMUTILS_H

#include <QObject>
#include <QString>

class SystemUtils : public QObject{
    Q_OBJECT
public:
    explicit SystemUtils(QObject *parent = 0);
    QString toTelefone(QString &value);
signals:

public slots:
};

#endif // SYSTEMUTILS_H
