#include <iostream>
#include <thread>

using namespace std;

class ThreadRunnable : public Runnable {
private:
int times;

public:
void run() {
cout << "Runnable Thread Started Running...on UCC University\n";
cout << "Random Times: " << times << endl;
try {
printTimes();
} catch (const exception& e) {
cerr << e.what() << endl;
}
}
void printTimes() {
    int timesCount = 0;
    while (timesCount <= times) {
        cout << "-";
        timesCount++;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
    cout << "> OK\n";
}

int getTimes() {
    return times;
}

void setTimes(int times) {
    this->times = times;
}
};