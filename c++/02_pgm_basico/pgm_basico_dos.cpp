#include <iostream>
#include <ctime>

class Factura {
private:
    std::string idFactura;
    std::time_t fecha;
    double valorTotal;
    int cantidadItems;

public:
    Factura() : valorTotal(0.0), cantidadItems(0) {}

    void addItem() {
        cantidadItems++;
        valorTotal = 2000.0 * cantidadItems;
        std::cout << "item # ✅" << cantidadItems << std::endl;
    }

    void consultarSaldo() {
        std::cout << valorTotal << std::endl;
    }

    void setIdFactura(std::string idFactura) {
        this->idFactura = idFactura;
    }

    std::string getIdFactura() {
        return idFactura;
    }

    void setFecha(std::time_t fecha) {
        this->fecha = fecha;
    }

    std::time_t getFecha() {
        return fecha;
    }

    void setValorTotal(double valorTotal) {
        this->valorTotal = valorTotal;
    }

    double getValorTotal() {
        return valorTotal;
    }

    void setCantidadItems(int cantidadItems) {
        this->cantidadItems = cantidadItems;
    }

    int getCantidadItems() {
        return cantidadItems;
    }
};

int main() {

    std::cout << "+-----------------------------------------+\n";
	std::cout << "| pgm_basico_dos.cpp                          |\n";
	std::cout << "| Language: C++                           |\n";
	std::cout << "| Autor:👉🏽 Santiago Duran               |\n";
	std::cout << "+-----------------------------------------+\n";
	std::cout << "";

    Factura f;
    f.setFecha(std::time(nullptr));
    f.setIdFactura("728372");
    f.addItem();
    f.addItem();
    f.addItem();
    f.addItem();
    f.consultarSaldo();

    return 0;

    
}
