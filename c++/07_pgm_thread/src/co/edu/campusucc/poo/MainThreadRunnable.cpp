#include <iostream>
#include <thread>
#include <random>
#include "ThreadRunnable.h"

using namespace std;

int main() {
ThreadRunnable runnable;
runnable.setTimes(rand() % 50); // Generating a random number between 0 and 49
thread threadObj(runnable); // Initializing Thread Object
threadObj.start();
return 0;
}