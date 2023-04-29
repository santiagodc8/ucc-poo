from Vehiculo import Vehiculo
from TipoCombustion import TipoCombustion
from TipoElectrico import TipoElectrico


def main():
    vehiculo = TipoCombustion()
    vehiculo.setMarca("Toyota")
    vehiculo.setCarroseria("Truck")
    print(vehiculo)

    vehiculo.startingEngine()

    vehiculo.speedUp()
    vehiculo.breaking()
    vehiculo.currentSpeed()
    vehiculo.parking()
    vehiculo.stopingEngine()

    vehiculo = TipoElectrico()
    vehiculo.setMarca("Tesla")
    vehiculo.setCarroseria("Sedan")
    print(vehiculo)

    vehiculo.startingEngine()
    vehiculo.speedUp()
    vehiculo.speedUp()
    vehiculo.currentSpeed()
    vehiculo.breaking()
    vehiculo.speedUp()
    vehiculo.breaking()
    vehiculo.currentSpeed()
    vehiculo.parking()
    vehiculo.stopingEngine()


if __name__ == '__main__':
    main()