#pragma once

class IAvionCarga {
public:
    virtual void openDoors() = 0;
    virtual void closeDoors() = 0;
    virtual void pickUp() = 0;
};
