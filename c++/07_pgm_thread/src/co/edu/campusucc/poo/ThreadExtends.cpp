#include <iostream>
#include <thread>

using namespace std;

class ThreadExtends : public thread {
private:
int times;

public:
void run() {
cout << "Thread Started Running...on UCC University\n";
cout << "Random Times: " << times << endl;
printlTimes();
}
void printlTimes() {
    int timesCount = 0;
    while (timesCount <= times) {
        cout << "-";
        timesCount++;
        try {
            this_thread::sleep_for(chrono::milliseconds(50));
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
        }
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