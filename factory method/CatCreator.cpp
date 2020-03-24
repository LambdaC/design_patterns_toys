#include "CatCreator.h"
#include "CatProduct.h"
#include <iostream>

IProduct* CatCreator::CreateProduct()
{
    return new CatProduct{};
}

void CatCreator::CalledByPointer(IProduct* Product)
{
    std::cout << "CalledByPointer: I am a cat, ";
    Product->DoSomething();
}

void CatCreator::CalledByReference(IProduct& Product)
{
    std::cout << "CalledByReference: I am a cat, ";
    Product.DoSomething();
}
