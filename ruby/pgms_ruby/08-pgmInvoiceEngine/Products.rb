require_relative 'InvoiceEngine'
require_relative 'IProducts'

class Products
  include InvoiceEngine
  include IProducts

  def nombreProducto
    puts "Producto: 📱 Celular"
  end

  def precio
    puts "Precio: 💲200"
  end

  def id
    puts "🆔: 27862"
  end
end