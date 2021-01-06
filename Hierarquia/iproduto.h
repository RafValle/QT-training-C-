#ifndef IPRODUTO_H
#define IPRODUTO_H

#include <memory>
using namespace std;

class IImposto;
class IProduto
{
public:
    IProduto(const shared_ptr<IImposto> &imposto);
    void setImposto(const shared_ptr<IImposto> &imposto);

    virtual void devolver() = 0;

protected:
    shared_ptr<IImposto> _imposto;
};

#endif // IPRODUTO_H
