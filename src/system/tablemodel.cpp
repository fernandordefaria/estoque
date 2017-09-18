#include "tablemodel.h"

TableModel::TableModel(QObject *parent, QSqlDatabase db) : QSqlTableModel(parent, db){

}

bool TableModel::submit(){
    this->database().transaction();
    if(this->submitAll()) {
        this->database().commit();
        return true;
    } else {
        this->database().rollback();
        return false;
    }
}
