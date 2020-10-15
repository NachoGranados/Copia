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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *imageLabel;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *serverLabel;
    QLabel *portNumberLabel;
    QSpinBox *portNumberSpinBox;
    QPushButton *startPushButton;
    QPushButton *closePushButton;
    QPushButton *readStartPushButton;
    QPushButton *readEndPushButton;
    QListWidget *readStartListWidget;
    QListWidget *readEndListWidget;
    QPushButton *sendResultPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(588, 368);
        imageLabel = new QLabel(Widget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(250, 20, 321, 331));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(21, 22, 211, 301));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        serverLabel = new QLabel(widget);
        serverLabel->setObjectName(QString::fromUtf8("serverLabel"));
        QFont font;
        font.setPointSize(25);
        serverLabel->setFont(font);
        serverLabel->setLayoutDirection(Qt::LeftToRight);
        serverLabel->setMargin(0);
        serverLabel->setIndent(-1);

        formLayout->setWidget(0, QFormLayout::SpanningRole, serverLabel);

        portNumberLabel = new QLabel(widget);
        portNumberLabel->setObjectName(QString::fromUtf8("portNumberLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, portNumberLabel);

        portNumberSpinBox = new QSpinBox(widget);
        portNumberSpinBox->setObjectName(QString::fromUtf8("portNumberSpinBox"));
        portNumberSpinBox->setMaximum(999999999);
        portNumberSpinBox->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, portNumberSpinBox);

        startPushButton = new QPushButton(widget);
        startPushButton->setObjectName(QString::fromUtf8("startPushButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, startPushButton);

        closePushButton = new QPushButton(widget);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, closePushButton);

        readStartPushButton = new QPushButton(widget);
        readStartPushButton->setObjectName(QString::fromUtf8("readStartPushButton"));

        formLayout->setWidget(3, QFormLayout::LabelRole, readStartPushButton);

        readEndPushButton = new QPushButton(widget);
        readEndPushButton->setObjectName(QString::fromUtf8("readEndPushButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, readEndPushButton);

        readStartListWidget = new QListWidget(widget);
        readStartListWidget->setObjectName(QString::fromUtf8("readStartListWidget"));

        formLayout->setWidget(4, QFormLayout::LabelRole, readStartListWidget);

        readEndListWidget = new QListWidget(widget);
        readEndListWidget->setObjectName(QString::fromUtf8("readEndListWidget"));

        formLayout->setWidget(4, QFormLayout::FieldRole, readEndListWidget);

        sendResultPushButton = new QPushButton(widget);
        sendResultPushButton->setObjectName(QString::fromUtf8("sendResultPushButton"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, sendResultPushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        imageLabel->setText(QCoreApplication::translate("Widget", "Image", nullptr));
        serverLabel->setText(QCoreApplication::translate("Widget", "        Server", nullptr));
        portNumberLabel->setText(QCoreApplication::translate("Widget", "Port Number", nullptr));
        startPushButton->setText(QCoreApplication::translate("Widget", "Start", nullptr));
        closePushButton->setText(QCoreApplication::translate("Widget", "Close", nullptr));
        readStartPushButton->setText(QCoreApplication::translate("Widget", "Read Start", nullptr));
        readEndPushButton->setText(QCoreApplication::translate("Widget", "Read End", nullptr));
        sendResultPushButton->setText(QCoreApplication::translate("Widget", "Send Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
