#include "produtoeletronico.h"

#include <iostream>
using namespace std;

ProdutoEletronico::ProdutoEletronico(const shared_ptr<IImposto> &imposto)
    : IProduto(imposto) //Construtor da classe pai
{

}

void ProdutoEletronico::devolver()
{
    cout << "Devolvendo produto eletronico" << endl;
    cout << "O valor do imposto foi " << _imposto->calcular() << endl;
}
