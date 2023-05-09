require 'date'

class PgmContador
  def initialize
    puts '|----------------------------------|'
    puts '|-------------PGM: printf----------|'
    puts '|---Author:🐍 Santiago Duran 🐍----|'
    puts '|----------------------------------|'
  end
  
  def contar
    begin
      puts "Contando desde el shell a las #{Time.now}"
      (0..19).each do |i|
        puts "Posicion Indice ❇️: #{i}"
        sleep(1 - (i * 0.05))
      end
      puts "Contador Finalizado...🔥🔥🔥🔥🔥"
    rescue => e
      puts "⚠️⚠️⚠️ #{e}"
    end
  end
end

pgm = PgmContador.new
pgm.contar