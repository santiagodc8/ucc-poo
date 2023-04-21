#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    cout << "+--------------------------------------------+" << endl;
    cout << "+------------- PGM: PgmContador -------------+" << endl;
    cout << "+Autor:👉🏽👉🏽👉🏽Santiago Duran👈🏽👈🏽👈🏽+" << endl;
    cout << "+--------------------------------------------+" << endl;

    try {
        auto now = chrono::system_clock::now();
        time_t current_time = chrono::system_clock::to_time_t(now);
        cout << "Contando desde el shell a las " << ctime(&current_time);

        for (int i = 0; i < 20; i++) {
            cout << "Posicion Indice ❇️: " << i << endl;
            this_thread::sleep_for(chrono::milliseconds(1000-(i*50)));
        }
        cout << "Contador Finalizado...🔥🔥🔥🔥🔥" << endl;
    } catch (exception& e) {
        cerr << "⚠️⚠️⚠️ " << e.what() << endl;
    }
    
    return 0;
}
