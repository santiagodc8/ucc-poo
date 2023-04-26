#ifndef IAVIONSTANDAR_H
#define IAVIONSTANDAR_H

class IAvionCarga {
public:
    virtual void openDoors() = 0;
    virtual void closeDoors() = 0;
    virtual void pickUp() = 0;
};

class IAvionMilitar {
public:
    virtual void shootMissiles() = 0;
};

class IAvionGranja {
public:
    virtual void irrigation() = 0;
};

class IAvionStandar : public IAvionCarga, public IAvionMilitar, public IAvionGranja {
public:
    virtual void startingEngine() = 0;
    virtual void stopingEngine() = 0;
    virtual void speedUp() = 0;
    virtual void currentSpeed() = 0;
    virtual void landing() = 0;
    virtual void descent() = 0;
    virtual void chargeFuel(int litros) = 0;
    virtual void setMarca(const std::string& marca) = 0;
    virtual void setTipo(const std::string& tipo) = 0;
};

#endif
