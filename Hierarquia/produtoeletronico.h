#ifndef PRODUTOELETRONICO_H
#define PRODUTOELETRONICO_H

#include "iproduto.h"

class ProdutoEletronico : public IProduto
{
public:
    ProdutoEletronico(const shared_ptr<IImposto> &imposto);

    virtual void devolver() override;

};

#endif // PRODUTOELETRONICO_H
