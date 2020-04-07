#include "VictorianFurnitureFactory.h"
#include "VictorianChair.h"
#include "VictorianSofa.h"
#include "VictorianCoffeeTable.h"

std::unique_ptr<IChair> VictorianFurnitureFactory::createChair()
{
    return std::make_unique<VictorianChair>();
}

std::unique_ptr<ISofa> VictorianFurnitureFactory::createSofa()
{
    return std::make_unique<VictorianSofa>();
}

std::unique_ptr<ICoffeeTable> VictorianFurnitureFactory::createCoffeeTable()
{
    return std::make_unique<VictorianCoffeeTable>();
}