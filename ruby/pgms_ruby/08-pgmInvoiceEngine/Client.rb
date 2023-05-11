require_relative 'InvoiceEngine'
require_relative 'IClient'

class Client
  include InvoiceEngine
  include IClient

  def nombre
    puts "Nombre: Arnulfo 🇨🇴"
  end

  def apellido
    puts "Apellido: Diaz 🇨🇴"
  end

  def tipoTarjeta
    puts "Tipo de Tarjeta: Visa"
  end

  def numTarjeta
    puts "Numero de Tarjeta: 🔢 4916274826489251"
  end

  def id
    puts "🆔: 49264862"
  end
end