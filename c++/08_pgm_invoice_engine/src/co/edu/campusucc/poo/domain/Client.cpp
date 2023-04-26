#include <iostream>
#include "InvoiceEngine.h"
#include "IClient.h"

class Client : public InvoiceEngine, public IClient {
public:
void nombre() override {
std::cout << "Nombre: Arnulfo 🇨🇴" << std::endl;
}
void apellido() override {
    std::cout << "Apellido: Diaz 🇨🇴" << std::endl;
}

void tipoTarjeta() override {
    std::cout << "Tipo de Tarjeta: Visa" << std::endl;
}

void numTarjeta() override {
    std::cout << "Numero de Tarjeta: 🔢 4916274826489251" << std::endl;
}

void id() override {
    std::cout << "🆔: 49264862" << std::endl;
}
};