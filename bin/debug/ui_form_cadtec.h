/********************************************************************************
** Form generated from reading UI file 'form_cadtec.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CADTEC_H
#define UI_FORM_CADTEC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Form_CadTec
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *edtNome;
    QLineEdit *edtTelefone;
    QPushButton *btnCancelar;
    QPushButton *btnCadTec;

    void setupUi(QDialog *Form_CadTec)
    {
        if (Form_CadTec->objectName().isEmpty())
            Form_CadTec->setObjectName(QString::fromUtf8("Form_CadTec"));
        Form_CadTec->resize(381, 172);
        frame = new QFrame(Form_CadTec);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 361, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 59, 14));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 59, 14));
        edtNome = new QLineEdit(frame);
        edtNome->setObjectName(QString::fromUtf8("edtNome"));
        edtNome->setGeometry(QRect(10, 30, 341, 22));
        edtTelefone = new QLineEdit(frame);
        edtTelefone->setObjectName(QString::fromUtf8("edtTelefone"));
        edtTelefone->setGeometry(QRect(10, 80, 341, 22));
        btnCancelar = new QPushButton(Form_CadTec);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(290, 140, 80, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/icons/1493332785_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelar->setIcon(icon);
        btnCadTec = new QPushButton(Form_CadTec);
        btnCadTec->setObjectName(QString::fromUtf8("btnCadTec"));
        btnCadTec->setGeometry(QRect(200, 140, 80, 22));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/icons/1493238513_Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCadTec->setIcon(icon1);

        retranslateUi(Form_CadTec);

        QMetaObject::connectSlotsByName(Form_CadTec);
    } // setupUi

    void retranslateUi(QDialog *Form_CadTec)
    {
        Form_CadTec->setWindowTitle(QCoreApplication::translate("Form_CadTec", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Form_CadTec", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("Form_CadTec", "Telefone", nullptr));
        btnCancelar->setText(QCoreApplication::translate("Form_CadTec", "Encerrar", nullptr));
        btnCadTec->setText(QCoreApplication::translate("Form_CadTec", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_CadTec: public Ui_Form_CadTec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CADTEC_H
