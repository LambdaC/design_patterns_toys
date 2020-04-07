#include <iostream>
#include <string>
#include "Interface/FurnitureFactory.h"
#include "ModernFurnitureFactory.h"
#include "ArtDecoFurnitureFactory.h"
#include "VictorianFurnitureFactory.h"

std::unique_ptr<IFurnitureFactory> GetFurnitureFactory();

int main()
{
    // �����и��ô����ǣ��ͻ����뼴ʹ��֪�����ص���ʵFurnitureFactoryʵ��Ҳ��Ӱ��ͻ������ҵ���߼���
    std::unique_ptr<IFurnitureFactory> FurnitureFactory = GetFurnitureFactory();

    // ͬ����ʹ��֪�����ص�Chair��Sofa��CoffeeTableʵ����ʲôҲ��Ӱ��ͻ������ҵ���߼���
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

// ����OS��Ϣ���������ļ���Ϣ��������Ӧ��FurnitureFactoryʵ����
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
    Note: ���������ͳ��󹤳�������
    �����������Կ�����һ����Ʒ�в�ͬ�ӷ��������������󹤳����Ƕ����Ʒ��ÿ����Ʒ���в�ͬ�ӷ���������
    ���ݷ���Ĳ�ͬ�γɲ�ͬ�Ĺ���������
    ��������ֻ����һ�ֲ�Ʒ�������󹤳��Ѷ����Ʒ�����ɷ���ͬ����Ĺ��������С�
*/