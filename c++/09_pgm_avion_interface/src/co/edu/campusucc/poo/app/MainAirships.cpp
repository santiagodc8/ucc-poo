#include <iostream>
#include <string>

class IAvionCarga {
public:
    virtual void openDoors() = 0;
    virtual void closeDoors() = 0;
    virtual void pickUp() = 0;
};

class IAvionGranja {
public:
    virtual void irrigation() = 0;
};

class IAvionMilitar {
public:
    virtual void shootMissiles() = 0;
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

    virtual void setMarca(std::string marca) = 0;
    virtual void setTipo(std::string tipo) = 0;
};

class TipoAvioneta : public IAvionStandar {
private:
    std::string marca;
    std::string tipo;

public:
    void startingEngine() {
        std::cout << "Encendiendo el motor de la avioneta." << std::endl;
    }
    void stopingEngine() {
        std::cout << "Apagando el motor de la avioneta." << std::endl;
    }
    void speedUp() {
        std::cout << "Acelerando la avioneta." << std::endl;
    }
    void currentSpeed() {
        std::cout << "Velocidad actual de la avioneta." << std::endl;
    }
    void landing() {
        std::cout << "Aterrizando la avioneta." << std::endl;
    }
    void descent() {
        std::cout << "Descendiendo la avioneta." << std::endl;
    }
    void chargeFuel(int litros) {
        std::cout << "Cargando combustible en la avioneta: " << litros << " litros." << std::endl;
    }
    void setMarca(std::string marca) {
        this->marca = marca;
    }
    void setTipo(std::string tipo) {
        this->tipo = tipo;
    }
    void openDoors() {}
    void closeDoors() {}
    void pickUp() {}
    void shootMissiles() {}
    void irrigation() {}
};

class TipoCarga : public IAvionStandar {
private:
    std::string marca;
    std::string tipo;

public:
    void startingEngine() {
        std::cout << "Encendiendo el motor del avión de carga." << std::endl;
    }
    void stopingEngine() {
        std::cout << "Apagando el motor del avión de carga." << std::endl;
    }
    void speedUp() {
        std::cout << "Acelerando el avión de carga." << std::endl;
    }
    void currentSpeed() {
