#pragma once

class CopiableObject
{
public:
    virtual CopiableObject* clone() = 0;
    virtual ~CopiableObject() = default;
};
