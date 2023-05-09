require_relative 'Avion'
require 'time'

class TipoComercial < Avion
  def initialize
    super
    setTipo("Comercial")
  end

  def startingEngine
    puts("⛽Check Fuel ✅")
    3.times do |i|
      puts("💥💥Spark💥💥")
      sleep(1 - (i * 0.2))
    end
    puts("Started the Motor...✈️✈️")
  end

  def stopingEngine
    puts("✈️✈️ Check Engine ✅")
    2.times do |i|
      puts("⛔ Stoping Engine...⛔‼️")
      sleep(1 - (i * 0.4))
    end
    puts("Stoped...⛔")
  end
end