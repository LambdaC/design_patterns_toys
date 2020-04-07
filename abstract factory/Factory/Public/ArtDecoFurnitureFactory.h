#pragma once

#include "Interface/FurnitureFactory.h"

class ArtDecoFurnitureFactory : public IFurnitureFactory
{
public:
    virtual std::unique_ptr<IChair> createChair() override;
    virtual std::unique_ptr<ISofa> createSofa() override;
    virtual std::unique_ptr<ICoffeeTable> createCoffeeTable() override;
};
