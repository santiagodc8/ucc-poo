require_relative 'Client'
require_relative 'Invoice'
require_relative 'Products'

def main
    clie = Client.new
    prod = Products.new
    invo = Invoice.new

    clie.nombre
    clie.apellido
    clie.id
    prod.nombreProducto
    prod.id
    prod.precio
    invo.tipo
    invo.id
    clie.tipoTarjeta
    clie.numTarjeta
    invo.total
end

if __FILE__ == $0
    main
end