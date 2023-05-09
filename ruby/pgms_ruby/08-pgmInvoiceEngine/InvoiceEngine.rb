class InvoiceEngine
    attr_accessor :idFactura, :empresa, :ciudad
  
    def initialize
      @idFactura = nil
      @empresa = nil
      @ciudad = nil
    end
  
    def id
      raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
    end
  
    private :id
  end