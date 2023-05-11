require_relative 'Vehiculo'
require_relative 'TipoCombustion'
require_relative 'TipoElectrico'

def main
  vehiculo = TipoCombustion.new
  vehiculo.setMarca("Toyota")
  vehiculo.setCarroseria("Truck")
  puts vehiculo

  vehiculo.startingEngine

  vehiculo.speedUp
  vehiculo.breaking
  vehiculo.currentSpeed
  vehiculo.parking
  vehiculo.stopingEngine

  vehiculo = TipoElectrico.new
  vehiculo.setMarca("Tesla")
  vehiculo.setCarroseria("Sedan")
  puts vehiculo

  vehiculo.startingEngine
  vehiculo.speedUp
  vehiculo.speedUp
  vehiculo.currentSpeed
  vehiculo.breaking
  vehiculo.speedUp
  vehiculo.breaking
  vehiculo.currentSpeed
  vehiculo.parking
  vehiculo.stopingEngine
end

if __FILE__ == $0
  main
end