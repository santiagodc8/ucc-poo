#pragma once

#include "IAvionStandar.h"

class IAvionGranja : public IAvionStandar {
public:
    virtual void irrigation() = 0;
};
