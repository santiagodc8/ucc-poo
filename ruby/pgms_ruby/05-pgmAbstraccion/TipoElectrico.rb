require_relative 'Vehiculo'
require 'time'

class TipoElectrico < Vehiculo
  def initialize
    super
    setTipo("Electrico")
  end

  def startingEngine
    puts "🔌 Check Electric System...🔌✅"
    2.times do |i|
      puts "¡¡🔋 Init... 🔋!!"
      sleep(0.5 - (i * 0.25))
    end
    puts "Started...🚙💡"
  end

  def stopingEngine
    puts "✅ Check Electric Circuit 🔋"
    2.times do |i|
      puts "¡¡⛔ Cutting Electric Circuit...⚡!!"
      sleep(0.8 - (i * 0.4))
    end
    puts "Stoped...⚡⚡"
  end

  def speedUp
    speedUpString = "speed up in Progress: "
    super.getVelocidad.times do
      speedUpString += "⏩"
    end

    10.times do |i|
      speedUpString += "⏩"
      puts speedUpString
      sleep(0.5 - (i * 0.05))
    end
    super.addSpeed(10)
  end
end