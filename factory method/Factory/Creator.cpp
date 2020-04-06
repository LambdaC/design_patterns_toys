#include "Public/Interface/Creator.h"

void Creator::DoLogicThing()
{
    std::unique_ptr<IProduct> Product = CreateProduct();
    Product->DoSomething();
    IProduct &Product2 = *Product;
    Product2.DoSomething();
}