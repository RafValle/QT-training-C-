#ifndef IPI_H
#define IPI_H

#include "iimposto.h"

class IPI : public IImposto
{
    // IImposto interface
public:
    virtual float calcular() override {return 10;};
};

#endif // IPI_H
