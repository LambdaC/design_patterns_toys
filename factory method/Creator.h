#pragma once

#include "Product.h"

class Creator
{
public:
    void DoLogicThing();
protected: // private: also OK
    virtual void CalledByReference(IProduct& Product) = 0;
    virtual void CalledByPointer(IProduct* Product) = 0;
    virtual IProduct* CreateProduct() = 0;
};
