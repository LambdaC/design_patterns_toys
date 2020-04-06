#pragma once

#include "Interface/Creator.h"

class DogCreator : public Creator
{
    virtual std::unique_ptr<IProduct> CreateProduct() override;
    virtual void CalledByPointer(IProduct* Product) override;
    virtual void CalledByReference(IProduct& Product) override;
};
