package co.edu.campusucc.poo;

public class TipoComercial extends Avion {

    public TipoComercial() {
        super();
        setTipo("Comercial");
    }

    @Override
    public void startingEngine() {
        System.out.println("â½Check Fuel â");
        for (int i = 0; i < 3; i++) {
            System.out.println("ð¥ð¥Sparkð¥ð¥");
            try {
                Thread.sleep(1000 - (i * 200));
            } catch (InterruptedException e) {
                System.err.println("â:" + e);
            }
        }
        System.out.println("Started the Motor...âï¸âï¸");
    }

    @Override
    public void stopingEngine() {
        System.out.println("âï¸âï¸ Check Engine â");
        for (int i = 0; i < 2; i++) {
            System.out.println("â Stoping Engine...ââ¼ï¸");
            try {
                Thread.sleep(1000 - (i * 400));
            } catch (InterruptedException e) {
                System.err.println("â:" + e);
            }
        }
        System.out.println("Stoped...â");
    }

}
