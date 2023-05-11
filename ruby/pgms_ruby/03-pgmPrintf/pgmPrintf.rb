require 'date'

class PgmPrintf
  def main
    puts '|----------------------------------|'
    puts '|-------------PGM: printf----------|'
    puts '|---Author:🐍 Santiago Duran 🐍----|'
    puts '|----------------------------------|'
    
    begin
      puts "Imprimiendo desde el shell a las #{Time.now}⌚"
      sleep(3)
      puts "📖📖📖📖📖📖📖📖📖"
      sleep(1)
      puts "🖨️ 🖨️ 🖨️   Impresion finalizada 🖨️ 🖨️ 🖨️"
    rescue => e
      puts "⚠️⚠️⚠️#{e}"
    end
  end
end

PgmPrintf.new.main