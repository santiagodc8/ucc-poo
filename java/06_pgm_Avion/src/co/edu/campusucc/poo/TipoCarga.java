package co.edu.campusucc.poo;

public class TipoCarga extends Avion{

    public TipoCarga(){
        super();
        setTipo("Carga");
    }
    @Override
    public void startingEngine() {
        System.out.println("⛽Check Fuel ✅");
        for (int i = 0; i < 3; i++) {
            System.out.println("💥💥Spark💥💥");
            try {
                Thread.sleep(800 - (i * 400));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        System.out.println("Started the Motor...✈️✈️");
    }

    @Override
    public void speedUp() {
        String speedUpString = "speed up in Progress: ";
        for (int i = 0; i < super.getVelocidad(); i++) {
            speedUpString += "✈️";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "✈️";
            System.out.println(speedUpString);
            try {
                Thread.sleep(500 - (i * 50));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        super.addSpeed(10);
    }

    @Override
    public void stopingEngine() {
        System.out.println("✅ Check the Turbine 🆗🆗");
        for (int i = 0; i < 2; i++) {
            System.out.println("⛔ turning off turbine❌❌");
            try {
                Thread.sleep(800 - (i * 400));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        System.out.println("Stoped...⚡⚡");
    }
    
}
