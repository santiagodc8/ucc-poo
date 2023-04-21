#include <iostream>
#include <string>

using namespace std;

class Avion {
public:
    Avion() {}

    // Properties
    string marca;
    string tipo;
    int velocidad;

    string toString() {
        return "Clase Abstracta--> Avion: " + marca + " " + tipo + " ";
    }

    // Abstract Behavior
    virtual void startingEngine() = 0;

    virtual void stopingEngine() = 0;

    // Definir comportamiento
    void speedUp() {
        string speedUpString = "SpeedUp in progres: ";
        for (int i = 0; i < velocidad; i++) {
            speedUpString += "🛫";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "🛫";
            cout << speedUpString << endl;
            try {
                this_thread::sleep_for(chrono::milliseconds(1000 - (i * 50)));
            } catch (const exception& e) {
                cerr << "⛔:" << e.what() << endl;
            }
        }
        addSpeed(10);

    }

protected:
    int addSpeed(int velocidad) {
        this->velocidad += velocidad;
        return velocidad;
    }

    int downSpeed(int velocidad) {
        this->velocidad -= velocidad;
        return velocidad;
    }

public:
    void currentSpeed() {
        cout << "Current Speed 🛫: " << velocidad << endl;
    }

    void landing() {
        for (int i = 0; i < 5; i++) {
            cout << "🛬🛬 Landing in Progress 🚷🚷" << endl;
            try {
                this_thread::sleep_for(chrono::milliseconds(1000 - (i * 50)));
            } catch (const exception& e) {
                cerr << "⛔:" << e.what() << endl;
            }
        }

    }

    void shootMissiles() {
        for (int i = 0; i < 5; i++) {
            cout << "🚀🚀 Missiles ready to fire 🔥🔥🔥" << endl;
            try {
                this_thread::sleep_for(chrono::milliseconds(1000 - (i * 50)));
            } catch (const exception& e) {
                cerr << "⛔:" << e.what() << endl;
            }
        }
    }

    void irrigation() {
        for (int i = 0; i < 5; i++) {
            cout << "🛩️🛩️ irrigation in process 💧💧💧" << endl;
            try {
                this_thread::sleep_for(chrono::milliseconds(1000 - (i * 50)));
            } catch (const exception& e) {
                cerr << "⛔:" << e.what() << endl;
            }
        }
    }

    void descent() {
        string speedUpString = "";
        for (int i = 0; i < velocidad; i++) {
            speedUpString += "🛬";
        }
        for (int i = 0; i < 10; i++) {
            speedUpString = speedUpString.substr(0, speedUpString.length() - 1);
            cout << "🛬🛬Descent in Progress🛬🛬: " << speedUpString << endl;
            try {
                this_thread::sleep_for(chrono::milliseconds(1000 - (veloc
