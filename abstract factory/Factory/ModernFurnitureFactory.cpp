#include "ModernFurnitureFactory.h"
#include "ModernChair.h"
#include "ModernSofa.h"
#include "ModernCoffeeTable.h"

std::unique_ptr<IChair> ModernFurnitureFactory::createChair()
{
    return std::make_unique<ModernChair>();
}

std::unique_ptr<ISofa> ModernFurnitureFactory::createSofa()
{
    return std::make_unique<ModernSofa>();
}

std::unique_ptr<ICoffeeTable> ModernFurnitureFactory::createCoffeeTable()
{
    return std::make_unique<ModernCoffeeTable>();
}