#ifndef ICMS_H
#define ICMS_H

#include "iimposto.h"

class ICMS : public IImposto
{
public:
    virtual float calcular() override;
};

#endif // ICMS_H
