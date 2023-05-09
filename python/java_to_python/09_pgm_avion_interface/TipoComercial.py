import time
from Avion import Avion

class TipoComercial(Avion):
    def __init__(self):
        super().__init__()
        self.setTipo("Comercial")
    
    def startingEngine(self):
        print("⛽Check Fuel ✅")
        for i in range(3):
            print("💥💥Spark💥💥")
            try:
                time.sleep(1 - (i * 0.2))
            except Exception as e:
                print("⛔: {}".format(e))
        print("Started the Motor...✈️✈️")
    
    def stopingEngine(self):
        print("✈️✈️ Check Engine ✅")
        for i in range(2):
            print("⛔ Stoping Engine...⛔‼️")
            try:
                time.sleep(1 - (i * 0.4))
            except Exception as e:
                print("⛔: {}".format(e))
        print("Stoped...⛔")