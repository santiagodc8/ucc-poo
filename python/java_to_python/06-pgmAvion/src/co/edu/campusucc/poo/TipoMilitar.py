import time
from Avion import Avion  # assuming there is a class called Avion in avion.py

class TipoMilitar(Avion):
    def __init__(self):
        super().__init__()
        self.setTipo("Militar")

    def startingEngine(self):
        print("⛽Check Fuel ✅")
        for i in range(3):
            print("💥💥Spark💥💥")
            time.sleep(0.8 - (i * 0.4))
        print("Started the Motor...✈️✈️")

    def speedUp(self):
        speedUpString = "speed up in Progress: "
        for i in range(self.getVelocidad()):
            speedUpString += "✈️"

        for i in range(10):
            speedUpString += "✈️"
            print(speedUpString)
            time.sleep(0.5 - (i * 0.05))
        super().addSpeed(10)

    def stopingEngine(self):
        print("✅ Check the Turbine 🆗🆗")
        for i in range(2):
            print("⛔ turning off turbine❌❌")
            time.sleep(0.8 - (i * 0.4))
        print("Stoped...⚡⚡")