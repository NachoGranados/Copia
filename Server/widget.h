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
 *@brief This is the class in charge of manage the creation of the server.
 */
class serverClass;

/**
 *@brief This is the class in charge of manage the GUI and it implemets QWidget class.
 */
class Widget : public QWidget {

    Q_OBJECT

public:

    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_startPushButton_clicked();

    void on_sendResultPushButton_clicked();

    void on_closePushButton_clicked();

    void on_readStartPushButton_clicked();

    void on_readEndPushButton_clicked();

private:

    Ui::Widget *ui;
    serverClass *mServerClass;

};

#endif // WIDGET_H
