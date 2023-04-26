#include <iostream>
#include <string>
#include "Avion.h"

class TipoComercial : public Avion {
public:
    TipoComercial() {
        Avion();
        setTipo("Comercial");
    }

    void startingEngine() override {
        std::cout << "⛽Check Fuel ✅" << std::endl;
        for (int i = 0; i < 3; i++) {
            std::cout << "💥💥Spark💥💥" << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 - (i * 200)));
            } catch (std::exception &e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        std::cout << "Started the Motor...✈️✈️" << std::endl;
    }

    void stopingEngine() override {
        std::cout << "✈️✈️ Check Engine ✅" << std::endl;
        for (int i = 0; i < 2; i++) {
            std::cout << "⛔ Stoping Engine...⛔‼️" << std::endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 - (i * 400)));
            } catch (std::exception &e) {
                std::cerr << "⛔:" << e.what() << std::endl;
            }
        }
        std::cout << "Stoped...⛔" << std::endl;
    }
};
