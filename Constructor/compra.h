#ifndef COMPRA_H
#define COMPRA_H

#include <string>

using namespace std;

class Compra
{
public:
    Compra(int id = 0, string nome = "");
    Compra(const Compra &c);;
    Compra(Compra &&c);
    Compra &operator=(const Compra &compra);
    Compra &operator=(Compra &&compra);
    ~Compra();
private:
    int _id;
    string _nome;
};

#endif // COMPRA_H
