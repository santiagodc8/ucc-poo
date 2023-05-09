require_relative 'Avion'
require 'time'

class TipoAvioneta < Avion
  def initialize
    super
    setTipo("Avioneta de Riego")
  end

  def startingEngine
    puts("⛽Check Fuel ✅")
    3.times do |i|
      puts("💥💥Spark💥💥")
      sleep(0.8 - (i * 0.4))
    end
    puts("Started the Motor...🛩️🛩️")
  end

  def speedUp
    speedUpString = "speed up in Progress: "
    getVelocidad.times do
      speedUpString += "🛩️"
    end

    10.times do |i|
      speedUpString += "🛩️"
      puts(speedUpString)
      sleep(0.5 - (i * 0.05))
    end
    super().addSpeed(10)
  end

  def stopingEngine
    puts("✅ Check the Turbine 🆗🆗")
    2.times do |i|
      puts("⛔ turning off turbine❌❌")
      sleep(0.8 - (i * 0.4))
    end
    puts("Stoped...⚡⚡")
  end
end