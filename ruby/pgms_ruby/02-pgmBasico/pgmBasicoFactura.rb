require 'date'

class Factura
  def initialize
    @idFactura = ""
    @fecha = nil
    @valorTotal = 0.0
    @cantidadItems = 0
  end
  
  def addItem
    @cantidadItems += 1
    @valorTotal = 2000.0 * @cantidadItems
    puts "item #️⃣ #{@cantidadItems}"
  end
  
  def consultarSaldo
    puts "#{getValorTotal}"
  end
  
  def setIdFactura(idFactura)
    @idFactura = idFactura
  end
  
  def getIdFactura
    @idFactura
  end
  
  def setFecha(fecha)
    @fecha = fecha
  end
  
  def getFecha
    @fecha
  end
  
  def setValorTotal(valorTotal)
    @valorTotal = valorTotal
  end
  
  def getValorTotal
    @valorTotal
  end
  
  def setCantidadItems(cantidadItems)
    @cantidadItems = cantidadItems
  end
  
  def getCantidadItems
    @cantidadItems
  end
end

if __FILE__ == $0
  f = Factura.new
  f.setFecha(Date.today)
  f.setIdFactura("728372")
  f.addItem
  f.addItem
  f.addItem
  f.addItem
  f.consultarSaldo
end