#include "DogCreator.h"
#include "DogProduct.h"

#include <iostream>

std::unique_ptr<IProduct> DogCreator::CreateProduct()
{
    return std::make_unique<DogProduct>();
}

void DogCreator::CalledByPointer(IProduct* Product)
{
    std::cout << "CalledByPointer: I am a dog, ";
    Product->DoSomething();
}

void DogCreator::CalledByReference(IProduct& Product)
{
    std::cout << "CalledByReference: I am a dog, ";
    Product.DoSomething();
}