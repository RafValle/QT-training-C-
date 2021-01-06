#include "iproduto.h"

IProduto::IProduto(const shared_ptr<IImposto> &imposto)
    : _imposto(imposto)
{

}

void IProduto::setImposto(const shared_ptr<IImposto> &imposto)
{
    _imposto = imposto;
}
