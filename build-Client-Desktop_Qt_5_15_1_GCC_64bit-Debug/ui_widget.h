/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *clientLabel;
    QLabel *serverLabel;
    QLineEdit *serverLineEdit;
    QLabel *portNumberLabel;
    QSpinBox *portNumberSpinBox;
    QListWidget *messageListWidget;
    QGridLayout *gridLayout;
    QPushButton *connectPushButton;
    QPushButton *closePushButton;
    QLineEdit *sendStartLineEdit;
    QLineEdit *sendEndLineEdit;
    QPushButton *sendStartPushButton;
    QPushButton *sendEndPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(450, 300);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 405, 251));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        clientLabel = new QLabel(widget);
        clientLabel->setObjectName(QString::fromUtf8("clientLabel"));
        QFont font;
        font.setPointSize(25);
        clientLabel->setFont(font);
        clientLabel->setLayoutDirection(Qt::LeftToRight);
        clientLabel->setMargin(0);
        clientLabel->setIndent(-1);

        gridLayout_2->addWidget(clientLabel, 0, 0, 1, 4);

        serverLabel = new QLabel(widget);
        serverLabel->setObjectName(QString::fromUtf8("serverLabel"));

        gridLayout_2->addWidget(serverLabel, 1, 0, 1, 1);

        serverLineEdit = new QLineEdit(widget);
        serverLineEdit->setObjectName(QString::fromUtf8("serverLineEdit"));

        gridLayout_2->addWidget(serverLineEdit, 1, 1, 1, 1);

        portNumberLabel = new QLabel(widget);
        portNumberLabel->setObjectName(QString::fromUtf8("portNumberLabel"));

        gridLayout_2->addWidget(portNumberLabel, 1, 2, 1, 1);

        portNumberSpinBox = new QSpinBox(widget);
        portNumberSpinBox->setObjectName(QString::fromUtf8("portNumberSpinBox"));
        portNumberSpinBox->setMaximum(999999999);
        portNumberSpinBox->setValue(0);

        gridLayout_2->addWidget(portNumberSpinBox, 1, 3, 1, 1);

        messageListWidget = new QListWidget(widget);
        messageListWidget->setObjectName(QString::fromUtf8("messageListWidget"));

        gridLayout_2->addWidget(messageListWidget, 2, 0, 1, 4);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        connectPushButton = new QPushButton(widget);
        connectPushButton->setObjectName(QString::fromUtf8("connectPushButton"));

        gridLayout->addWidget(connectPushButton, 0, 0, 1, 1);

        closePushButton = new QPushButton(widget);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        gridLayout->addWidget(closePushButton, 0, 1, 1, 1);

        sendStartLineEdit = new QLineEdit(widget);
        sendStartLineEdit->setObjectName(QString::fromUtf8("sendStartLineEdit"));

        gridLayout->addWidget(sendStartLineEdit, 1, 0, 1, 1);

        sendEndLineEdit = new QLineEdit(widget);
        sendEndLineEdit->setObjectName(QString::fromUtf8("sendEndLineEdit"));

        gridLayout->addWidget(sendEndLineEdit, 1, 1, 1, 1);

        sendStartPushButton = new QPushButton(widget);
        sendStartPushButton->setObjectName(QString::fromUtf8("sendStartPushButton"));

        gridLayout->addWidget(sendStartPushButton, 2, 0, 1, 1);

        sendEndPushButton = new QPushButton(widget);
        sendEndPushButton->setObjectName(QString::fromUtf8("sendEndPushButton"));

        gridLayout->addWidget(sendEndPushButton, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        serverLabel->raise();
        serverLineEdit->raise();
        connectPushButton->raise();
        closePushButton->raise();
        messageListWidget->raise();
        portNumberLabel->raise();
        portNumberSpinBox->raise();
        sendStartLineEdit->raise();
        clientLabel->raise();
        sendEndLineEdit->raise();
        sendStartLineEdit->raise();
        widget->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        clientLabel->setText(QCoreApplication::translate("Widget", "                     Client", nullptr));
        serverLabel->setText(QCoreApplication::translate("Widget", "Server", nullptr));
        serverLineEdit->setText(QString());
        portNumberLabel->setText(QCoreApplication::translate("Widget", "Port Number", nullptr));
        connectPushButton->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        closePushButton->setText(QCoreApplication::translate("Widget", "Close", nullptr));
        sendStartPushButton->setText(QCoreApplication::translate("Widget", "Send Start", nullptr));
        sendEndPushButton->setText(QCoreApplication::translate("Widget", "Send End", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
