/********************************************************************************
** Form generated from reading UI file 'form_cadcateg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CADCATEG_H
#define UI_FORM_CADCATEG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Form_CadCateg
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *edtNome;
    QLabel *label_2;
    QLineEdit *edtDesc;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCad;
    QPushButton *btnCancel;

    void setupUi(QDialog *Form_CadCateg)
    {
        if (Form_CadCateg->objectName().isEmpty())
            Form_CadCateg->setObjectName(QString::fromUtf8("Form_CadCateg"));
        Form_CadCateg->resize(374, 164);
        gridLayout = new QGridLayout(Form_CadCateg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(Form_CadCateg);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        edtNome = new QLineEdit(frame);
        edtNome->setObjectName(QString::fromUtf8("edtNome"));

        verticalLayout->addWidget(edtNome);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        edtDesc = new QLineEdit(frame);
        edtDesc->setObjectName(QString::fromUtf8("edtDesc"));

        verticalLayout->addWidget(edtDesc);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCad = new QPushButton(Form_CadCateg);
        btnCad->setObjectName(QString::fromUtf8("btnCad"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/icons/1493238513_Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCad->setIcon(icon);

        horizontalLayout->addWidget(btnCad);

        btnCancel = new QPushButton(Form_CadCateg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/icons/1493332785_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Form_CadCateg);

        QMetaObject::connectSlotsByName(Form_CadCateg);
    } // setupUi

    void retranslateUi(QDialog *Form_CadCateg)
    {
        Form_CadCateg->setWindowTitle(QCoreApplication::translate("Form_CadCateg", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Form_CadCateg", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("Form_CadCateg", "Descri\303\247\303\243o", nullptr));
        btnCad->setText(QCoreApplication::translate("Form_CadCateg", "Cadastrar", nullptr));
        btnCancel->setText(QCoreApplication::translate("Form_CadCateg", "Encerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_CadCateg: public Ui_Form_CadCateg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CADCATEG_H
