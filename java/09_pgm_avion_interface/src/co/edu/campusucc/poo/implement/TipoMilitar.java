package co.edu.campusucc.poo.implement;

import co.edu.campusucc.poo.abst.Avion;
import co.edu.campusucc.poo.interfaces.IAvionMilitar;

public class TipoMilitar extends Avion implements IAvionMilitar {

    public TipoMilitar(){
        super();
        setTipo("Militar");
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

    public void shootMissiles(){
        for (int i = 0; i < 5; i++) {
            System.out.println("🚀🚀 Missiles ready to fire 🔥🔥🔥");
            try {
                Thread.sleep(1000 - (i * 50));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
    }

    @Override
    public void chargeFuel(int litros) {
        super.chargeFuel(litros);
        System.out.println("");
        for (int i = 0; i < litros; i++) {
            try {
                System.out.print("⛽");
                Thread.sleep(100);
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        System.out.println("");
        System.out.println("⛽ Full Fuel ✅");
    }
}
