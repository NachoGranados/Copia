#include <QtTest>
#include <QCoreApplication>
#include <QVector>
#include "../Server/graph.cpp"

class Testing : public QObject {

    Q_OBJECT

public:

private slots:

    //Unit testing in the server
    void test_actualEdges();

    void test_findEdge();

    void test_findDistance();

    void test_createMatrix();

    void test_printPath();

    void test_printSolution02();

    void test_floydWarshall();

    //Integrations tests
    //They will test all the program integration woth the final result given bythe server

    void test_printSolution31();

    void test_printSolution01();

    void test_printSolution03();

};

//Variables needed for the unit testing

QVector< QVector<int> > edges = { { 0, 1, 3 }, { 0, 3, 5 }, { 1, 0, 2 }, { 1, 3, 4 }, { 2, 1, 1 }, { 3, 2, 2 } };

Graph graph(edges);

int infinite = INT_MAX;

int nodes = 4;

QVector< QVector<int> > floydWarshallMatrix = { {0, 3, infinite, 5}, {2, 0, infinite, 4},
                                                {infinite, 1, 0, infinite}, {infinite, infinite, 2 , 0} };

QString message02 = "Floyd Warshall Algorithm\n\nThe shortest path from 0 -> 2 is (0-3-2)\n";


QVector< QVector<int> > path = { {0, 0, 3, 0}, {-1, 0, 3, -1}, {-1, 2, 0, -1}, {-1, 2, 3, 0} };

QVector<int> actualEdgesNode = {1,3};

//Variables needed for the instegration tests

QString message31 = "Floyd Warshall Algorithm\n\nThe shortest path from 3 -> 1 is (3-2-1)\n";

QString message01 = "Floyd Warshall Algorithm\n\nThe shortest path from 0 -> 1 is (0-1)\n";

QString message03 = "Floyd Warshall Algorithm\n\nThe shortest path from 0 -> 3 is (0-3)\n";

//Unit testing method implementation

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

void Testing::test_printSolution02() {

    QString result = graph.printSolution(path, nodes, 0, 2);

    QCOMPARE(result, message02);

}

void Testing::test_floydWarshall() {

    QString result = graph.floydWarshall(floydWarshallMatrix, nodes, infinite, 0, 2);

    QCOMPARE(result, message02);

}

//Métodos de las pruebas de integración

void Testing::test_printSolution31(){
    QString result = graph.printSolution(path, nodes, 3, 1);

    QCOMPARE(result, message31);
}

void Testing::test_printSolution01(){
    QString result = graph.printSolution(path, nodes, 0, 1);

    QCOMPARE(result, message01);
}

void Testing::test_printSolution03(){
    QString result = graph.printSolution(path, nodes, 0, 3);

    QCOMPARE(result, message03);
}


QTEST_MAIN(Testing)

#include "tst_testing.moc"
