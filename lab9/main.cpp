#include <QCoreApplication>
#include <QtConcurrent/QtConcurrentMap>


int map(const int &x){
    return x;
}

void reduce(int &r,const int &m){
    r += m;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<int> v {1,2,3,4,5,6,7,8,9,10};
    auto future = QtConcurrent::mappedReduced(v, map, reduce);
    qDebug() << future.result();
    return a.exec();
}
