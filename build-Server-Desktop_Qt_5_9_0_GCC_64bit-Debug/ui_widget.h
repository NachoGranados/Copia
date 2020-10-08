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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
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
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(588, 368);
        imageLabel = new QLabel(Widget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(250, 20, 321, 331));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 22, 211, 301));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        serverLabel = new QLabel(widget);
        serverLabel->setObjectName(QStringLiteral("serverLabel"));
        QFont font;
        font.setPointSize(25);
        serverLabel->setFont(font);
        serverLabel->setLayoutDirection(Qt::LeftToRight);
        serverLabel->setMargin(0);
        serverLabel->setIndent(-1);

        formLayout->setWidget(0, QFormLayout::SpanningRole, serverLabel);

        portNumberLabel = new QLabel(widget);
        portNumberLabel->setObjectName(QStringLiteral("portNumberLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, portNumberLabel);

        portNumberSpinBox = new QSpinBox(widget);
        portNumberSpinBox->setObjectName(QStringLiteral("portNumberSpinBox"));
        portNumberSpinBox->setMaximum(999999999);
        portNumberSpinBox->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, portNumberSpinBox);

        startPushButton = new QPushButton(widget);
        startPushButton->setObjectName(QStringLiteral("startPushButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, startPushButton);

        closePushButton = new QPushButton(widget);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, closePushButton);

        readStartPushButton = new QPushButton(widget);
        readStartPushButton->setObjectName(QStringLiteral("readStartPushButton"));

        formLayout->setWidget(3, QFormLayout::LabelRole, readStartPushButton);

        readEndPushButton = new QPushButton(widget);
        readEndPushButton->setObjectName(QStringLiteral("readEndPushButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, readEndPushButton);

        readStartListWidget = new QListWidget(widget);
        readStartListWidget->setObjectName(QStringLiteral("readStartListWidget"));

        formLayout->setWidget(4, QFormLayout::LabelRole, readStartListWidget);

        readEndListWidget = new QListWidget(widget);
        readEndListWidget->setObjectName(QStringLiteral("readEndListWidget"));

        formLayout->setWidget(4, QFormLayout::FieldRole, readEndListWidget);

        sendResultPushButton = new QPushButton(widget);
        sendResultPushButton->setObjectName(QStringLiteral("sendResultPushButton"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, sendResultPushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        imageLabel->setText(QApplication::translate("Widget", "Image", Q_NULLPTR));
        serverLabel->setText(QApplication::translate("Widget", "        Server", Q_NULLPTR));
        portNumberLabel->setText(QApplication::translate("Widget", "Port Number", Q_NULLPTR));
        startPushButton->setText(QApplication::translate("Widget", "Start", Q_NULLPTR));
        closePushButton->setText(QApplication::translate("Widget", "Close", Q_NULLPTR));
        readStartPushButton->setText(QApplication::translate("Widget", "Read Start", Q_NULLPTR));
        readEndPushButton->setText(QApplication::translate("Widget", "Read End", Q_NULLPTR));
        sendResultPushButton->setText(QApplication::translate("Widget", "Send Result", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
