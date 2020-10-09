#include "widget.h"
#include "ui_widget.h"
#include <serverclass.h>
#include <QMessageBox>
#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <iomanip>
#include <QPixmap>
#include <QTcpSocket>
#include "graph.h"

using namespace std;

int globalStart;
int globalEnd;
int* globalStartPtr = &globalStart;
int* globalEndPtr = &globalEnd;

int nodes = 4;
int* nodesPtr = &nodes;

QVector< QVector<int> > edges = { { 0, 1, 3 }, { 0, 3, 5 }, { 1, 0, 2 }, { 1, 3, 4 }, { 2, 1, 1 }, { 3, 2, 2 } };
QVector< QVector<int> >* edgesPtr = &edges;

int graphSize = edges.size() - 1;
int* graphSizePtr = &graphSize;

/**
 *@brief This is the method in charge of setting up the window.
 *@param QWidget parent.
 */
Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget) {

    ui -> setupUi(this);
    mServerClass = new serverClass(this);

    QPixmap pix("/home/nachogranados/GitHub/Datos-2-Tarea-1-Sockets-Punteros/Graph.png");

    int w = ui -> imageLabel -> width();
    int h = ui -> imageLabel -> height();

    ui -> imageLabel -> setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

/**
 *@brief This is the destructor method.
 */
Widget::~Widget() {

    delete ui;

}

/**
 *@brief This is the method in charge of controlling the startPushButton action.
 */
void Widget::on_startPushButton_clicked() {

    if (!mServerClass -> listen(QHostAddress::Any, ui -> portNumberSpinBox -> value())) {

        QMessageBox::critical(this, "Error", mServerClass -> errorString());

    } else {

        QMessageBox::information(this, "Server", "Started successfully");

    }

}

/**
 *@brief This is the method in charge of controlling the sendResultPushButton action.
 */
void Widget::on_sendResultPushButton_clicked() {

    Graph graph(*edgesPtr, *graphSizePtr);

    QVector< QVector<int> > floydWarshallMatrix = graph.createMatrix(graph.matrix, *nodesPtr);

    QString newText(graph.floydWarshall(floydWarshallMatrix, *nodesPtr, *globalStartPtr, *globalEndPtr));

    mServerClass -> sendMessage(newText);

}

/**
 *@brief This is the method in charge of controlling the readStartPushButton action.
 */
void Widget::on_readStartPushButton_clicked() {

    QTextStream T(mServerClass -> mSocket);

    QString messageStart = T.readAll();

    globalStart = messageStart.toInt();

    ui -> readStartListWidget -> clear();
    ui -> readStartListWidget -> addItem(messageStart);

}

/**
 *@brief This is the method in charge of controlling the readEndPushButton action.
 */
void Widget::on_readEndPushButton_clicked() {

    QTextStream R(mServerClass -> mSocket);

    QString messageEnd = R.readAll();

    globalEnd = messageEnd.toInt();

    ui -> readEndListWidget -> clear();
    ui -> readEndListWidget -> addItem(messageEnd);

}

/**
 *@brief This is the method in charge of controlling the closePushButton action.
 */
void Widget::on_closePushButton_clicked() {

    close();

}
