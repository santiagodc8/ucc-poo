#include <iostream>
#include <string>
#include "Avion.h"
#include "IAvionCarga.h"
using namespace std;

class TipoCarga : public Avion, public IAvionCarga {
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
            } catch (std::exception& e) {
                cerr << "⛔:" << e.what() << endl;
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
            } catch (std::exception& e) {
                cerr << "⛔:" << e.what() << endl;
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
            } catch (std::exception& e) {
                cerr << "⛔:" << e.what() << endl;
            }
        }
        cout << "Stoped...⚡⚡" << endl;
    }

    void openDoors() override {
        cout << "✅ Open Door 🆗" << endl;
    }

    void closeDoors() override {
        cout << "✅ Close Door 🆗" << endl;
    }

    void pickUp() override {
        cout << "✅ PickUp 🆗" << endl;
    }

    void chargeFuel(int litros) override {
        Avion::chargeFuel(litros);
        cout << endl;
        for (int i = 0; i < litros; i++) {
            try {
                cout << "⛽";
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            } catch (std::exception& e) {
                cerr << "⛔:" << e.what() << endl;
            }
        }
        cout << endl;
        cout << "⛽ Full Fuel ✅" << endl;
    }
};
