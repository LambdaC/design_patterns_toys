#pragma once

#include "Interface/Chair.h"

class VictorianChair : public IChair
{
public:
    virtual void sitOn() override;
};
