#include "serverclass.h"
#include <QTcpSocket>
#include <QTextStream>

/**
 *@brief This is the method in charge of start the socket connection.
 *@param QObject parent.
 */
serverClass::serverClass(QObject *parent) : QTcpServer(parent) {

    mSocket = nullptr;

    connect(this, &serverClass::newConnection, [&]() {

        mSocket = nextPendingConnection();       

    });

}

/**
 *@brief This is the method in charge of send messages to the clients.
 *@param QString message.
 */
void serverClass::sendMessage(const QString &message) {

    if (mSocket) {

        QTextStream T(mSocket);
        T << message;
        mSocket -> flush();

    }

}
