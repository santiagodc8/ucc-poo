#include <iostream>
#include "Avion.h"

class TipoComercial : public Avion {
public:
    TipoComercial() {
        setTipo("Comercial");
    }

    void startingEngine() override {
        std::cout << "⛽Check Fuel ✅\n";
        for (int i = 0; i < 3; i++) {
            std::cout << "💥💥Spark💥💥\n";
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 - (i * 200)));
            } catch (std::exception& e) {
                std::cerr << "⛔:" << e.what() << '\n';
            }
        }
        std::cout << "Started the Motor...✈️✈️\n";
    }

    void stopingEngine() override {
        std::cout << "✈️✈️ Check Engine ✅\n";
        for (int i = 0; i < 2; i++) {
            std::cout << "⛔ Stoping Engine...⛔‼️\n";
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 - (i * 400)));
            } catch (std::exception& e) {
                std::cerr << "⛔:" << e.what() << '\n';
            }
        }
        std::cout << "Stoped...⛔\n";
    }
};
