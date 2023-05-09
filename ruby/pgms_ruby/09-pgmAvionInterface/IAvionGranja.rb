require_relative 'IAvionStandar'

class IAvionGranja
  include IAvionStandar
  
  def irrigation
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end
  
  private :irrigation
end