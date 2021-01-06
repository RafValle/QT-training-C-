#include "produtoalimenticio.h"

#include <iostream>
using namespace std;

ProdutoAlimenticio::ProdutoAlimenticio(const shared_ptr<IImposto> &imposto)
    : IProduto(imposto)
{

}

void ProdutoAlimenticio::devolver()
{
    cout << "Devolvendo produto alimenticio" << endl;
    cout << "O valor do imposto foi " << _imposto->calcular() << endl;
}
