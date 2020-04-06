#include "Factory/Public/Interface/Creator.h"
#include "Factory/Public/CatCreator.h"
#include "Factory/Public/DogCreator.h"
#include "Product/Public/Interface/Product.h"
#include <iostream>

std::unique_ptr<Creator> InitCreator();
ProductType::Type GetConfigType();

// �����и��ô����ǣ�Creator��DoLogicThing()����Ҫ�޸ģ��Ϳ���ʹ�ò�ͬ��Productʵ����
// ������չ�µ�Product��������Ҫ��InitCreator()������µ�����ʵ�����룬����Ҫ�޸�����ԭ�д��룬
// ֻ������һЩ�ļ����С�
int main()
{

    std::unique_ptr<Creator> Pawner = InitCreator();

    Pawner->DoLogicThing();
    std::cin.get();
    return 0;
}

// ��ʹ�ù����У��������õ����������ɶ�Ӧ��Creatorʵ������ͬ��Creatorʵ�����ɵ�Productʵ���ǲ�ͬ�ġ�
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


// �������õ�ProductType��ʵ���У����Դ��ļ��ж�ȡ��
ProductType::Type GetConfigType()
{
    // return ProductType::Cat;
    return ProductType::Dog;
}