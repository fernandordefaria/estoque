#ifndef PRODUTOS_H
#define PRODUTOS_H

#include <QObject>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QSqlTableModel>
#include <QMessageBox>

class Produtos : public QObject{
    Q_OBJECT
public:
    explicit Produtos(QObject *parent = 0);
    QSqlTableModel *select(const QString& query) const;
    void insert();
    void update();
    ~Produtos();
private slots:
    void submit();
    void remove(int row);
    void editar();
private:
    QString marca;
    QString modelo;
    QString cod_barra;
    double valor;
    int quant;
    QSqlTableModel *tableModel;
};

#endif // PRODUTOS_H
