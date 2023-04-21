#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

class TipoMilitar : public Avion {
public:
TipoMilitar() : Avion() {
setTipo("Militar");
}

void startingEngine() override {
    cout << "⛽Check Fuel ✅\n";
    for (int i = 0; i < 3; i++) {
        cout << "💥💥Spark💥💥\n";
        try {
            this_thread::sleep_for(chrono::milliseconds(800 - (i * 400)));
        }
        catch (const exception& e) {
            cerr << "⛔:" << e.what() << endl;
        }
    }
    cout << "Started the Motor...✈️✈️\n";
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
            this_thread::sleep_for(chrono::milliseconds(500 - (i * 50)));
        }
        catch (const exception& e) {
            cerr << "⛔:" << e.what() << endl;
        }
    }
    addSpeed(10);
}

void stopingEngine() override {
    cout << "✅ Check the Turbine 🆗🆗\n";
    for (int i = 0; i < 2; i++) {
        cout << "⛔ turning off turbine❌❌\n";
        try {
            this_thread::sleep_for(chrono::milliseconds(800 - (i * 400)));
        }
        catch (const exception& e) {
            cerr << "⛔:" << e.what() << endl;
        }
    }
    cout << "Stoped...⚡⚡\n";
}
};