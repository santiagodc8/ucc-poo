from abc import ABC, abstractmethod
from IAvionCarga import IAvionCarga 
from IAvionMilitar import IAvionMilitar
from IAvionGranja import IAvionGranja

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