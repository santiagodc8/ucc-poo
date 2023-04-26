#include <iostream>
#include <thread>
#include "Avion.h"

class TipoAvioneta : public Avion {
public:
    TipoAvioneta() {
        Avion();
        setTipo("Avioneta de Riego");
    }

    void startingEngine() override {
        std::cout << "⛽Check Fuel ✅\n";
        for (int i = 0; i < 3; i++) {
            std::cout << "💥💥Spark💥💥\n";
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(800 - (i * 400)));
            }
            catch (std::exception& e) {
                std::cerr << "⛔:" << e.what() << '\n';
            }
        }
        std::cout << "Started the Motor...🛩️🛩️\n";
    }

    void speedUp() override {
        std::string speedUpString = "speed up in Progress: ";
        for (int i = 0; i < getVelocidad(); i++) {
            speedUpString += "🛩️";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "🛩️";
            std::cout << speedUpString << '\n';
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(500 - (i * 50)));
            }
            catch (std::exception& e) {
                std::cerr << "⛔:" << e.what() << '\n';
            }
        }
        addSpeed(10);
    }

    void stopingEngine() override {
        std::cout << "✅ Check the Turbine 🆗🆗\n";
        for (int i = 0; i < 2; i++) {
            std::cout << "⛔ turning off turbine❌❌\n";
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(800 - (i * 400)));
            }
            catch (std::exception& e) {
                std::cerr << "⛔:" << e.what() << '\n';
            }
        }
        std::cout << "Stoped...⚡⚡\n";
    }
};
