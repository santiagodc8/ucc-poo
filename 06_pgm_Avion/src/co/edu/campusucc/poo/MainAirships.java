package co.edu.campusucc.poo;

public class MainAirships {
    public static void main(String[] args) {

        Avion avion = new TipoComercial();
        avion.setMarca("Boeing");
        avion.setTipo("Comercial");
        System.out.println(avion);

        avion.startingEngine();
        avion.speedUp();
        avion.descent();
        avion.currentSpeed();
        avion.landing();
        avion.stopingEngine();

        avion = new TipoCarga();
        avion.setMarca("Airbus");
        avion.setTipo("Carga");
        System.out.println(avion);

        avion.startingEngine();
        avion.speedUp();
        avion.speedUp();
        avion.currentSpeed();
        avion.descent();
        avion.descent();
        avion.landing();
        avion.stopingEngine();

        avion = new TipoMilitar();
        avion.setMarca("Lockheed Martin");
        avion.setTipo("Aereonave de Combate");
        System.out.println(avion);

        avion.startingEngine();
        avion.speedUp();
        avion.speedUp();
        avion.currentSpeed();
        avion.shootMissiles();
        avion.descent();
        avion.descent();
        avion.landing();
        avion.stopingEngine();

        avion = new TipoAvioneta();
        avion.setMarca("Tecnam P2002 Sierra Mk2");
        avion.setTipo("Avion de Agricultura");
        System.out.println(avion);

        avion.startingEngine();
        avion.speedUp();
        avion.speedUp();
        avion.currentSpeed();
        avion.irrigation();
        avion.descent();
        avion.descent();
        avion.landing();
        avion.stopingEngine();

    }
    
}
