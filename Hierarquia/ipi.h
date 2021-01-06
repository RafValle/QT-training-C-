#ifndef IPI_H
#define IPI_H

#include "iimposto.h"

class Ipi : public IImposto
{
public:
    virtual float calcular() override;
};

#endif // IPI_H
