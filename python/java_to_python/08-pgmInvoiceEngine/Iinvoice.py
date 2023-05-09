from abc import ABC, abstractmethod

class Iinvoice(ABC):
    @abstractmethod
    def tipo(self):
        pass
        
    @abstractmethod
    def total(self):
        pass