require 'time'

class Vehiculo
  def initialize
    @marca = ""
    @tipo = ""
    @carroseria = ""
    @velocidad = 0
  end

  def to_s
    "Abstract Class --> Vehiculo: #{@tipo} #{@carroseria} #{@marca}"
  end

  def startingEngine
    raise NotImplementedError, "Subclass must implement abstract method"
  end

  def stopingEngine
    raise NotImplementedError, "Subclass must implement abstract method"
  end

  def speedUp
    speedUpString = "speed up in Progress: "
    @velocidad.times do
      speedUpString += "⏩"
    end

    10.times do |i|
      speedUpString += "⏩"
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
    puts "Current Speed ⏩: #{@velocidad}"
  end

  def parking
    5.times do |i|
      puts "¡¡🅿️🅿️ Parking in Progress ⚠️⚠️!!"
      sleep(1 - (i * 0.05).abs)
    end
  end

  def breaking
    speedUpString = ""
    @velocidad.times do
      speedUpString += "⏩"
    end

    10.times do |i|
      speedUpString = speedUpString[0..-2]
      puts "¡¡🚥 Braking in Progress🚥: #{speedUpString}"
      sleep((1 - (@velocidad + i * 0.05)).abs)
    end

    downSpeed(10)
  end

  # Getters and Setters
  def getMarca
    @marca
  end

  def setMarca(marca)
    @marca = marca
  end

  def getTipo
    @tipo
  end

  def setTipo(tipo)
    @tipo = tipo
  end

  def getCarroseria
    @carroseria
  end

  def setCarroseria(carroseria)
    @carroseria = carroseria
  end

  def getVelocidad
    @velocidad
  end

  def setVelocidad(velocidad)
    @velocidad = velocidad
  end
end