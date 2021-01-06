#include "compra.h"

#include <iostream>

using namespace std;

Compra::Compra(int idCliente, const vector<Produto> &itens)
    : _idCliente(idCliente), _itens(itens)
{


}

Compra::Compra(const Compra &compra)
    : _idCliente(compra._idCliente), _itens(compra._idCliente)
{
    cout << "Execultar copy contructor" << endl;
}

Compra &Compra::operator =(const Compra &compra)
{
    _idCliente = compra._idCliente;
    _itens = compra._itens;
    cout << "Execultando operator" << endl;
    return *this;
}

vector<Produto> Compra::getItens() const
{
    return _itens;
}

bool Compra::validar()
{
    return true;
}
