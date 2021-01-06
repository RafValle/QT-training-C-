#include "produtoalimenticio.h"
#include <iostream>
using namespace std;

#include "iimposto.h"

ProdutoAlimenticio::ProdutoAlimenticio(const shared_ptr<IImposto> &imposto)
    :IProduto(imposto)
{
}

void ProdutoAlimenticio::devolver()
{
    cout << "Devolver produto Alimenticio" << endl;
    cout << "O Valor do imposto foi" << _imposto->calcular() << endl;
}

