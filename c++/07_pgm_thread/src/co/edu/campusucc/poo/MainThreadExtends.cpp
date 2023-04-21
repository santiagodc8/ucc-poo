#include <iostream>
#include <thread>
#include <random>
#include "ThreadExtends.h"

using namespace std;

int main() {
ThreadExtends thread;
thread.setTimes(rand() % 50); // Generating a random number between 0 and 49
thread.start(); // Invoking thread using start() method
return 0;
}