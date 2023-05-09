class Iinvoice
    def tipo
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
  
    def total
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
  
    private :tipo, :total
  end