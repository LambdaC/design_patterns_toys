#pragma once

namespace ProductType
{
    enum Type
    {
        Cat,
        Dog
    };
}

class IProduct
{
public:
    virtual void DoSomething() = 0;
};
