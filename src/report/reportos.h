#ifndef REPORTOS_H
#define REPORTOS_H

#include <QObject>
#include <iostream>
#include <QSqlQuery>
#include <QDebug>
#include <QPrinter>
#include <QTextDocument>

class ReportOs : public QObject{
    Q_OBJECT
public:
    explicit ReportOs(QObject *parent = 0);
    void createPDF(QString codigo);
    void showReport(QString codigo);
    virtual ~ReportOs();
signals:

public slots:
private:
};

#endif // REPORTOS_H
