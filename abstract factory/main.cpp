#include <iostream>
#include <string>
#include "Interface/FurnitureFactory.h"
#include "ModernFurnitureFactory.h"
#include "ArtDecoFurnitureFactory.h"
#include "VictorianFurnitureFactory.h"

std::unique_ptr<IFurnitureFactory> GetFurnitureFactory();

int main()
{
    // 这里有个好处就是，客户代码即使不知道返回的真实FurnitureFactory实例也不影响客户代码的业务逻辑。
    std::unique_ptr<IFurnitureFactory> FurnitureFactory = GetFurnitureFactory();

    // 同理，即使不知道返回的Chair、Sofa、CoffeeTable实例是什么也不影响客户代码的业务逻辑。
    std::unique_ptr<IChair> Chair = FurnitureFactory->createChair();
    std::unique_ptr<ISofa> Sofa = FurnitureFactory->createSofa();
    std::unique_ptr<ICoffeeTable> CoffeeTable = FurnitureFactory->createCoffeeTable();

    Chair->sitOn();
    Sofa->lieOn();
    CoffeeTable->makeCoffee();

    std::cin.get();
    return 0;
}

std::string getConfigType()
{
    return "Modern";
}

// 根据OS信息或者配置文件信息，返回相应的FurnitureFactory实例。
std::unique_ptr<IFurnitureFactory> GetFurnitureFactory()
{
    /**/
    std::string ConfigType = getConfigType();
    if (ConfigType == "ArtDeco")
        return std::make_unique<ArtDecoFurnitureFactory>();
    if (ConfigType == "Modern")
        return std::make_unique<ModernFurnitureFactory>();
    if (ConfigType == "Victorian")
        return std::make_unique<VictorianFurnitureFactory>();
    return nullptr;
}

/*
    Note: 工厂方法和抽象工厂的区别？
    工厂方法可以看作是一个产品有不同子分类的情况，而抽象工厂就是多个产品，每个产品都有不同子分类的情况。
    根据分类的不同形成不同的工厂方法。
    工厂方法只生产一种产品，而抽象工厂把多个产品的生成放在同种类的工厂方法中。
*/