#include "HPPotion.h"
#include <iostream>

void HPPotion::setHP(unsigned int hp)
{
    m_hp = hp;
}

void HPPotion::use()
{
    std::cout << "Using HP Potion, HP increase "<< m_hp << std::endl;
}

HPPotion* HPPotion::clone()
{
    HPPotion* potion = new HPPotion();
    potion->m_hp = this->m_hp;
    return potion;
}