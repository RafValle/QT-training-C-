#include "compra.h"

#include <iostream>

using namespace std;

Compra::Compra(int id, string nome)
    : _id(id), _nome(nome)
{
    cout << "Regular constructor\n";
}

Compra::Compra(const Compra &c)
    : _id(c._id), _nome(c._nome){
    cout << "Copy constructor\n";
}

Compra::Compra(Compra &&c)
    : _id(c._id), _nome(c._nome)
{
    cout << "Move constructor\n";
    c._id = 0;
    c._nome = "";
}

Compra &Compra::operator=(const Compra &compra)
{
    cout << "Copy assignment\n" << endl;
    _id = compra._id;
    _nome = compra._nome;
    return *this;
}

Compra &Compra::operator=(Compra &&compra)
{
    cout << "Move assignment\n" << endl;
    _id = compra._id;
    _nome = compra._nome;
    compra._id = 0;
    compra._nome = "";
    return *this;
}

Compra::~Compra()
{
    cout << "Destructor\n";
}
