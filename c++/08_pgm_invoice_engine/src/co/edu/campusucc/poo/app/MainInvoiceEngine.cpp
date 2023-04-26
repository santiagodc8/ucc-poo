#include <iostream>
#include "Client.h"
#include "Products.h"
#include "Invoice.h"

using namespace std;

int main() {
    Client clie;
    Products prod;
    Invoice invo;

    clie.nombre();
    clie.apellido();
    clie.id();
    prod.nombreProducto();
    prod.id();
    prod.precio();
    invo.tipo();
    invo.id();
    clie.tipoTarjeta();
    clie.numTarjeta();
    invo.total();

    return 0;
}
