#ifndef GRAPH_H
#define GRAPH_H

#include <QVector>
#include "edge.h"

class Graph {

public:

    QVector<Edge> matrix;

    Graph(QVector< QVector<int> > edges);

    QVector<int> actualEdges(QVector<Edge> edges, int start);

    bool findEdge(QVector<int> vec, int end);

    int findDistance(QVector<Edge> edges, int start, int end);

    QVector< QVector<int> > createMatrix(QVector<Edge> edges, int nodes, int infinite);

    QString printPath(QVector< QVector<int> > path, int start, int end);

    QString printSolution(QVector< QVector<int> > path, int nodes, int start, int end);

    QString floydWarshall(QVector< QVector<int> > matrix, int nodes, int infinite, int start, int end);

};

#endif // GRAPH_H
