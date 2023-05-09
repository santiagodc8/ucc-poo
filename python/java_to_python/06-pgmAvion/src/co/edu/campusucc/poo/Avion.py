from abc import ABC, abstractmethod
import time

class Avion(ABC):
    def __init__(self):
        self.marca = None
        self.tipo = None
        self.velocidad = 0

    def __str__(self):
        return "Clase Abstracta--> Avion: " + self.marca + " " + self.tipo + " "

    # Abstract Behavior
    @abstractmethod
    def startingEngine(self):
        pass

    @abstractmethod
    def stopingEngine(self):
        pass

    # Definir comportamiento
    def speedUp(self):
        speedUpString = "SpeedUp in progres: "
        for i in range(self.velocidad):
            speedUpString += "🛫"

        for i in range(10):
            speedUpString += "🛫"
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
        print("Current Speed 🛫: " + str(self.velocidad))

    def landing(self):
        for i in range(5):
            print("🛬🛬 Landing in Progress 🚷🚷")
            time.sleep(1 - (i * 0.05))

    def shootMissiles(self):
        for i in range(5):
            print("🚀🚀 Missiles ready to fire 🔥🔥🔥")
            time.sleep(1 - (i * 0.05))

    def irrigation(self):
        for i in range(5):
            print("🛩️🛩️ irrigation in process 💧💧💧")
            time.sleep(1 - (i * 0.05))

    def descent(self):
        speedUpString = ""
        for i in range(self.velocidad):
            speedUpString += "🛬"

        for i in range(10):
            speedUpString = speedUpString[:-1]
            print("🛬🛬Descent in Progress🛬🛬: " + speedUpString)
            time.sleep(1 - (abs(i) * 0.05))

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

    def getVelocidad(self):
        return self.velocidad

    def setVelocidad(self, velocidad):
        self.velocidad = velocidad