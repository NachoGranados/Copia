/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(450, 300);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 405, 251));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        clientLabel = new QLabel(widget);
        clientLabel->setObjectName(QStringLiteral("clientLabel"));
        QFont font;
        font.setPointSize(25);
        clientLabel->setFont(font);
        clientLabel->setLayoutDirection(Qt::LeftToRight);
        clientLabel->setMargin(0);
        clientLabel->setIndent(-1);

        gridLayout_2->addWidget(clientLabel, 0, 0, 1, 4);

        serverLabel = new QLabel(widget);
        serverLabel->setObjectName(QStringLiteral("serverLabel"));

        gridLayout_2->addWidget(serverLabel, 1, 0, 1, 1);

        serverLineEdit = new QLineEdit(widget);
        serverLineEdit->setObjectName(QStringLiteral("serverLineEdit"));

        gridLayout_2->addWidget(serverLineEdit, 1, 1, 1, 1);

        portNumberLabel = new QLabel(widget);
        portNumberLabel->setObjectName(QStringLiteral("portNumberLabel"));

        gridLayout_2->addWidget(portNumberLabel, 1, 2, 1, 1);

        portNumberSpinBox = new QSpinBox(widget);
        portNumberSpinBox->setObjectName(QStringLiteral("portNumberSpinBox"));
        portNumberSpinBox->setMaximum(999999999);
        portNumberSpinBox->setValue(0);

        gridLayout_2->addWidget(portNumberSpinBox, 1, 3, 1, 1);

        messageListWidget = new QListWidget(widget);
        messageListWidget->setObjectName(QStringLiteral("messageListWidget"));

        gridLayout_2->addWidget(messageListWidget, 2, 0, 1, 4);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        connectPushButton = new QPushButton(widget);
        connectPushButton->setObjectName(QStringLiteral("connectPushButton"));

        gridLayout->addWidget(connectPushButton, 0, 0, 1, 1);

        closePushButton = new QPushButton(widget);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 0, 1, 1, 1);

        sendStartLineEdit = new QLineEdit(widget);
        sendStartLineEdit->setObjectName(QStringLiteral("sendStartLineEdit"));

        gridLayout->addWidget(sendStartLineEdit, 1, 0, 1, 1);

        sendEndLineEdit = new QLineEdit(widget);
        sendEndLineEdit->setObjectName(QStringLiteral("sendEndLineEdit"));

        gridLayout->addWidget(sendEndLineEdit, 1, 1, 1, 1);

        sendStartPushButton = new QPushButton(widget);
        sendStartPushButton->setObjectName(QStringLiteral("sendStartPushButton"));

        gridLayout->addWidget(sendStartPushButton, 2, 0, 1, 1);

        sendEndPushButton = new QPushButton(widget);
        sendEndPushButton->setObjectName(QStringLiteral("sendEndPushButton"));

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

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        clientLabel->setText(QApplication::translate("Widget", "                     Client", Q_NULLPTR));
        serverLabel->setText(QApplication::translate("Widget", "Server", Q_NULLPTR));
        serverLineEdit->setText(QString());
        portNumberLabel->setText(QApplication::translate("Widget", "Port Number", Q_NULLPTR));
        connectPushButton->setText(QApplication::translate("Widget", "Connect", Q_NULLPTR));
        closePushButton->setText(QApplication::translate("Widget", "Close", Q_NULLPTR));
        sendStartPushButton->setText(QApplication::translate("Widget", "Send Start", Q_NULLPTR));
        sendEndPushButton->setText(QApplication::translate("Widget", "Send End", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
