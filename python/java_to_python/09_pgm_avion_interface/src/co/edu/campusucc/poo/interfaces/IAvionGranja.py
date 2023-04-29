from abc import ABC, abstractmethod
from co.edu.campusucc.poo.interfaces import IAvionStandar

class IAvionGranja(IAvionStandar, ABC):
    
    @abstractmethod
    def irrigation(self):
        pass