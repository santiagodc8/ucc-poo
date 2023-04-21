#include <iostream>
#include "Avion.h"
#include "IAvionMilitar.h"
#include "TipoMilitar.h"

using namespace std;

TipoMilitar::TipoMilitar() : Avion() {
    setTipo("Militar");
}

void TipoMilitar::startingEngine() {
    cout << "⛽Check Fuel ✅" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "💥💥Spark💥💥" << endl;
        try {
            this_thread::sleep_for(chrono::milliseconds(800 - (i * 400)));
        } catch (const std::exception& e) {
            cerr << "⛔:" << e.what() << endl;
        }
    }
    cout << "Started the Motor...✈️✈️" << endl;
}

void TipoMilitar::speedUp() {
    string speedUpString = "speed up in Progress: ";
    for (int i = 0; i < getVelocidad(); i++) {
        speedUpString += "✈️";
    }

    for (int i = 0; i < 10; i++) {
        speedUpString += "✈️";
        cout << speedUpString << endl;
        try {
            this_thread::sleep_for(chrono::milliseconds(500 - (i * 50)));
        } catch (const std::exception& e) {
            cerr << "⛔:" << e.what() << endl;
        }
    }
    addSpeed(10);
}

void TipoMilitar::stopingEngine() {
    cout << "✅ Check the Turbine 🆗🆗" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "⛔ turning off turbine❌❌" << endl;
        try {
            this_thread::sleep_for(chrono::milliseconds(800 - (i * 400)));
        } catch (const std::exception& e) {
            cerr << "⛔:" << e.what() << endl;
        }
    }
    cout << "Stoped...⚡⚡" << endl;
}

void TipoMilitar::shootMissiles() {
    for (int i = 0; i < 5; i++) {
        cout << "🚀🚀 Missiles ready to fire 🔥🔥🔥" << endl;
        try {
            this_thread::sleep_for(chrono::milliseconds(1000 - (i * 50)));
        } catch (const std::exception& e) {
            cerr << "⛔:" << e.what() << endl;
        }
    }
}

void TipoMilitar::chargeFuel(int litros) {
    Avion::chargeFuel(litros);
    cout << endl;
    for (int i = 0; i < litros; i++) {
        try {
            cout << "⛽";
            this_thread::sleep_for(chrono::milliseconds(100));
        } catch (const std::exception& e) {
            cerr << "⛔:" << e.what() << endl;
        }
    }
    cout << endl;
    cout << "⛽ Full Fuel ✅" << endl;
}
