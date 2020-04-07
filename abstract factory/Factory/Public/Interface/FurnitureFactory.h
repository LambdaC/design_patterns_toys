#pragma once
#include "Interface/Chair.h"
#include "Interface/Sofa.h"
#include "Interface/CoffeeTable.h"
#include <memory>

class IFurnitureFactory
{
public:
    virtual std::unique_ptr<IChair> createChair() = 0;
    virtual std::unique_ptr<ISofa> createSofa() = 0;
    virtual std::unique_ptr<ICoffeeTable> createCoffeeTable() = 0;
};
