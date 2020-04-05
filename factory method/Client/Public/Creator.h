#pragma once

#include "Product.h"
#include <memory>

class Creator
{
public:
    void DoLogicThing();
protected:  // private also ok
    virtual void CalledByReference(IProduct& Product) = 0;
    virtual void CalledByPointer(IProduct* Product) = 0;
    virtual std::unique_ptr<IProduct> CreateProduct() = 0;
};
