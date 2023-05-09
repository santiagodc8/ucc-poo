from Client import Client
from Invoice import Invoice
from Products import Products
def main():
    clie = Client()
    prod = Products()
    invo = Invoice()

    clie.nombre()
    clie.apellido()
    clie.id()
    prod.nombreProducto()
    prod.id()
    prod.precio()
    invo.tipo()
    invo.id()
    clie.tipoTarjeta()
    clie.numTarjeta()
    invo.total()

if __name__ == "__main__":
    main()