from InvoiceEngine import InvoiceEngine
from Iinvoice import Iinvoice

class Invoice(InvoiceEngine, Iinvoice):
    def tipo(self):
        print("Tipo: Factura Fisica 📃📃")
        
    def total(self):
        print("Total:💲200 ")
        
    def id(self):
        print("🆔: 3672")