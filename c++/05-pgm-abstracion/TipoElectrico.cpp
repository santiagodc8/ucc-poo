#include <iostream>
#include <thread>
#include "Vehiculo"

class TipoElectrico : public Vehiculo {
public:
    TipoElectrico() : Vehiculo() {
        setTipo("Electrico");
    }

    void startingEngine() override {
        std::cout << "🔌 Check Electric System...🔌✅" << std::endl;
        for (int i = 0; i < 2; i++) {
            std::cout << "¡¡🔋 Init... 🔋!!" << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(500 - (i * 250)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        std::cout << "Started...🚙💡" << std::endl;
    }

    void stopingEngine() override {
        std::cout << "✅ Check Electric Circuit 🔋" << std::endl;
        for (int i = 0; i < 2; i++) {
            std::cout << "¡¡⛔ Cutting Electric Circuit...⚡!!" << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(800 - (i * 400)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        std::cout << "Stopped...⚡⚡" << std::endl;
    }

    void speedUp() override {
        std::string speedUpString = "speed up in Progress: ";
        for (int i = 0; i < Vehiculo::getVelocidad(); i++) {
            speedUpString += "⏩";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "⏩";
            std::cout << speedUpString << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(500 - (i * 50)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        Vehiculo::addSpeed(10);
    }
};
