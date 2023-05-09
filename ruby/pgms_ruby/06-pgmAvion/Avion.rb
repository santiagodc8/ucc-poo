require 'time'

class Avion
  def initialize
    @marca = nil
    @tipo = nil
    @velocidad = 0
  end

  def to_s
    "Clase Abstracta--> Avion: #{@marca} #{@tipo} "
  end

  # Abstract Behavior
  def startingEngine
    raise NotImplementedError, "Subclass must implement abstract method"
  end

  def stopingEngine
    raise NotImplementedError, "Subclass must implement abstract method"
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
      sleep(1 - (i * 0.05))
    end

    addSpeed(10)
  end

  def addSpeed(velocidad)
    @velocidad += velocidad
    return @velocidad
  end

  def downSpeed(velocidad)
    @velocidad -= velocidad
    return @velocidad
  end

  def currentSpeed
    puts "Current Speed 🛫: #{@velocidad}"
  end

  def landing
     5.times do |i|
      puts "🛬🛬 Landing in Progress 🚷🚷"
      sleep(1 - (i * 0.05))
    end
  end

  def shootMissiles
    5.times do |i|
      puts "🚀🚀 Missiles ready to fire 🔥🔥🔥"
      sleep(1 - (i * 0.05))
    end
  end

  def irrigation
    5.times do |i|
      puts "🛩️🛩️ irrigation in process 💧💧💧"
      sleep(1 - (i * 0.05))
    end
  end

  def descent
    speedUpString = ""
    @velocidad.times do
      speedUpString += "🛬"
    end

    10.times do |i|
      speedUpString = speedUpString[0..-2]
      puts "🛬🛬Descent in Progress🛬🛬: " + speedUpString
      sleep(1 - (@velocidad + i * 0.05))
    end

    downSpeed(10)
  end

  # Getters and Setters
  def getMarca
    return @marca
  end

  def setMarca(marca)
    @marca = marca
  end

  def getTipo
    return @tipo
  end

  def setTipo(tipo)
    @tipo = tipo
  end

  def getVelocidad
    return @velocidad
  end

  def setVelocidad(velocidad)
    @velocidad = velocidad
  end
end