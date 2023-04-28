import time
from Avion import Avion  # assuming there is a class called Avion in avion.py

class TipoComercial(Avion):
    def __init__(self):
        super().__init__()
        self.setTipo("Comercial")

    def startingEngine(self):
        print("⛽Check Fuel ✅")
        for i in range(3):
            print("💥💥Spark💥💥")
            time.sleep(1 - (i * 0.2))
        print("Started the Motor...✈️✈️")

    def stopingEngine(self):
        print("✈️✈️ Check Engine ✅")
        for i in range(2):
            print("⛔ Stoping Engine...⛔‼️")
            time.sleep(1 - (i * 0.4))
        print("Stoped...⛔")