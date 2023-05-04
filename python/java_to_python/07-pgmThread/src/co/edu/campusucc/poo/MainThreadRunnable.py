import random
import threading
from ThreadRunnable import ThreadRunnable

def main():
    runnable = ThreadRunnable()
    runnable.setTimes(random.randint(0, 50))
    # initializing Thread Object
    thread = threading.Thread(target=runnable.run)
    thread.start()

if __name__ == "__main__":
    main()
