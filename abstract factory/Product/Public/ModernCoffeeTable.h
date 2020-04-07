#pragma once

#include "Interface/CoffeeTable.h"

class ModernCoffeeTable : public ICoffeeTable
{
    virtual void makeCoffee() override;
};
