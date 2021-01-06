#include <iostream>
using namespace std;

#include "icms.h"
#include "ipi.h"
#include "produtoalimenticio.h"
#include "produtoeletronico.h"

int main()
{
    IImposto *icms = new ICMS;
    IImposto *ipi = new Ipi;
    IProduto *feijao = new ProdutoAlimenticio (icms);
    feijao->devolver();
    feijao->setImposto(ipi);
    feijao->devolver();
    return 0;
}
