package co.edu.campusucc.poo.app;

import co.edu.campusucc.poo.domain.Client;
import co.edu.campusucc.poo.domain.Invoice;
import co.edu.campusucc.poo.domain.Products;

public class MainInvoiceEngine {
    public static void main(String[] args) {
        
        Client clie = new Client();
        Products prod = new Products();
        Invoice invo = new Invoice();

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
    }
}