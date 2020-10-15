#include <QtTest>
#include <QCoreApplication>
#include <QVector>
#include "../Server/graph.cpp"

class Testing : public QObject {

    Q_OBJECT

public:

private slots:

    void test_actualEdges();

    void test_findEdge();

    void test_findDistance();

    void test_createMatrix();

    void test_printPath();

    void test_printSolution();

    void test_floydWarshall();

};

QVector< QVector<int> > edges = { { 0, 1, 3 }, { 0, 3, 5 }, { 1, 0, 2 }, { 1, 3, 4 }, { 2, 1, 1 }, { 3, 2, 2 } };

Graph graph(edges);

int infinite = INT_MAX;

int nodes = 4;

QVector< QVector<int> > floydWarshallMatrix = { {0, 3, infinite, 5}, {2, 0, infinite, 4},
                                                {infinite, 1, 0, infinite}, {infinite, infinite, 2 , 0} };

QString message = "Floyd Warshall Algorithm\n\nThe shortest path from 0 -> 2 is (0-3-2)\n";

QVector< QVector<int> > path = { {0, 0, 3, 0}, {-1, 0, 3, -1}, {-1, 2, 0, -1}, {-1, 2, 3, 0} };

QVector<int> actualEdgesNode = {1,3};

void Testing::test_actualEdges() {

    QVector<int> result = graph.actualEdges(graph.matrix, 0);

    QCOMPARE(result, actualEdgesNode);

}

void Testing::test_findEdge() {

    bool result = graph.findEdge(actualEdgesNode, 3);

    QCOMPARE(result, true);

}

void Testing::test_findDistance() {

    int distance = 5;

    int result = graph.findDistance(graph.matrix, 0, 3);

    QCOMPARE(result, distance);

}

void Testing::test_createMatrix() {

    QVector< QVector<int> > resultFloydWarshallMatrix = graph.createMatrix(graph.matrix, nodes, infinite);

    QCOMPARE(resultFloydWarshallMatrix, floydWarshallMatrix);

}

void Testing::test_printPath() {

    QString pathString = "3";

    QString result = graph.printPath(path, 0, 2);

    QCOMPARE(result, pathString);

}

void Testing::test_printSolution() {

    QString result = graph.printSolution(path, nodes, 0, 2);

    QCOMPARE(result, message);

}

void Testing::test_floydWarshall() {

    QString result = graph.floydWarshall(floydWarshallMatrix, nodes, infinite, 0, 2);

    QCOMPARE(result, message);

}

QTEST_MAIN(Testing)

#include "tst_testing.moc"
