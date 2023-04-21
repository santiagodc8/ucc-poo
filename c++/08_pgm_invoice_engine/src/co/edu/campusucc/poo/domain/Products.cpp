#include <iostream>
#include "InvoiceEngine.h"
#include "IProducts.h"

class Products : public InvoiceEngine, public IProducts {
public:
    void nombreProducto() override {
        std::cout << "Producto: 📱 Celular" << std::endl;
    }

    void precio() override {
        std::cout << "Precio: 💲200" << std::endl;
    }

    void id() override {
        std::cout << "🆔: 27862" << std::endl;
    }
};
