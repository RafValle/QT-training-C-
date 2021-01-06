#ifndef COMPRA_H
#define COMPRA_H

#include <string>
#include <vector>

using namespace std;

class Compra
{
public:
    Compra();
    Compra(unsigned idCliente, string nome);
    Compra(const Compra &compra);
    Compra(Compra &&compra);
    Compra &operator =(const Compra &compra);
    Compra &operator =(Compra &&compra);

private:
    unsigned _idCliente;
    string _nome;
};

#endif // COMPRA_H
