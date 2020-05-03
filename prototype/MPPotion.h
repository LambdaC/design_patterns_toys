#pragma once

#include "Item.h"

class MPPotion : public Item
{
    unsigned int m_mp;
public:
    void setMP(unsigned int mp);
    virtual void use() override;
    virtual MPPotion* clone() override;
};
