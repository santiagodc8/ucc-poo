class IClient
    def nombre
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
    
    def apellido
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
    
    def tipoTarjeta
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
    
    def numTarjeta
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
    
    private :nombre, :apellido, :tipoTarjeta, :numTarjeta
  end