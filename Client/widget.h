#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {

/**
 *@brief This is the class in charge of manage the GUI.
 */
class Widget;

}

/**
 *@brief This is the class that allows to implement the sockets connections.
 */
class QTcpSocket;

/**
 *@brief This is the class in charge of manage the GUI and it implemets QWidget class.
 */
class Widget : public QWidget {

    Q_OBJECT

public:

    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_connectPushButton_clicked();

    void on_closePushButton_clicked();

    void on_sendStartPushButton_clicked();

    void on_sendEndPushButton_clicked();

private:

    Ui::Widget *ui;
    QTcpSocket *mSocket;

};

#endif // WIDGET_H
