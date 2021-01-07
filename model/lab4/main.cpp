#include <QCoreApplication>
#include "mycoounter.h"
#include "qdebug.h"

using namespace std;

int main()
{
    MyCoounter a , b;
    QObject::connect(&a, &MyCoounter::valueChanged,
                     &b, &MyCoounter::setValue);

    a.setValue(12);
    qDebug() << "Valor de b" << b.value();
    b.setValue(48);
    qDebug() << "Valor de a " << a.value();

    return 0;
}
