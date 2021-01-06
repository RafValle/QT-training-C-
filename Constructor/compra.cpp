#include "compra.h"

#include <iostream>

using namespace std;

Compra::Compra()
{
    cout << "CCT2" << endl;
}

Compra::Compra(const Compra &compra)
    : _idCliente(compra._idCliente), _nome(compra._nome)
{
    cout << "Executar copy contructor" << endl;
}

Compra &Compra::operator =(Compra &&compra)
{
    _idCliente = compra._idCliente;
    _nome = compra._nome;
    cout << "CA" << endl;

    return *this;
}


