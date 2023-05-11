class IAvionCarga
    def openDoors
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
    
    def closeDoors
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
    
    def pickUp
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
    
    private :openDoors, :closeDoors, :pickUp
  end