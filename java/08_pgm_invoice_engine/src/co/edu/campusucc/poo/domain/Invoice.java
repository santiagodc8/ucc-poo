package co.edu.campusucc.poo.domain;

import co.edu.campusucc.poo.engines.InvoiceEngine;
import co.edu.campusucc.poo.interfaces.Iinvoice;

public class Invoice extends InvoiceEngine implements Iinvoice {

    @Override
    public void tipo() {
        System.out.println("Tipo: Factura Fisica 📃📃");
    }

    @Override
    public void total() {
        System.out.println("Total:💲200 ");
    }

    @Override
    public void id() {
        System.out.println("🆔: 3672");
    }
    
}
