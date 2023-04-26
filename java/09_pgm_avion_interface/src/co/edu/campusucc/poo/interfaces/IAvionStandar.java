package co.edu.campusucc.poo.interfaces;

public interface IAvionStandar extends IAvionCarga, IAvionMilitar, IAvionGranja {

    void startingEngine();
    void stopingEngine();

    void speedUp();
    void currentSpeed();
    void landing();
    void descent();
    void chargeFuel(int litros);
    
    void setMarca(String marca);
    void setTipo(String tipo);

}