#include <iostream>
#include "Vehiculo"
#include "TipoCombustion"
#include "TipoElectrico"

using namespace std;

int main() {
Vehiculo* vehiculo = new TipoCombustion();
vehiculo->setMarca("Toyota");
vehiculo->setCarroseria("Truck");
cout << vehiculo->toString() << endl;

vehiculo->startingEngine();

vehiculo->speedUp();
vehiculo->breaking();
vehiculo->currentSpeed();
vehiculo->parking();
vehiculo->stopingEngine();

vehiculo = new TipoElectrico();
vehiculo->setMarca("Tesla");
vehiculo->setCarroseria("Sedan");
cout << vehiculo->toString() << endl;

vehiculo->startingEngine();
vehiculo->speedUp();
vehiculo->speedUp();
vehiculo->currentSpeed();
vehiculo->breaking();
vehiculo->speedUp();
vehiculo->breaking();
vehiculo->currentSpeed();
vehiculo->parking();
vehiculo->stopingEngine();

delete vehiculo;
return 0;
