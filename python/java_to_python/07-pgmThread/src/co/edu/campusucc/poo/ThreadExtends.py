import threading
import time

class ThreadExtends(threading.Thread):
    def __init__(self):
        threading.Thread.__init__(self)
        self.times = 0

    def run(self):
        print("Thread Started Running...on UCC University")
        print("Random Times: " + str(self.times))
        self.printlTimes()

    # Defined Behavior
    def printlTimes(self):
        timesCount = 0
        while timesCount <= self.times:
            print("-", end="")
            timesCount += 1
            time.sleep(0.05)
        print("> OK")

    # Getters and Setters
    def getTimes(self):
        return self.times

    def setTimes(self, times):
        self.times = times