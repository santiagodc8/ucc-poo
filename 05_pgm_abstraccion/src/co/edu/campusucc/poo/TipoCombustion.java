package co.edu.campusucc.poo;

public class TipoCombustion extends Vehiculo {

    public TipoCombustion() {
        super();
        setTipo("Combustion");
    }

    @Override
    public void startingEngine() {
        System.out.println("β½Check Fuel...β");
        for (int i = 0; i < 3; i++) {
            System.out.println("π₯ Spark...π₯");
            try {
                Thread.sleep(1000 - (i * 200));
            } catch (InterruptedException e) {
                System.err.println("π:" + e);
            }
        }
        System.out.println("Started...ππ");
    }

    @Override
    public void stopingEngine() {
        System.out.println("πCheck Engine β");
        for (int i = 0; i < 2; i++) {
            System.out.println("β Stoping Engine...ββΌοΈ");
            try {
                Thread.sleep(1000 - (i * 400));
            } catch (InterruptedException e) {
                System.err.println("β:" + e);
            }
        }
        System.out.println("Stoped...β");
    }
}
