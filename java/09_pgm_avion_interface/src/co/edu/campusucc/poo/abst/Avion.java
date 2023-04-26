package co.edu.campusucc.poo.abst;

import co.edu.campusucc.poo.interfaces.IAvionStandar;

public abstract class Avion implements IAvionStandar {
    public Avion() {
    }

    // propiedades
    private String marca;
    private String tipo;
    private int velocidad;

    public String toString() {
        return "Clase Abstracta--> Avion: " + getMarca() + " " + getTipo() + " ";
    }

    // Abstract Behavior
    @Override
    public abstract void startingEngine();

    @Override
    public abstract void stopingEngine();

    // Definir comportamiento
    @Override
    public void speedUp() {
        String speedUpString = "SpeedUp in progres: ";
        for (int i = 0; i < velocidad; i++) {
            speedUpString += "🛫";
        }

        for (int i = 0; i < 10; i++) {
            speedUpString += "🛫";
            System.out.println(speedUpString);
            try {
                Thread.sleep(1000 - (i * 50));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        addSpeed(10);

    }

    protected int addSpeed(int velocidad) {
        setVelocidad(this.velocidad + velocidad);
        return getVelocidad();
    }

    private int downSpeed(int velocidad) {
        setVelocidad(this.velocidad - velocidad);
        return getVelocidad();
    }

    @Override
    public void currentSpeed() {
        System.out.println("Current Speed 🛫: " + getVelocidad());
    }

    @Override
    public void landing() {
        for (int i = 0; i < 5; i++) {
            System.out.println("🛬🛬 Landing in Progress 🚷🚷");
            try {
                Thread.sleep(1000 - (i * 50));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }

    }

    @Override
    public void descent(){
        String speedUpString = "";
        for (int i = 0; i < velocidad; i++) {
            speedUpString += "🛬";
        }
        for (int i = 0; i < 10; i++) {
            speedUpString = speedUpString.substring(0, speedUpString.length() - 1);
            System.out.println("🛬🛬Descent in Progress🛬🛬: " + speedUpString);
            try {
                Thread.sleep(1000 - (velocidad + i * 50));
            } catch (InterruptedException e) {
                System.err.println("⛔:" + e);
            }
        }
        downSpeed(10);
    }

    // Getters and Setters
    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
    public int getVelocidad() {
        return velocidad;
    }

    public void setVelocidad(int velocidad) {
        this.velocidad = velocidad;
    }

    @Override
    public void chargeFuel(int litros) {
        System.out.println("⛽ Charging Fuel: "+litros+" 💧💧💧");
    }


}