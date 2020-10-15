#include "graph.h"
#include <QVector>
#include "edge.h"

QVector<Edge> matrix;

/**
 *@brief This is the constructor of the Graph class.
 *@param QVector< QVector<int> > edges.
 *@param int size.
 */
Graph::Graph(QVector< QVector<int> > edges) {

    for (auto &edges : edges) {

        matrix.push_back({edges[0],edges[1],edges[2]});

    }

}

/**
 *@brief This is the method in charge of checking how many connections a node has in the graph.
 *@param QVector< QVector<int> > edges.
 *@param int start.
 *@return QVector<int>.
 */
QVector<int> Graph::actualEdges(QVector<Edge> edges, int start) {

    QVector<int> vec = {};
    QVector<int>* vecPtr = &vec;

    for (Edge i : edges) {

        if (i.start == start) {

            vec.push_back(i.end);

        }

    }

    return *vecPtr;

}

/**
 *@brief This is the method in charge of checking if the requested edge exists in the graph.
 *@param QVector<int> vec.
 *@param int end.
 *@return bool.
 */
bool Graph::findEdge(QVector<int> vec, int end) {

    for (int i = 0; i < vec.size(); i ++) {

        if (vec[i] == end) {

            return true;

        }

    }

    return false;

}

/**
 *@brief This is the method in charge of getting the distance between two specific nodes.
 *@param QVector<Edge> edges.
 *@param int start.
 *@param int end.
 *@return int.
 */
int Graph::findDistance(QVector<Edge> edges, int start, int end) {

    for (Edge i : edges) {

        if (i.start == start && i.end == end) {

            return i.distance;

        }

    }

    return 0;

}

/**
 *@brief This is the method in charge of creating the specific matrix that the Floyd Warshall Algorithm needs to find the shortest path.
 *@param QVector<Edge> edges.
 *@param int nodes.
 *@return QVector< QVector<int> >.
 */
QVector< QVector<int> > Graph::createMatrix(QVector<Edge> edges, int nodes, int infinite) {

    int zeroReference = 0;
    int actualNode = 0;
    int counter = 0;
    int* zeroReferencePtr = &zeroReference;
    int* actualNodePtr = &actualNode;
    int* counterPtr = &counter;

    QVector< QVector<int> > finalVec = {};
    QVector< QVector<int> >* finalVecPtr = &finalVec;

    QVector<int> newVec = {};
    QVector<int>* newVecPtr = &newVec;

    QVector<int> actualEdgesNode;

    while (*counterPtr < nodes) {

        actualEdgesNode = actualEdges(edges, *actualNodePtr);

        for (int i = 0; i < nodes; i ++) {

            if (i == *zeroReferencePtr) {

                newVec.push_back(0);
                zeroReference = 0;

            } else {

                if (findEdge(actualEdgesNode, i) == true) {

                    newVec.push_back(findDistance(edges, *actualNodePtr, i));

                } else {

                    newVec.push_back(infinite);

                }

            }

        }

        finalVec.push_back(*newVecPtr);

        actualNode ++;

        zeroReference = *actualNodePtr;

        counter ++;

        newVec = {};

    }

    return *finalVecPtr;

}

/**
 *@brief This is the method in charge of looking for the path between two specific nodes.
 *@param QVector< QVector<int> > path.
 *@param int start.
 *@param int end.
 *@return QString.
 */
QString Graph::printPath(QVector< QVector<int> > path, int start, int end) {

    if (path[start][end] == start) {

        return "";

    }

    printPath(path, start, path[start][end]);

    return QString::number(path[start][end]);

}

/**
 *@brief This is the method in charge of creating the message that will be sent to the client.
 *@param QVector< QVector<int> > path.
 *@param int nodes.
 *@param int start.
 *@param int end.
 *@return QString.
 */
QString Graph::printSolution(QVector< QVector<int> > path, int nodes, int start, int end) {

    QString text("Floyd Warshall Algorithm\n\n");
    QString pathString("");

    QString* textPtr = &text;

    for (int i = 0; i < nodes; i ++) {

        for (int j = 0; j < nodes; j ++) {

            if (j != i && path[i][j] != -1) {

                if (i == start && j == end) {

                    text.append("The shortest path from ");
                    text.append(QString::number(i));
                    text.append(" -> ");
                    text.append(QString::number(j));
                    text.append(" is (");
                    text.append(QString::number(i));
                    text.append("-");

                    pathString = printPath(path, i, j);

                    if (pathString != "" ) {

                        text.append(pathString);
                        text.append("-");

                    }

                    text.append(QString::number(j));
                    text.append(")\n");

                }

            }

        }

    }

    return *textPtr;

}

/**
 *@brief This is the method in charge of creating the shortest path between two specific nodes.
 *@param QVector< QVector<int> > matrix.
 *@param int nodes.
 *@param int infinite.
 *@param int start.
 *@param int end.
 *@return QString.
 */
QString Graph::floydWarshall(QVector< QVector<int> > matrix, int nodes, int infinite, int start, int end) {

    QVector< QVector<int> > cost = { {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0} };
    QVector< QVector<int> > path = { {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0} };

    for (int i = 0; i < nodes; i ++) {

        for (int j = 0; j < nodes; j ++) {

            cost[i][j] = matrix[i][j];

            if (i == j) {

                path[i][j] = 0;

            } else if (cost[i][j] != infinite) {

                path[i][j] = i;

            } else {

                path[i][j] = -1;

            }

        }

    }

    for (int i = 0; i < nodes; i ++) {

        for (int j = 0; j < nodes; j ++) {

            for (int k = 0; k < nodes; k ++) {

                if (cost[j][i] != infinite && cost[i][k] != infinite &&
                    cost[j][i] + cost[i][k] < cost[j][k]) {

                    cost[j][k] = cost[j][i] + cost[i][k];
                    path[j][k] = path[i][k];

                }

            }

            if (cost[j][j] < 0) {

                return "Error!!!";

            }

        }

    }

    return printSolution(path, nodes, start, end);

}
