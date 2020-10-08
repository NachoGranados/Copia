#include "widget.h"
#include "ui_widget.h"
#include <QTcpSocket>
#include <QTextStream>

using namespace std;

/**
 *@brief This is the method in charge of setting up the window and listening for new connections.
 *@param QWidget parent.
 */
Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget) {

    ui->setupUi(this);
    ui -> serverLineEdit -> setText("localhost");
    mSocket = new QTcpSocket(this);

    connect(mSocket, &QTcpSocket::readyRead, [&]() {

        QTextStream T(mSocket);

        ui -> messageListWidget -> clear();
        ui -> messageListWidget -> addItem(T.readAll());

    });

}

/**
 *@brief This is the destructor method.
 */
Widget::~Widget() {

    delete ui;

}

/**
 *@brief This is the method in charge of controlling the connectPushButton action.
 */
void Widget::on_connectPushButton_clicked() {

    mSocket -> connectToHost(ui -> serverLineEdit -> text(), ui -> portNumberSpinBox -> value());

}

/**
 *@brief This is the method in charge of controlling the sendStartPushButton action.
 */
void Widget::on_sendStartPushButton_clicked() {

    if (mSocket) {

        QString messageStart = ui -> sendStartLineEdit -> text();

        QTextStream T(mSocket);
        T << messageStart;
        mSocket -> flush();

    }

}

/**
 *@brief This is the method in charge of controlling the sendEndPushButton action.
 */
void Widget::on_sendEndPushButton_clicked() {

    if (mSocket) {

        QString messageEnd = ui -> sendEndLineEdit -> text();

        QTextStream R(mSocket);
        R << messageEnd;
        mSocket -> flush();

    }

}

/**
 *@brief This is the method in charge of controlling the closePushButton action.
 */
void Widget::on_closePushButton_clicked() {

    close();

}
