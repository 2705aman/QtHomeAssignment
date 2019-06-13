/********************************************************************************
** Form generated from reading UI file 'dialog_chatbox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHATBOX_H
#define UI_DIALOG_CHATBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_chatbox
{
public:
    QPushButton *pushButton_logout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *listView;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2_send;

    void setupUi(QDialog *Dialog_chatbox)
    {
        if (Dialog_chatbox->objectName().isEmpty())
            Dialog_chatbox->setObjectName(QString::fromUtf8("Dialog_chatbox"));
        Dialog_chatbox->resize(400, 300);
        pushButton_logout = new QPushButton(Dialog_chatbox);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(270, 10, 75, 23));
        widget = new QWidget(Dialog_chatbox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 111, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listView = new QListView(widget);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);

        widget1 = new QWidget(Dialog_chatbox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(150, 100, 211, 171));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        pushButton_2_send = new QPushButton(widget1);
        pushButton_2_send->setObjectName(QString::fromUtf8("pushButton_2_send"));

        verticalLayout_2->addWidget(pushButton_2_send);


        retranslateUi(Dialog_chatbox);

        QMetaObject::connectSlotsByName(Dialog_chatbox);
    } // setupUi

    void retranslateUi(QDialog *Dialog_chatbox)
    {
        Dialog_chatbox->setWindowTitle(QApplication::translate("Dialog_chatbox", "Dialog", nullptr));
        pushButton_logout->setText(QApplication::translate("Dialog_chatbox", "Logout", nullptr));
        label->setText(QApplication::translate("Dialog_chatbox", "TextLabel", nullptr));
        pushButton_2_send->setText(QApplication::translate("Dialog_chatbox", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_chatbox: public Ui_Dialog_chatbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHATBOX_H
