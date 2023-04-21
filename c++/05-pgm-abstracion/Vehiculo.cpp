#include <iostream>
#include <string>
#include <thread>
#include <chrono>

class Vehiculo {
protected:
    std::string marca;
    std::string carroseria;
    std::string tipo;
    int velocidad;
public:
    Vehiculo() {
        velocidad = 0;
    }

    void setMarca(std::string m) {
        marca = m;
    }

    void setCarroseria(std::string c) {
        carroseria = c;
    }

    void setTipo(std::string t) {
        tipo = t;
    }

    std::string toString() {
        return "Marca: " + marca + ", Carroseria: " + carroseria + ", Tipo: " + tipo;
    }

    void startingEngine() {
        std::cout << "Starting Engine...\n";
        for (int i = 0; i < 3; i++) {
            std::cout << "Engine Starting in " << 3-i << "...\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        std::cout << "Engine Started!\n";
    }

    void stopingEngine() {
        std::cout << "Stopping Engine...\n";
        for (int i = 0; i < 3; i++) {
            std::cout << "Engine Stopping in " << 3-i << "...\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        std::cout << "Engine Stopped!\n";
    }

    void speedUp() {
        std::cout << "Speeding Up...\n";
        for (int i = 0; i < 10; i++) {
            velocidad += 10;
            std::cout << "Current Speed: " << velocidad << "\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
    }

    void breaking() {
        std::cout << "Breaking...\n";
        for (int i = 0; i < 5; i++) {
            velocidad -= 10;
            if (velocidad < 0) {
                velocidad = 0;
            }
            std::cout << "Current Speed: " << velocidad << "\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
    }

    void currentSpeed() {
        std::cout << "Current Speed: " << velocidad << "\n";
    }

    void parking() {
        std::cout << "Parking...\n";
    }
};
