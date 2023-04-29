import random
from src.co.edu.campusucc.poo import ThreadExtends

def main():
    thread = ThreadExtends()
    thread.setTimes(random.randint(0, 50))
    # Invoking Thread using start() method
    thread.start()

if __name__ == "__main__":
    main()