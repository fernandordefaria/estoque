#include "log.h"
#include <QTextStream>
#include <qdatetime.h>

Log::Log(QObject *parent) : QObject(parent){
    file = new QFile("erros.log");
    if(!file->open(QIODevice::Append | QIODevice::Text))
        return;
    QTextStream out(file);
    out << "Data de hoje: " << endl;
}

QFile *Log::getFile() const{
    return file;
}

QString Log::getMensagem() const{
    return mensagem;
}

void Log::setMensagem(const QString &value){
    mensagem = value;
}

Log::~Log(){
    delete file;
}
