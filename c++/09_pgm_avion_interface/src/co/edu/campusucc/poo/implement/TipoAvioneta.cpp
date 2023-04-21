#include <iostream>
#include <thread>

#include "Avion.h"
#include "IAvionGranja.h"

class TipoAvioneta : public Avion, public IAvionGranja {
public:
    TipoAvioneta() : Avion(), tipo("Avioneta de Riego") {}

    void startingEngine() override {
        std::cout << "⛽Check Fuel ✅" << std::endl;
        for (int i = 0; i < 3; i++) {
            std::cout << "💥💥Spark💥💥" << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(800 - (i * 400)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        std::cout << "Started the Motor...🛩️🛩️" << std::endl;
    }

    void speedUp() override {
        std::string speedUpString = "speed up in Progress: ";
        for (int i = 0; i < getVelocidad(); i++) {
            speedUpString += "🛩️";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "🛩️";
            std::cout << speedUpString << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(500 - (i * 50)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        addSpeed(10);
    }

    void stopingEngine() override {
        std::cout << "✅ Check the Turbine 🆗🆗" << std::endl;
        for (int i = 0; i < 2; i++) {
            std::cout << "⛔ turning off turbine❌❌" << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(800 - (i * 400)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        std::cout << "Stoped...⚡⚡" << std::endl;
    }

    void irrigation() override {
        for (int i = 0; i < 5; i++) {
            std::cout << "🛩️🛩️ irrigation in process 💧💧💧" << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 - (i * 50)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
    }

    void chargeFuel(int litros) override {
        Avion::chargeFuel(litros);
        std::cout << std::endl;
        for (int i = 0; i < litros; i++) {
            try {
                std::cout << "⛽";
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
