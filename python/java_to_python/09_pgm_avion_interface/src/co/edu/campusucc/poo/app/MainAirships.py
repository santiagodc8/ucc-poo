from src.co.edu.campusucc.poo.implement import TipoAvioneta, TipoCarga, TipoComercial, TipoMilitar
from src.co.edu.campusucc.poo.interfaces import IAvionStandar

if __name__ == "__main__":
    
    avion = TipoComercial()
    avion.setMarca("Boeing")
    avion.setTipo("Comercial")
    print(avion)

    avion.startingEngine()
    avion.speedUp()
    avion.descent()
    avion.currentSpeed()
    avion.landing()
    avion.stopingEngine()

    avion = TipoCarga()
    avion.setMarca("Airbus")
    avion.setTipo("Carga")
    print(avion)

    avion.startingEngine()
    avion.speedUp()
    avion.speedUp()
    avion.currentSpeed()
    avion.descent()
    avion.descent()
    avion.landing()
    avion.stopingEngine()

    avion = TipoMilitar()
    avion.setMarca("Lockheed Martin")
    avion.setTipo("Aereonave de Combate")
    print(avion)

    avion.startingEngine()
    avion.speedUp()
    avion.speedUp()
    avion.currentSpeed()
    avion.shootMissiles()
    avion.descent()
    avion.descent()
    avion.landing()
    avion.stopingEngine()

    avion = TipoAvioneta()
    avion.setMarca("Tecnam P2002 Sierra Mk2")
    avion.setTipo("Avion de Agricultura")
    print(avion)

    avion.startingEngine()
    avion.speedUp()
    avion.speedUp()
    avion.currentSpeed()
    avion.irrigation()
    avion.descent()
    avion.descent()
    avion.landing()
    avion.stopingEngine()