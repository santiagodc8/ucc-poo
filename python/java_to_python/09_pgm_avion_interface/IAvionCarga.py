from abc import ABC, abstractmethod

class IAvionCarga(ABC):
    
    @abstractmethod
    def openDoors(self):
        pass
    
    @abstractmethod
    def closeDoors(self):
        pass
    
    @abstractmethod
    def pickUp(self):
        pass