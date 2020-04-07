#pragma once

#include "Interface/CoffeeTable.h"

class VictorianCoffeeTable : public ICoffeeTable
{
    virtual void makeCoffee() override;
};
