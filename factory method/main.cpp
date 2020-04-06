#include "Factory/Public/Interface/Creator.h"
#include "Factory/Public/CatCreator.h"
#include "Factory/Public/DogCreator.h"
#include "Product/Public/Interface/Product.h"
#include <iostream>

std::unique_ptr<Creator> InitCreator();
ProductType::Type GetConfigType();

// 这里有个好处就是，Creator的DoLogicThing()不需要修改，就可以使用不同的Product实例。
// 而且拓展新的Product，除了需要在InitCreator()中添加新的生成实例代码，不需要修改其他原有代码，
// 只需新增一些文件就行。
int main()
{

    std::unique_ptr<Creator> Pawner = InitCreator();

    Pawner->DoLogicThing();
    std::cin.get();
    return 0;
}

// 在使用过程中，根据配置的类型来生成对应的Creator实例。不同的Creator实例生成的Product实例是不同的。
std::unique_ptr<Creator> InitCreator()
{
    ProductType::Type Type = GetConfigType();
    switch (Type)
    {
    case ProductType::Cat:
        return std::make_unique<CatCreator>();
        break;
    case ProductType::Dog:
        return std::make_unique<DogCreator>();
        break;
    default:
        return nullptr;
        break;
    }
}


// 返回配置的ProductType，实际中，可以从文件中读取。
ProductType::Type GetConfigType()
{
    // return ProductType::Cat;
    return ProductType::Dog;
}