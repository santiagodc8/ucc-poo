package co.edu.campusucc.poo;
public class MainGrandPrix {
    public static void main(String[] args) throws InterruptedException {
        
        final Vehiculo vehiculo = new TipoCombustion();

        vehiculo.setMarca("Dodge");
        vehiculo.setCarroseria("sedan");
        
        vehiculo.startingEngine();
        vehiculo.speedUp();
        vehiculo.speedUp();
        vehiculo.breaking();
        vehiculo.speedUp();
        vehiculo.breaking();
        vehiculo.parking();
        vehiculo.stopingEngine();

    }
    
}
