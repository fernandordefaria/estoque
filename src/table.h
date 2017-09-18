#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QTableView>
#include <QModelIndexList>
#include <QString>
#include <QModelIndex>

class Table : public QTableView{
    Q_OBJECT
public:
    explicit Table(QWidget *parent = Q_NULLPTR);
private:
};

#endif // TABLEMODEL_H
