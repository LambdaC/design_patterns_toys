#include "Creator.h"

// 工厂方法模式的好处就是，在这里我不需要知道CreateProduct返回的具体Product对象是什么。
// 只要Product的子类覆盖了CreateProduct的方法就好，这里写的业务代码是不需要改变的。
// 符号Open-Close原则
void Creator::DoLogicThing()
{
    IProduct* Product = CreateProduct();
    Product->DoSomething();
    CalledByPointer(Product);
    IProduct& Product2 = *Product;
    CalledByReference(Product2);
}