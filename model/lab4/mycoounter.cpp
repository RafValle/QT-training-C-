#include "mycoounter.h"


MyCoounter::MyCoounter(int value, QObject *parent)
    : QObject {parent}, _value {value}
{
}

int MyCoounter::value() const
{
    return this->_value;
}

void MyCoounter::setValue(int value)
{
    if (_value != value){
        _value = value;
        Q_EMIT valueChanged(_value);
    }
}
