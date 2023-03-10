package co.edu.campusucc.poo;

public class TipoAvioneta extends Avion {
    public TipoAvioneta(){
        super();
        setTipo("Avioneta de Riego");
    }

    @Override
    public void startingEngine() {
        System.out.println("â½Check Fuel â");
        for (int i = 0; i < 3; i++) {
            System.out.println("ð¥ð¥Sparkð¥ð¥");
            try {
                Thread.sleep(800 - (i * 400));
            } catch (InterruptedException e) {
                System.err.println("â:" + e);
            }
        }
        System.out.println("Started the Motor...ð©ï¸ð©ï¸");
    }

    @Override
    public void speedUp() {
        String speedUpString = "speed up in Progress: ";
        for (int i = 0; i < super.getVelocidad(); i++) {
            speedUpString += "ð©ï¸";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "ð©ï¸";
            System.out.println(speedUpString);
            try {
                Thread.sleep(500 - (i * 50));
            } catch (InterruptedException e) {
                System.err.println("â:" + e);
            }
        }
        super.addSpeed(10);
    }
    
    @Override
    public void stopingEngine() {
        System.out.println("â Check the Turbine ðð");
        for (int i = 0; i < 2; i++) {
            System.out.println("â turning off turbineââ");
            try {
                Thread.sleep(800 - (i * 400));
            } catch (InterruptedException e) {
                System.err.println("â:" + e);
            }
        }
        System.out.println("Stoped...â¡â¡");
    }
}
