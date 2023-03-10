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

    }
    
}
