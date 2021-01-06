#include "iproduto.h"

IProduto::IProduto(IImposto *imposto)
    : _imposto(imposto)
{

}

void IProduto::setImposto(IImposto *imposto)
{
    _imposto = imposto;
}
