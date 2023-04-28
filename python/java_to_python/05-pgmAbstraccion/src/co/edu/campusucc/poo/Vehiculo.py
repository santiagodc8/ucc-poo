from abc import ABC, abstractmethod
import time


class Vehiculo(ABC):

    def __init__(self):
        self.marca = ""
        self.tipo = ""
        self.carroseria = ""
        self.velocidad = 0

    def __str__(self):
        return f"Abstract Class --> Vehiculo: {self.tipo} {self.carroseria} {self.marca}"

    @abstractmethod
    def startingEngine(self):
        pass

    @abstractmethod
    def stopingEngine(self):
        pass

    def speedUp(self):
        speedUpString = "speed up in Progress: "
        for i in range(self.velocidad):
            speedUpString += "⏩"

        for i in range(10):
            speedUpString += "⏩"
            print(speedUpString)
            time.sleep(1 - (i * 0.05))

        self.addSpeed(10)

    def addSpeed(self, velocidad):
        self.velocidad += velocidad
        return self.velocidad

    def downSpeed(self, velocidad):
        self.velocidad -= velocidad
        return self.velocidad

    def currentSpeed(self):
        print(f"Current Speed ⏩: {self.velocidad}")

    def parking(self):
        for i in range(5):
            print("¡¡🅿️🅿️ Parking in Progress ⚠️⚠️!!")
            time.sleep(1 - (i * 0.05))

    def breaking(self):
        speedUpString = ""
        for i in range(self.velocidad):
            speedUpString += "⏩"
        for i in range(10):
            speedUpString = speedUpString[:-1]
            print(f"¡¡🚥 Braking in Progress🚥: {speedUpString}")
            time.sleep(1 - (self.velocidad + i * 0.05))

        self.downSpeed(10)

    # Getters and Setters
    def getMarca(self):
        return self.marca

    def setMarca(self, marca):
        self.marca = marca

    def getTipo(self):
        return self.tipo

    def setTipo(self, tipo):
        self.tipo = tipo

    def getCarroseria(self):
        return self.carroseria

    def setCarroseria(self, carroseria):
        self.carroseria = carroseria

    def getVelocidad(self):
        return self.velocidad

    def setVelocidad(self, velocidad):
        self.velocidad = velocidad