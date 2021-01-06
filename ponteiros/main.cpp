#include <iostream>
#include <memory>

#include "compra.h"
using namespace std;

int main()
{
    Compra c {1,{{"Cerveja",5.8},{"Queijo",10.0}}};
    Compra c2 = c;
    Compra c3;
    c3 = c2 = c; // c2.operator=(c)

    Compra c1[3] {
        {1,{{"Cerveja",5.8},{"Queijo",10.0}}},
        {2,{{"Cerveja2",5.8},{"Queijo2",10.0}}},
        {3,{{"Cerveja3",5.8},{"Queijo3",10.0}}}
    };

    auto *c4 = new Compra[3]{
        {1,{{"Cerveja",5.8},{"Queijo",15.0}}},
        {2,{{"Cerveja2",5.8},{"Queijo2",20.0}}},
        {3,{{"Cerveja3",5.8},{"Queijo3",20.0}}}
    };
    cout << c4[1].getItens()[0].preco << endl;

    delete[] c4;

    return 0;
}
