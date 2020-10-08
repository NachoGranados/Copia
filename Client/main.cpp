#include "widget.h"
#include <QApplication>

/**
 *@brief This is the main class in charge of manage call the principal functions to start the program.
 *@param int argc
 *@param char *argv[].
 *@return int.
 */
int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();

}
