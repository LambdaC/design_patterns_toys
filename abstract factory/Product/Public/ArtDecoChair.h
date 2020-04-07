#pragma once

#include "Interface/Chair.h"

class ArtDecoChair : public IChair
{
public:
    virtual void sitOn() override;
};
