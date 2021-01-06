#include "produtoeletronico.h"

#include <iostream>
using namespace std;

#include "iimposto.h"

ProdutoEletronico::ProdutoEletronico(const shared_ptr<IImposto> &imposto)
     : IProduto(imposto)
{
}

void ProdutoEletronico::devolver()
{
    cout << "Devolver produto eletronico" << endl;
    cout << "O Valor do imposto foi" << _imposto->calcular() << endl;
}
