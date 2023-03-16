package co.edu.campusucc.poo;

public class TipoComercial extends Avion {

    public TipoComercial() {
        super();
        setTipo("Comercial");
    }

    @Override
    public void startingEngine() {
        System.out.println("⛽Check Fuel ✅");
        for (int i = 0; i < 3; i++) {
            System.out.println("💥💥Spark💥💥");
            try {
                Thread.sleep(1000 - (i * 200));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        System.out.println("Started the Motor...✈️✈️");
    }

    @Override
    public void stopingEngine() {
        System.out.println("✈️✈️ Check Engine ✅");
        for (int i = 0; i < 2; i++) {
            System.out.println("⛔ Stoping Engine...⛔‼️");
            try {
                Thread.sleep(1000 - (i * 400));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        System.out.println("Stoped...⛔");
    }

}
