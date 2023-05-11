require_relative 'InvoiceEngine'
require_relative 'Iinvoice'

class Invoice
  include InvoiceEngine
  include Iinvoice

  def tipo
    puts "Tipo: Factura Fisica 📃📃"
  end

  def total
    puts "Total:💲200"
  end

  def id
    puts "🆔: 3672"
  end
end