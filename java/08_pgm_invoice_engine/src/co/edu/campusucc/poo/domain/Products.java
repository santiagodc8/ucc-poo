package co.edu.campusucc.poo.domain;

import co.edu.campusucc.poo.engines.InvoiceEngine;
import co.edu.campusucc.poo.interfaces.IProducts;

public class Products extends InvoiceEngine implements IProducts {

    @Override
    public void nombreProducto() {
        System.out.println("Producto: 📱 Celular");
    }

    @Override
    public void precio() {
        System.out.println("Precio: 💲200");
    }

    @Override
    public void id() {
        System.out.println("🆔: 27862");
    }

}