from abc import ABC, abstractmethod
from co.edu.campusucc.poo.interfaces import IAvionCarga, IAvionMilitar, IAvionGranja

class IAvionStandar(IAvionCarga, IAvionMilitar, IAvionGranja, ABC):
    
    @abstractmethod
    def startingEngine(self):
        pass
    
    @abstractmethod
    def stopingEngine(self):
        pass
    
    @abstractmethod
    def speedUp(self):
        pass
    
    @abstractmethod
    def currentSpeed(self):
        pass
    
    @abstractmethod
    def landing(self):
        pass
    
    @abstractmethod
    def descent(self):
        pass
    
    @abstractmethod
    def chargeFuel(self, litros):
        pass
    
    @abstractmethod
    def setMarca(self, marca):
        pass
    
    @abstractmethod
    def setTipo(self, tipo):
        pass