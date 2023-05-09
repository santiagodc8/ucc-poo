require_relative 'Avion'

class TipoComercial < Avion
  def initialize
    super
    self.setTipo("Comercial")
  end

  def startingEngine
    puts "⛽Check Fuel ✅"
    3.times do |i|
      print "💥💥Spark💥💥"
      begin
        sleep(1 - (i * 0.2))
      rescue Interrupt
        puts "⛔: KeyboardInterrupt"
      rescue Exception => e
        puts "⛔: #{e}"
      end
    end
    puts "Started the Motor...✈️✈️"
  end

  def stopingEngine
    puts "✈️✈️ Check Engine ✅"
    2.times do |i|
      puts "⛔ Stoping Engine...⛔‼️"
      begin
        sleep(1 - (i * 0.4))
      rescue Interrupt
        puts "⛔: KeyboardInterrupt"
      rescue Exception => e
        puts "⛔: #{e}"
      end
    end
    puts "Stoped...⛔"
  end
end