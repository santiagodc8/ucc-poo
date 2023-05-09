from time import sleep
from Avion import Avion
from IAvionGranja import IAvionGranja

class TipoAvioneta(Avion, IAvionGranja):
    def __init__(self):
        super().__init__()
        self.setTipo("Avioneta de Riego")

    def startingEngine(self):
        print("⛽Check Fuel ✅")
        for i in range(3):
            print("💥💥Spark💥💥")
            try:
                sleep(0.8 - (i * 0.4))
            except KeyboardInterrupt:
                print("⛔: KeyboardInterrupt")
            except Exception as e:
                print(f"⛔: {e}")
        print("Started the Motor...🛩️🛩️")

    def speedUp(self):
        speedUpString = "speed up in Progress: "
        for i in range(super().getVelocidad()):
            speedUpString += "🛩️"

        for i in range(10):
            speedUpString += "🛩️"
            print(speedUpString)
            try:
                sleep(0.5 - (i * 0.05))
            except KeyboardInterrupt:
                print("⛔: KeyboardInterrupt")
            except Exception as e:
                print(f"⛔: {e}")
        super().addSpeed(10)

    def stopingEngine(self):
        print("✅ Check the Turbine 🆗🆗")
        for i in range(2):
            print("⛔ turning off turbine❌❌")
            try:
                sleep(0.8 - (i * 0.4))
            except KeyboardInterrupt:
                print("⛔: KeyboardInterrupt")
            except Exception as e:
                print(f"⛔: {e}")
        print("Stoped...⚡⚡")

    def irrigation(self):
        for i in range(5):
            print("🛩️🛩️ irrigation in process 💧💧💧")
            try:
                sleep(1 - (i * 0.05))
            except KeyboardInterrupt:
                print("⛔: KeyboardInterrupt")
            except Exception as e:
                print(f"⛔: {e}")

    def chargeFuel(self, litros):
        super().chargeFuel(litros)
        print("")
        for i in range(litros):
            try:
                print("⛽", end="")
                sleep(0.1)
            except KeyboardInterrupt:
                print("⛔: KeyboardInterrupt")
            except Exception as e:
                print(f"⛔: {e}")
        print("")
        print("⛽ Full Fuel ✅")