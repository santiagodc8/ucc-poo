from Vehiculo import Vehiculo
import time


class TipoElectrico(Vehiculo):

    def __init__(self):
        super().__init__()
        self.setTipo("Electrico")

    def startingEngine(self):
        print("🔌 Check Electric System...🔌✅")
        for i in range(2):
            print("¡¡🔋 Init... 🔋!!")
            time.sleep(0.5 - (i * 0.25))
        print("Started...🚙💡")

    def stopingEngine(self):
        print("✅ Check Electric Circuit 🔋")
        for i in range(2):
            print("¡¡⛔ Cutting Electric Circuit...⚡!!")
            time.sleep(0.8 - (i * 0.4))
        print("Stoped...⚡⚡")

    def speedUp(self):
        speedUpString = "speed up in Progress: "
        for i in range(super().getVelocidad()):
            speedUpString += "⏩"

        for i in range(10):
            speedUpString += "⏩"
            print(speedUpString)
            time.sleep(0.5 - (i * 0.05))
        super().addSpeed(10)