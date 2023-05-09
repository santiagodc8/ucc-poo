class IAvionMilitar
    def shootMissiles
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
    
    private :shootMissiles
  end