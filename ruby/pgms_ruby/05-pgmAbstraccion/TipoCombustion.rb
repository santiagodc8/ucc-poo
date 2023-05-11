require_relative 'Vehiculo'
require 'time'

class TipoCombustion < Vehiculo
  def initialize
    super
    setTipo("Combustion")
  end

  def startingEngine
    puts "⛽Check Fuel...✅"
    3.times do |i|
      puts "💥 Spark...💥"
      sleep(1 - (i * 0.2))
    end
    puts "Started...🚘🚘"
  end

  def stopingEngine
    puts "🚗Check Engine ✅"
    2.times do |i|
      puts "⛔ Stoping Engine...⛔‼️"
      sleep(1 - (i * 0.4))
    end
    puts "Stoped...⛔"
  end
end