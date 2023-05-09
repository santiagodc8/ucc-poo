require 'TipoAvioneta'
require 'TipoCarga'
require 'TipoComercial'
require 'TipoMilitar'
require 'IAvionStandar'

if __FILE__ == $0
  avion = TipoComercial.new
  avion.setMarca("Boeing")
  avion.setTipo("Comercial")
  puts avion

  avion.startingEngine
  avion.speedUp
  avion.descent
  avion.currentSpeed
  avion.landing
  avion.stopingEngine

  avion = TipoCarga.new
  avion.setMarca("Airbus")
  avion.setTipo("Carga")
  puts avion

  avion.startingEngine
  avion.speedUp
  avion.speedUp
  avion.currentSpeed
  avion.descent
  avion.descent
  avion.landing
  avion.stopingEngine

  avion = TipoMilitar.new
  avion.setMarca("Lockheed Martin")
  avion.setTipo("Aereonave de Combate")
  puts avion

  avion.startingEngine
  avion.speedUp
  avion.speedUp
  avion.currentSpeed
  avion.shootMissiles
  avion.descent
  avion.descent
  avion.landing
  avion.stopingEngine

  avion = TipoAvioneta.new
  avion.setMarca("Tecnam P2002 Sierra Mk2")
  avion.setTipo("Avion de Agricultura")
  puts avion

  avion.startingEngine
  avion.speedUp
  avion.speedUp
  avion.currentSpeed
  avion.irrigation
  avion.descent
  avion.descent
  avion.landing
  avion.stopingEngine
end