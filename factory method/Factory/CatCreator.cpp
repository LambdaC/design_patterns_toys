#include "Public/CatCreator.h"
#include "../Product/Public/CatProduct.h"
#include <iostream>

std::unique_ptr<IProduct> CatCreator::CreateProduct()
{
    return std::make_unique<CatProduct>();
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
