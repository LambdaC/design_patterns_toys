#include "ArtDecoFurnitureFactory.h"
#include "ArtDecoChair.h"
#include "ArtDecoSofa.h"
#include "ArtDecoCoffeeTable.h"

std::unique_ptr<IChair> ArtDecoFurnitureFactory::createChair()
{
    return std::make_unique<ArtDecoChair>();
}

std::unique_ptr<ISofa> ArtDecoFurnitureFactory::createSofa()
{
    return std::make_unique<ArtDecoSofa>();
}

std::unique_ptr<ICoffeeTable> ArtDecoFurnitureFactory::createCoffeeTable()
{
    return std::make_unique<ArtDecoCoffeeTable>();
}