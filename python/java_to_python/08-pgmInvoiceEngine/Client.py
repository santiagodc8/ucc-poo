from InvoiceEngine import InvoiceEngine
from IClient import IClient

class Client(InvoiceEngine, IClient):
    def nombre(self):
        print("Nombre: Arnulfo 🇨🇴")
        
    def apellido(self):
        print("Apellido: Diaz 🇨🇴")
        
    def tipoTarjeta(self):
        print("Tipo de Tarjeta: Visa")
        
    def numTarjeta(self):
        print("Numero de Tarjeta: 🔢 4916274826489251")
        
    def id(self):
        print("🆔: 49264862")