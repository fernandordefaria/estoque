/********************************************************************************
** Form generated from reading UI file 'form_cados'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CADOS_H
#define UI_FORM_CADOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_CadOS
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabDesc;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *edtMarca;
    QLabel *label_4;
    QLineEdit *edtModelo;
    QLineEdit *edtImai;
    QLabel *label_9;
    QLineEdit *edtValRep;
    QLabel *label_8;
    QFrame *frame_7;
    QGridLayout *gridLayout_6;
    QLineEdit *edtCodClie;
    QLineEdit *edtCodTec;
    QPushButton *btnClie;
    QLabel *label_5;
    QPushButton *btnTec;
    QLabel *label_6;
    QFrame *frame_8;
    QGridLayout *gridLayout_5;
    QDateEdit *edtDateRep;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_10;
    QComboBox *cbTipoPg;
    QLineEdit *edtStatus;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QLineEdit *edtDataOs;
    QLabel *label_2;
    QLineEdit *edtNumOS;
    QLabel *label;
    QWidget *tabDescri;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QPlainTextEdit *areaApare;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QTextEdit *areaDefeito;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QTextEdit *areaLaudo;
    QWidget *tabProd;
    QGridLayout *gridLayout;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QTableView *tableProdutos;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCad;
    QPushButton *btnClose;

    void setupUi(QDialog *Form_CadOS)
    {
        if (Form_CadOS->objectName().isEmpty())
            Form_CadOS->setObjectName(QString::fromUtf8("Form_CadOS"));
        Form_CadOS->resize(751, 444);
        verticalLayout = new QVBoxLayout(Form_CadOS);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabDesc = new QTabWidget(Form_CadOS);
        tabDesc->setObjectName(QString::fromUtf8("tabDesc"));
        tabDesc->setFocusPolicy(Qt::TabFocus);
        tabDesc->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        edtMarca = new QLineEdit(frame_2);
        edtMarca->setObjectName(QString::fromUtf8("edtMarca"));

        gridLayout_2->addWidget(edtMarca, 1, 0, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        edtModelo = new QLineEdit(frame_2);
        edtModelo->setObjectName(QString::fromUtf8("edtModelo"));

        gridLayout_2->addWidget(edtModelo, 1, 1, 1, 1);

        edtImai = new QLineEdit(frame_2);
        edtImai->setObjectName(QString::fromUtf8("edtImai"));

        gridLayout_2->addWidget(edtImai, 5, 0, 1, 1);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        edtValRep = new QLineEdit(frame_2);
        edtValRep->setObjectName(QString::fromUtf8("edtValRep"));

        gridLayout_2->addWidget(edtValRep, 5, 1, 1, 1);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 1, 1, 1);


        gridLayout_4->addWidget(frame_2, 1, 0, 1, 2);

        frame_7 = new QFrame(tab);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_7);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        edtCodClie = new QLineEdit(frame_7);
        edtCodClie->setObjectName(QString::fromUtf8("edtCodClie"));

        gridLayout_6->addWidget(edtCodClie, 1, 0, 1, 1);

        edtCodTec = new QLineEdit(frame_7);
        edtCodTec->setObjectName(QString::fromUtf8("edtCodTec"));

        gridLayout_6->addWidget(edtCodTec, 3, 0, 1, 1);

        btnClie = new QPushButton(frame_7);
        btnClie->setObjectName(QString::fromUtf8("btnClie"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/icons/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClie->setIcon(icon);
        btnClie->setAutoDefault(true);

        gridLayout_6->addWidget(btnClie, 1, 1, 1, 1);

        label_5 = new QLabel(frame_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        btnTec = new QPushButton(frame_7);
        btnTec->setObjectName(QString::fromUtf8("btnTec"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/icons/tecnico.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTec->setIcon(icon1);

        gridLayout_6->addWidget(btnTec, 3, 1, 1, 1);

        label_6 = new QLabel(frame_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 2, 0, 1, 1);


        gridLayout_4->addWidget(frame_7, 2, 1, 1, 1);

        frame_8 = new QFrame(tab);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        edtDateRep = new QDateEdit(frame_8);
        edtDateRep->setObjectName(QString::fromUtf8("edtDateRep"));
        edtDateRep->setCalendarPopup(true);

        gridLayout_5->addWidget(edtDateRep, 1, 0, 1, 1);

        label_14 = new QLabel(frame_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 3, 0, 1, 1);

        label_13 = new QLabel(frame_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);

        label_10 = new QLabel(frame_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 0, 1, 1, 1);

        cbTipoPg = new QComboBox(frame_8);
        cbTipoPg->addItem(QString());
        cbTipoPg->addItem(QString());
        cbTipoPg->setObjectName(QString::fromUtf8("cbTipoPg"));

        gridLayout_5->addWidget(cbTipoPg, 1, 1, 1, 3);

        edtStatus = new QLineEdit(frame_8);
        edtStatus->setObjectName(QString::fromUtf8("edtStatus"));

        gridLayout_5->addWidget(edtStatus, 4, 0, 1, 1);


        gridLayout_4->addWidget(frame_8, 2, 0, 1, 1);

        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        edtDataOs = new QLineEdit(frame);
        edtDataOs->setObjectName(QString::fromUtf8("edtDataOs"));
        edtDataOs->setEnabled(false);

        gridLayout_3->addWidget(edtDataOs, 1, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        edtNumOS = new QLineEdit(frame);
        edtNumOS->setObjectName(QString::fromUtf8("edtNumOS"));
        edtNumOS->setEnabled(false);

        gridLayout_3->addWidget(edtNumOS, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 2);

        tabDesc->addTab(tab, QString());
        tabDescri = new QWidget();
        tabDescri->setObjectName(QString::fromUtf8("tabDescri"));
        verticalLayout_6 = new QVBoxLayout(tabDescri);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        frame_6 = new QFrame(tabDescri);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_5->addWidget(label_7);

        areaApare = new QPlainTextEdit(frame_6);
        areaApare->setObjectName(QString::fromUtf8("areaApare"));

        verticalLayout_5->addWidget(areaApare);


        verticalLayout_6->addWidget(frame_6);

        frame_3 = new QFrame(tabDescri);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_2->addWidget(label_11);

        areaDefeito = new QTextEdit(frame_3);
        areaDefeito->setObjectName(QString::fromUtf8("areaDefeito"));

        verticalLayout_2->addWidget(areaDefeito);


        verticalLayout_6->addWidget(frame_3);

        frame_5 = new QFrame(tabDescri);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_12 = new QLabel(frame_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_3->addWidget(label_12);

        areaLaudo = new QTextEdit(frame_5);
        areaLaudo->setObjectName(QString::fromUtf8("areaLaudo"));

        verticalLayout_3->addWidget(areaLaudo);


        verticalLayout_6->addWidget(frame_5);

        tabDesc->addTab(tabDescri, QString());
        tabProd = new QWidget();
        tabProd->setObjectName(QString::fromUtf8("tabProd"));
        gridLayout = new QGridLayout(tabProd);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_4 = new QFrame(tabProd);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableProdutos = new QTableView(frame_4);
        tableProdutos->setObjectName(QString::fromUtf8("tableProdutos"));
        tableProdutos->setInputMethodHints(Qt::ImhNone);
        tableProdutos->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableProdutos->setSortingEnabled(true);
        tableProdutos->verticalHeader()->setStretchLastSection(false);

        verticalLayout_4->addWidget(tableProdutos);


        gridLayout->addWidget(frame_4, 0, 0, 1, 1);

        tabDesc->addTab(tabProd, QString());

        verticalLayout->addWidget(tabDesc);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCad = new QPushButton(Form_CadOS);
        btnCad->setObjectName(QString::fromUtf8("btnCad"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/icons/1493238513_Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCad->setIcon(icon2);

        horizontalLayout->addWidget(btnCad);

        btnClose = new QPushButton(Form_CadOS);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagens/icons/1493332785_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon3);

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Form_CadOS);

        tabDesc->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form_CadOS);
    } // setupUi

    void retranslateUi(QDialog *Form_CadOS)
    {
        Form_CadOS->setWindowTitle(QCoreApplication::translate("Form_CadOS", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Form_CadOS", "Modelo", nullptr));
        label_4->setText(QCoreApplication::translate("Form_CadOS", "IMEI", nullptr));
        label_9->setText(QCoreApplication::translate("Form_CadOS", "Marca", nullptr));
        label_8->setText(QCoreApplication::translate("Form_CadOS", "Valor do Reparo", nullptr));
        btnClie->setText(QString());
        label_5->setText(QCoreApplication::translate("Form_CadOS", "C\303\263digo Cliente", nullptr));
        btnTec->setText(QString());
        label_6->setText(QCoreApplication::translate("Form_CadOS", "C\303\263digo T\303\251cinco", nullptr));
        edtDateRep->setDisplayFormat(QCoreApplication::translate("Form_CadOS", "dd/MM/yyyy", nullptr));
        label_14->setText(QCoreApplication::translate("Form_CadOS", "Status da Ordem de Servi\303\247o", nullptr));
        label_13->setText(QCoreApplication::translate("Form_CadOS", "Data do Reparo", nullptr));
        label_10->setText(QCoreApplication::translate("Form_CadOS", "Tipo de pagamento", nullptr));
        cbTipoPg->setItemText(0, QCoreApplication::translate("Form_CadOS", "CARTAO", nullptr));
        cbTipoPg->setItemText(1, QCoreApplication::translate("Form_CadOS", "A VISTA", nullptr));

        label_2->setText(QCoreApplication::translate("Form_CadOS", "Data OS", nullptr));
        label->setText(QCoreApplication::translate("Form_CadOS", "N\302\272 da OS ", nullptr));
        tabDesc->setTabText(tabDesc->indexOf(tab), QCoreApplication::translate("Form_CadOS", "Ordem de Servi\303\247o", nullptr));
        label_7->setText(QCoreApplication::translate("Form_CadOS", "Aparencia Geral", nullptr));
        label_11->setText(QCoreApplication::translate("Form_CadOS", "Defeito", nullptr));
        label_12->setText(QCoreApplication::translate("Form_CadOS", "Laudo", nullptr));
        tabDesc->setTabText(tabDesc->indexOf(tabDescri), QCoreApplication::translate("Form_CadOS", "Complementos", nullptr));
        tabDesc->setTabText(tabDesc->indexOf(tabProd), QCoreApplication::translate("Form_CadOS", "Produtos", nullptr));
        btnCad->setText(QCoreApplication::translate("Form_CadOS", "Cadastrar", nullptr));
        btnClose->setText(QCoreApplication::translate("Form_CadOS", "Encerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_CadOS: public Ui_Form_CadOS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CADOS_H
