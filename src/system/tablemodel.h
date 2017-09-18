#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QObject>
#include <QSqlTableModel>
#include <QSqlDatabase>

class TableModel : public QSqlTableModel{
public:
    explicit TableModel(QObject *parent = Q_NULLPTR, QSqlDatabase db = QSqlDatabase());
    bool submit();
};

#endif // TABLEMODEL_H
