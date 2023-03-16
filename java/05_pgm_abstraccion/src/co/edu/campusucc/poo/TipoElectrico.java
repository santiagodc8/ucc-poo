package co.edu.campusucc.poo;

public class TipoElectrico extends Vehiculo {
    public TipoElectrico() {
        super();
        setTipo("Electrico");
    }

    @Override
    public void startingEngine() {
        System.out.println("🔌 Check Electric System...🔌✅");
        for (int i = 0; i < 2; i++) {
            System.out.println("¡¡🔋 Init... 🔋!!");
            try {
                Thread.sleep(500 - (i * 250));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        System.out.println("Started...🚙💡");
    }

    @Override
    public void stopingEngine() {
        System.out.println("✅ Check Electric Circuit 🔋");
        for (int i = 0; i < 2; i++) {
            System.out.println("¡¡⛔ Cutting Electric Circuit...⚡!!");
            try {
                Thread.sleep(800 - (i * 400));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        System.out.println("Stoped...⚡⚡");
    }

    @Override
    public void speedUp() {
        String speedUpString = "speed up in Progress: ";
        for (int i = 0; i < super.getVelocidad(); i++) {
            speedUpString += "⏩";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "⏩";
            System.out.println(speedUpString);
            try {
                Thread.sleep(500 - (i * 50));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        super.addSpeed(10);
    }

}
