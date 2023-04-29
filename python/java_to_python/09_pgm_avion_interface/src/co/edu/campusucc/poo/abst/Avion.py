from abc import ABC, abstractmethod
import time
from src.co.edu.campusucc.poo.interfaces import IAvionStandar


class Avion(ABC, IAvionStandar):
    def __init__(self):
        self.marca = None
        self.tipo = None
        self.velocidad = 0

    def __str__(self):
        return f"Clase Abstracta--> Avion: {self.marca} {self.tipo} "

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

            try:
                time.sleep(1 - (i * 50))
            except Exception as e:
                print(f"⛔:{e}")

        self.addSpeed(10)

    def addSpeed(self, velocidad):
        self.velocidad += velocidad
        return self.velocidad

    def downSpeed(self, velocidad):
        self.velocidad -= velocidad
        return self.velocidad

    def currentSpeed(self):
        print(f"Current Speed 🛫: {self.velocidad}")

    def landing(self):
        for i in range(5):
            print("🛬🛬 Landing in Progress 🚷🚷")

            try:
                time.sleep(1 - (i * 50))
            except Exception as e:
                print(f"⛔:{e}")

    def descent(self):
        speedUpString = ""

        for i in range(self.velocidad):
            speedUpString += "🛬"

        for i in range(10):
            speedUpString = speedUpString[:-1]
            print(f"🛬🛬Descent in Progress🛬🛬: {speedUpString}")

            try:
                time.sleep(1 - (self.velocidad + i * 50))
            except Exception as e:
                print(f"⛔:{e}")

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

    def chargeFuel(self, litros):
        print(f"⛽ Charging Fuel: {litros} 💧💧💧")