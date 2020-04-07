#pragma once

#include "Interface/Chair.h"

class ModernChair : public IChair
{
public:
    virtual void sitOn() override;
};
