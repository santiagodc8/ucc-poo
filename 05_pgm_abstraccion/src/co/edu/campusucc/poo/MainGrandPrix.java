package co.edu.campusucc.poo;

public class MainGrandPrix {
    public static void main(String[] args) throws InterruptedException {
        Vehiculo vehiculo = new TipoCombustion();
        vehiculo.setMarca("Toyota");
        vehiculo.setCarroseria("Truck");
        System.out.println(vehiculo);

        vehiculo.startingEngine();

        vehiculo.speedUp();
        vehiculo.breaking();
        vehiculo.currentSpeed();
        vehiculo.parking();
        vehiculo.stopingEngine();

        vehiculo = new TipoElectrico();
        vehiculo.setMarca("Tesla");
        vehiculo.setCarroseria("Sedan");
        System.out.println(vehiculo);

        vehiculo.startingEngine();
        vehiculo.speedUp();
        vehiculo.speedUp();
        vehiculo.currentSpeed();
        vehiculo.breaking();
        vehiculo.speedUp();
        vehiculo.breaking();
        vehiculo.currentSpeed();
        vehiculo.parking();
        vehiculo.stopingEngine();
    }
}
