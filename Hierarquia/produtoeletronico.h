#ifndef PRODUTOELETRONICO_H
#define PRODUTOELETRONICO_H

#include "iproduto.h"
#include "iimposto.h"

class ProdutoEletronico : public IProduto
{
public:
    ProdutoEletronico(const shared_ptr<IImposto> &imposto);

    // IProduto interface
public:
    virtual void devolver() override;
};

#endif // PRODUTOELETRONICO_H
