#ifndef SERVERCLASS_H
#define SERVERCLASS_H

#include <QTcpServer>

/**
 *@brief This is the class that allows to implement the sockets connections.
 */
class QTcpSocket;

/**
 *@brief This is the class in charge of manage the creation of the server and it implements QTcpSocket class.
 */
class serverClass : public QTcpServer {

    Q_OBJECT

public:

    QTcpSocket *mSocket;

    explicit serverClass(QObject *parent = nullptr);

    void sendMessage(const QString &message);

private:

};

#endif // SERVERCLASS_H
