#ifndef ICMS_H
#define ICMS_H

#include "iimposto.h"

class ICMS : public IImposto
{
    // IImposto interface
public:
    virtual float calcular() override {return 20;};
};

#endif // ICMS_H
