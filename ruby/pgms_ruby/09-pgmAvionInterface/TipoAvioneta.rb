require_relative 'Avion'
require_relative 'IAvionGranja'

class TipoAvioneta < Avion
  include IAvionGranja
  
  def initialize
    super
    self.setTipo("Avioneta de Riego")
  end

  def startingEngine
    puts "⛽Check Fuel ✅"
    3.times do |i|
      print "💥💥Spark💥💥"
      begin
        sleep(0.8 - (i * 0.4))
      rescue Interrupt
        puts "⛔: KeyboardInterrupt"
      rescue Exception => e
        puts "⛔: #{e}"
      end
    end
    puts "Started the Motor...🛩️🛩️"
  end

  def speedUp
    speedUpString = "speed up in Progress: "
    super.getVelocidad.times do
      speedUpString += "🛩️"
    end

    10.times do |i|
      speedUpString += "🛩️"
      puts speedUpString
      begin
        sleep(0.5 - (i * 0.05))
      rescue Interrupt
        puts "⛔: KeyboardInterrupt"
      rescue Exception => e
        puts "⛔: #{e}"
      end
    end
    super.addSpeed(10)
  end

  def stopingEngine
    puts "✅ Check the Turbine 🆗🆗"
    2.times do |i|
      puts "⛔ turning off turbine❌❌"
      begin
        sleep(0.8 - (i * 0.4))
      rescue Interrupt
        puts "⛔: KeyboardInterrupt"
      rescue Exception => e
        puts "⛔: #{e}"
      end
    end
    puts "Stoped...⚡⚡"
  end

  def irrigation
    5.times do |i|
      puts "🛩️🛩️ irrigation in process 💧💧💧"
      begin
        sleep(1 - (i * 0.05))
      rescue Interrupt
        puts "⛔: KeyboardInterrupt"
      rescue Exception => e
        puts "⛔: #{e}"
      end
    end
  end

  def chargeFuel(litros)
    super.chargeFuel(litros)
    puts ""
    litros.times do
      begin
        print "⛽"
        sleep(0.1)
      rescue Interrupt
        puts "⛔: KeyboardInterrupt"
      rescue Exception => e
        puts "⛔: #{e}"
      end
    end
    puts ""
    puts "⛽ Full Fuel ✅"
  end
end