#include "CatCreator.h"
#include "DogCreator.h"
#include "Product.h"
#include <iostream>

int main()
{
    Creator* CatPawner = new CatCreator{};
    Creator* DogPawner = new DogCreator{};

    CatPawner->DoLogicThing();
    DogPawner->DoLogicThing();

    std::cin.get();
    return 0;
}