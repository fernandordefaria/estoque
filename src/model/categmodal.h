#ifndef CATEGMODAL_H
#define CATEGMODAL_H

#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>

class CategModal{
public:
    CategModal();

    QString getCodigo() const;
    void setCodigo(const QString &value);

    QString getNome() const;
    void setNome(const QString &value);

    QString getDesc() const;
    void setDesc(const QString &value);

private:
    QSqlQuery *query;
    QString codigo;
    QString nome;
    QString desc;
};

#endif // CATEGMODAL_H
