import time
from Avion import Avion
from IAvionCarga import IAvionCarga

class TipoCarga(Avion, IAvionCarga):
    def __init__(self):
        super().__init__()
        self.setTipo("Carga")
    
    def startingEngine(self):
        print("⛽Check Fuel ✅")
        for i in range(3):
            print("💥💥Spark💥💥")
            try:
                time.sleep(0.8 - (i * 0.4))
            except Exception as e:
                print("⛔: {}".format(e))
        print("Started the Motor...✈️✈️")
    
    def speedUp(self):
        speedUpString = "speed up in Progress: "
        for i in range(self.getVelocidad()):
            speedUpString += "✈️"
        
        for i in range(10):
            speedUpString += "✈️"
            print(speedUpString)
            try:
                time.sleep(0.5 - (i * 0.05))
            except Exception as e:
                print("⛔: {}".format(e))
        self.addSpeed(10)
    
    def stopingEngine(self):
        print("✅ Check the Turbine 🆗🆗")
        for i in range(2):
            print("⛔ turning off turbine❌❌")
            try:
                time.sleep(0.8 - (i * 0.4))
            except Exception as e:
                print("⛔: {}".format(e))
        print("Stoped...⚡⚡")
    
    def openDoors(self):
        print("✅ Open Door 🆗")
    
    def closeDoors(self):
        print("✅ Close Door 🆗")
    
    def pickUp(self):
        print("✅ PickUp 🆗")
    
    def chargeFuel(self, litros):
        super().chargeFuel(litros)
        print("")
        for i in range(litros):
            try:
                print("⛽", end="")
                time.sleep(0.1)
            except Exception as e:
                print("⛔: {}".format(e))
        print("")
        print("⛽ Full Fuel ✅")