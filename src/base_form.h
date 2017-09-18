#ifndef BASE_FORM_H
#define BASE_FORM_H

#include <QWidget>
#include <QObject>
#include <QDialog>
#include <QGridLayout>
#include "table.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QIcon>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QDebug>
#include <QEvent>
#include <QSqlQueryModel>
#include <QModelIndexList>
#include "utils/permissao.h"

QT_BEGIN_NAMESPACE
class QSqlTableModel;
class QGridLayout;
class QTableView;
class QPushButton;
class QLineEdit;
class QHBoxLayout;
class QIcon;
class QIcon;
class QIcon;
QT_END_NAMESPACE

class Base_Form : public QDialog{
    Q_OBJECT
public:
    explicit Base_Form(QWidget *parent = 0);
    void createComponents();
    void setIcons();
    void setLayouts();
    void setValuesTable();
    Table *getTable() const;
    ~Base_Form();
    QString getIndexCod() const;
    void setIndexCod(const QString &value);

    bool getAutoClose() const;
    void setAutoClose(bool value);

public slots:
    bool submit();
    void remove();
    void editar();
    void doubleClick(const QModelIndex &index);
protected:
    void changeEvent(QEvent *e);
    void per();
    QSqlTableModel *tableModel;
    QPushButton *btnCad;
    QPushButton *btnEdit;
    QPushButton *btnDel;
    Table *table;
    QLineEdit *pesq;
    QHBoxLayout *layTop;
private:
    QGridLayout *grid;
    QIcon icAdd;
    QIcon icEdt;
    QIcon icDel;
    QString indexCod;
    bool autoClose = false;
};

#endif // FORM_CLIE_H
