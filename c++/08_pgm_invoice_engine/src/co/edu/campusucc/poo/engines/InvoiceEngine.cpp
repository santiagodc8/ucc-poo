#include <iostream>

using namespace std;

class InvoiceEngine {
protected:
int idFactura;
string empresa;
string ciudad;

public:
virtual void id() = 0;
};