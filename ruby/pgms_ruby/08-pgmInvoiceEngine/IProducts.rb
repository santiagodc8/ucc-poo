class IProducts
    def nombreProducto
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
  
    def precio
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
  
    private :nombreProducto, :precio
  end