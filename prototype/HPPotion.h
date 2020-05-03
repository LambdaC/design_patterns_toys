#pragma once

#include "Item.h"

class HPPotion : public Item
{
    unsigned int m_hp;
public:
    void setHP(unsigned int hp);
    virtual void use() override;
    virtual HPPotion* clone() override;
};
