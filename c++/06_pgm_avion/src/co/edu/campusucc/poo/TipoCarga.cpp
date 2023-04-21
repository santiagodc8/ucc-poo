#include <iostream>
#include <string>
#include "Avion.hpp"

using namespace std;

class TipoCarga : public Avion {
public:
    TipoCarga() : Avion() {
        setTipo("Carga");
    }

    void startingEngine() override {
        cout << "⛽Check Fuel ✅" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "💥💥Spark💥💥" << endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(800 - (i * 400)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << endl;
            }
        }
        cout << "Started the Motor...✈️✈️" << endl;
    }

    void speedUp() override {
        string speedUpString = "speed up in Progress: ";
        for (int i = 0; i < getVelocidad(); i++) {
            speedUpString += "✈️";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "✈️";
            cout << speedUpString << endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(500 - (i * 50)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << endl;
            }
        }
        addSpeed(10);
    }

    void stopingEngine() override {
        cout << "✅ Check the Turbine 🆗🆗" << endl;
        for (int i = 0; i < 2; i++) {
            cout << "⛔ turning off turbine❌❌" << endl;
            try {
                std::this_thread::sleep_for(std::chrono::milliseconds(800 - (i * 400)));
            } catch (const std::exception& e) {
                std::cerr << "⛔:" << e.what() << endl;
            }
        }
        cout << "Stoped...⚡⚡" << endl;
    }
};
