#include <iostream>
#include "InvoiceEngine.h"
#include "Iinvoice.h"

using namespace std;

class Invoice : public InvoiceEngine, public Iinvoice {
public:
    void tipo() {
        cout << "Tipo: Factura Fisica 📃📃" << endl;
    }

    void total() {
        cout << "Total:💲200 " << endl;
    }

    void id() {
        cout << "🆔: 3672" << endl;
    }
};
