#include <iostream>

#include "compra.h"

using namespace std;

Compra m1(Compra c){ return{};}
void m2(Compra &&c){}


int main()
{
    Compra c1, c2, c3; //3 regular constructors
//    Compra c4{c1}; //Copy constructor
//    c2 = m1(c1); //Copy constructor + regular constructor + operator = + move assignment
//    c4 = c3 = c2; //2 copy assignment
//    m2(c4); //ERRO
//    m1({1, "Jose"}); //2 regular constructors - Otimizado
//    m2(m1(c1));
//    Compra mcCompra(std::move(c2)); //Move constructor
    return 0;
}
