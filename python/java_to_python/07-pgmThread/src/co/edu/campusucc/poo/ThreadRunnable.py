import threading
import time

class ThreadRunnable(threading.Thread):
    def __init__(self):
        threading.Thread.__init__(self)
        self.times = 0

    def run(self):
        print("Runnable Thread Started Running...on UCC University")
        print("Random Times: " + str(self.times))
        try:
            self.printTimes()
        except Exception as e:
            print(e)

    # Defined Behavior
    def printTimes(self):
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