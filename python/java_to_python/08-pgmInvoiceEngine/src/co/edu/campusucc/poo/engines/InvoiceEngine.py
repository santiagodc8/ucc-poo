from abc import ABC, abstractmethod

class InvoiceEngine(ABC):
    def __init__(self):
        self.idFactura = None
        self.empresa = None
        self.ciudad = None
        
    @abstractmethod
    def id(self):
        pass