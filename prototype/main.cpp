#include "HPPotion.h"
#include "MPPotion.h"
#include <iostream>

void cloneAndUseItem(Item* item)
{
    Item* newItem = item->clone();
    newItem->use();
}

int main()
{
    HPPotion* hppotion = new HPPotion();
    hppotion->setHP(100);
    MPPotion* mppotion = new MPPotion();
    mppotion->setMP(200);

    cloneAndUseItem(hppotion);
    cloneAndUseItem(mppotion);

    std::cin.get();
    return 0;
}