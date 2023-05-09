from abc import ABC, abstractmethod

class IClient(ABC):
    @abstractmethod
    def nombre(self):
        pass
        
    @abstractmethod
    def apellido(self):
        pass
        
    @abstractmethod
    def tipoTarjeta(self):
        pass
        
    @abstractmethod
    def numTarjeta(self):
        pass