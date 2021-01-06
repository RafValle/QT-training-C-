#include <iostream>
#include <memory>
using namespace std;

#include "ipi.h"
#include "icms.h"
#include "produtoalimenticio.h"
#include "produtoeletronico.h"

int main()
{
    shared_ptr<IImposto> icms = { make_shared<ICMS>() };
    shared_ptr<IImposto> ipi = { make_shared<IPI>() };
    auto feijao { make_unique<ProdutoAlimenticio>(icms) };
    feijao->devolver();
    feijao->setImposto(ipi);
    feijao->devolver();
    return 0;
}
