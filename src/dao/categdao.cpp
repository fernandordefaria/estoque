#include "categdao.h"

CategDao::CategDao(){
    categModel = new CategModal();
    query = new QSqlQuery();
}

CategModal *CategDao::getCategModel() const{
    return categModel;
}

void CategDao::setCategModel(CategModal *value){
    categModel = value;
}

bool CategDao::insert(){
    try {
        query->prepare("INSERT INTO categ(nome, descricao) VALUES(:nome, :descricao)");
        query->bindValue(":nome", categModel->getNome());
        query->bindValue(":descricao", categModel->getDesc());
        if(query->exec())
            return true;
        return false;
    } catch(QException &e){
        qDebug() << query->lastError() << endl;
        e.raise();
    }
}

CategDao::~CategDao(){
    delete query;
    delete categModel;
}
