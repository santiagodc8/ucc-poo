from datetime import date

class Factura:
    def __init__(self):
        self.idFactura = ""
        self.fecha = None
        self.valorTotal = 0.0
        self.cantidadItems = 0
        
    def addItem(self):
        self.cantidadItems += 1
        self.valorTotal = 2000.0 * self.cantidadItems
        print("item #️⃣", self.cantidadItems)
        
    def consultarSaldo(self):
        print(str(self.getValorTotal()))
        
    def setIdFactura(self, idFactura):
        self.idFactura = idFactura
        
    def getIdFactura(self):
        return self.idFactura
        
    def setFecha(self, fecha):
        self.fecha = fecha
        
    def getFecha(self):
        return self.fecha
        
    def setValorTotal(self, valorTotal):
        self.valorTotal = valorTotal
        
    def getValorTotal(self):
        return self.valorTotal
        
    def setCantidadItems(self, cantidadItems):
        self.cantidadItems = cantidadItems
        
    def getCantidadItems(self):
        return self.cantidadItems

if __name__ == "__main__":
    f = Factura()
    f.setFecha(date.today())
    f.setIdFactura("728372")
    f.addItem()
    f.addItem()
    f.addItem()
    f.addItem()
    f.consultarSaldo()
