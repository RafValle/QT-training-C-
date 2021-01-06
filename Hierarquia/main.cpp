#include <iostream>
#include <memory>

using namespace std;

#include "icms.h"
#include "ipi.h"
#include "produtoalimenticio.h"
#include "produtoeletronico.h"

int main()
{
    shared_ptr<IImposto>
            icms = {make_shared<ICMS>()};
    shared_ptr<IImposto>
            ipi = {make_shared<Ipi>()};
    auto feijao
            = {make_unique<ProdutoAlimenticio>(icms)};
//    IProduto *feijao = new ProdutoAlimenticio (icms);
    feijao.devolver();
    feijao.setImposto(ipi);
    feijao.devolver();
//    delete icms;
//    delete ipi;
    return 0;
}
