from abc import ABC, abstractmethod
from IAvionStandar import IAvionStandar

class IAvionGranja(IAvionStandar, ABC):
    
    @abstractmethod
    def irrigation(self):
        pass