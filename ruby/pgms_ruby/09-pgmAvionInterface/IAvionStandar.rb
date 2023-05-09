require_relative 'IAvionCarga'
require_relative 'IAvionMilitar'
require_relative 'IAvionGranja'

class IAvionStandar
  include IAvionCarga
  include IAvionMilitar
  include IAvionGranja
  
  def startingEngine
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  def stopingEngine
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  def speedUp
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  def currentSpeed
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  def landing
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  def descent
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  def chargeFuel(litros)
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  def setMarca(marca)
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  def setTipo(tipo)
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  private :startingEngine, :stopingEngine, :speedUp, :currentSpeed, :landing, :descent, :chargeFuel, :setMarca, :setTipo
end