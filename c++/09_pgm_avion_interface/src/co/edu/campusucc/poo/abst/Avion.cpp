#pragma once

#include "IAvionStandar.h"
#include <iostream>
#include <string>

class Avion : public IAvionStandar {
public:
    Avion() {}

    // properties
    std::string marca;
    std::string tipo;
    int velocidad;

    std::string toString() {
        return "Clase Abstracta--> Avion: " + marca + " " + tipo + " ";
    }

    // Abstract Behavior
    virtual void startingEngine() override = 0;

    virtual void stopingEngine() override = 0;

    // Definir comportamiento
    virtual void speedUp() override {
        std::string speedUpString = "SpeedUp in progres: ";
        for (int i = 0; i < velocidad; i++) {
            speedUpString += "🛫";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "🛫";
            std::cout << speedUpString << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 - (i * 50)));
            } catch (std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        addSpeed(10);
    }

    int addSpeed(int velocidad) {
        this->velocidad += velocidad;
        return velocidad;
    }

    int downSpeed(int velocidad) {
        this->velocidad -= velocidad;
        return velocidad;
    }

    virtual void currentSpeed() override {
        std::cout << "Current Speed 🛫: " << velocidad << std::endl;
    }

    virtual void landing() override {
        for (int i = 0; i < 5; i++) {
            std::cout << "🛬🛬 Landing in Progress 🚷🚷" << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 - (i * 50)));
            } catch (std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
    }

    virtual void descent() override {
        std::string speedUpString = "";
        for (int i = 0; i < velocidad; i++) {
            speedUpString += "🛬";
        }
        for (int i = 0; i < 10; i++) {
            speedUpString = speedUpString.substr(0, speedUpString.length() - 1);
            std::cout << "🛬🛬Descent in Progress🛬🛬: " << speedUpString << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 - (velocidad + i * 50)));
            } catch (std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        downSpeed(10);
    }

    // Getters and Setters
    std::string getMarca() {
        return marca;
    }

    void setMarca(std::string marca) {
        this->marca = marca;
    }

    std::string getTipo() {
        return tipo;
    }

    void setTipo(std::string tipo) {
        this->tipo = tipo;
    }

    int getVelocidad() {
        return velocidad;
    }

    void set
