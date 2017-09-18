#ifndef LOG_H
#define LOG_H

#include <QObject>
#include <QFile>
#include <QString>

class Log : public QObject{
    Q_OBJECT
public:
    explicit Log(QObject *parent = 0);

    QFile *getFile() const;
    QString getMensagem() const;
    void setMensagem(const QString &value);

    ~Log();
private:
    QFile *file;
    QString mensagem;
};

#endif // LOG_H
