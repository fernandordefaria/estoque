#ifndef EXCEPTIONSQL_H
#define EXCEPTIONSQL_H

#include <QObject>
#include <QException>

class ExceptionSQL : public QException{
public:
    void raise()const;
    ExceptionSQL *close()const;
};

#endif // EXCEPTIONSQL_H
