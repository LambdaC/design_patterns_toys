#include "Creator.h"

// ��������ģʽ�ĺô����ǣ��������Ҳ���Ҫ֪��CreateProduct���صľ���Product������ʲô��
// ֻҪProduct�����า����CreateProduct�ķ����ͺã�����д��ҵ������ǲ���Ҫ�ı�ġ�
// ����Open-Closeԭ��
void Creator::DoLogicThing()
{
    IProduct* Product = CreateProduct();
    Product->DoSomething();
    CalledByPointer(Product);
    IProduct& Product2 = *Product;
    CalledByReference(Product2);
}