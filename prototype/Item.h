#pragma once

#include "CopiableObject.h"

class Item : public CopiableObject
{
public:
    virtual void use() = 0;
    virtual Item* clone() override =0;
};
