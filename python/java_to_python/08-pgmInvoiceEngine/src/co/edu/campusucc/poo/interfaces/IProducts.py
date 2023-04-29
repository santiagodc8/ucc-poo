from abc import ABC, abstractmethod

class IProducts(ABC):
    @abstractmethod
    def nombreProducto(self):
        pass
        
    @abstractmethod
    def precio(self):
        pass