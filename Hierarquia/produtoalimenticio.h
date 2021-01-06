#ifndef PRODUTOALIMENTICIO_H
#define PRODUTOALIMENTICIO_H

#include "iproduto.h"
#include "iimposto.h"

class ProdutoAlimenticio : public IProduto
{
public:
    ProdutoAlimenticio(const shared_ptr<IImposto> &imposto);

    // IProduto interface
public:
    virtual void devolver() override;
};

#endif // PRODUTOALIMENTICIO_H
