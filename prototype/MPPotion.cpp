#include "MPPotion.h"
#include <iostream>

void MPPotion::setMP(unsigned int mp)
{
    m_mp = mp;
}

void MPPotion::use()
{
    std::cout << "Using MP Potion, MP increase " << m_mp << std::endl;
}

MPPotion* MPPotion::clone()
{
    MPPotion* potion = new MPPotion();
    potion->m_mp = this->m_mp;
    return potion;
}