#ifndef COMPRA_H
#define COMPRA_H

#include <string>
#include <vector>

using namespace std;

struct Produto
{
    std::string nome;
    float preco;
};
class Compra
{
public:
    Compra(int idCliente = 0,
           const vector<Produto> &items = vector<Produto>{});
    Compra(const Compra &compra);
    Compra &operator =(const Compra &compra);
    vector<Produto> getItens() const;
    bool validar();

private:
    int _idCliente;
    vector<Produto> _itens;
};

#endif // COMPRA_H
