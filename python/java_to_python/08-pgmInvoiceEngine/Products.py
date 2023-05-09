from InvoiceEngine import InvoiceEngine
from IProducts import IProducts

class Products(InvoiceEngine, IProducts):
    def nombreProducto(self):
        print("Producto: 📱 Celular")

    def precio(self):
        print("Precio: 💲200")

    def id(self):
        print("🆔: 27862")