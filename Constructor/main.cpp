#include <iostream>
#include "compra.h"

using namespace std;

Compra m1(Compra c){return {};}

void m2(Compra( &&c)){}

int main()
{
    // copy assigment(CA) + move assigment(MA)
    Compra c1, c2 , c3; // 3 cctors
    Compra c4 {c1}; // 1 cctor
    c2 = m1(c1); // 2 cctor + 1 ctor + MA
    c4 = c3 = c2; // CA + MA
//    m2(c4); // ERRO
    m1({1, "jose"}); // MCTOR
//    compras.m2(compras.m1(c1)); //CCTOR + CTOR
    return 0;
}
