#ifndef IIMPOSTO_H
#define IIMPOSTO_H


class IImposto
{
public:
    IImposto();

    virtual float calcular() = 0;
};

#endif // IIMPOSTO_H
