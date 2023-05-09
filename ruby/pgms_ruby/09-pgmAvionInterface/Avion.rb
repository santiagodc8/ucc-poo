require_relative 'IAvionStandar'
require 'time'

class Avion
  include IAvionStandar
  attr_accessor :marca, :tipo, :velocidad

  def initialize
    @marca = nil
    @tipo = nil
    @velocidad = 0
  end

  def to_s
    "Clase Abstracta--> Avion: #{@marca} #{@tipo}"
  end

  # Abstract Behavior
  def startingEngine
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end

  def stopingEngine
    raise NotImplementedError, "#{self.class} no ha implementado el método '#{__method__}'"
  end

  # Definir comportamiento
  def speedUp
    speedUpString = "SpeedUp in progres: "

    @velocidad.times do
      speedUpString += "🛫"
    end

    10.times do |i|
      speedUpString += "🛫"
      puts speedUpString

      begin
        sleep(1 - (i * 0.05))
      rescue Exception => e
        puts "⛔:#{e.message}"
      end
    end

    addSpeed(10)
  end

  def addSpeed(velocidad)
    @velocidad += velocidad
    @velocidad
  end

  def downSpeed(velocidad)
    @velocidad -= velocidad
    @velocidad
  end

  def currentSpeed
    puts "Current Speed 🛫: #{@velocidad}"
  end

  def landing
    5.times do
      puts "🛬🛬 Landing in Progress 🚷🚷"

      begin
        sleep(1)
      rescue Exception => e
        puts "⛔:#{e.message}"
      end
    end
  end

  def descent
    speedUpString = ""

    @velocidad.times do
      speedUpString += "🛬"
    end

    10.times do |i|
      speedUpString = speedUpString[0...-1]
      puts "🛬🛬Descent in Progress🛬🛬: #{speedUpString}"

      begin
        sleep(1 - (@velocidad + i * 0.05))
      rescue Exception => e
        puts "⛔:#{e.message}"
      end
    end

    downSpeed(10)
  end

  # Getters and Setters
  def chargeFuel(litros)
    puts "⛽ Charging Fuel: #{litros} 💧💧💧"
  end
end