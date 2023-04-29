from abc import ABC, abstractmethod

class IAvionMilitar(ABC):
    
    @abstractmethod
    def shootMissiles(self):
        pass