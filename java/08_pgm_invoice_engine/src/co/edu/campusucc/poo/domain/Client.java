package co.edu.campusucc.poo.domain;

import co.edu.campusucc.poo.engines.InvoiceEngine;
import co.edu.campusucc.poo.interfaces.IClient;

public class Client extends InvoiceEngine implements IClient {

    @Override
    public void nombre() {
        System.out.println("Nombre: Arnulfo 🇨🇴");
    }

    @Override
    public void apellido() {
        System.out.println("Apellido: Diaz 🇨🇴");
    }

    @Override
    public void tipoTarjeta() {
        System.out.println("Tipo de Tarjeta: Visa");
    }

    @Override
    public void numTarjeta() {
        System.out.println("Numero de Tarjeta: 🔢 4916274826489251");
    }

    @Override
    public void id() {
        System.out.println("🆔: 49264862");
    }
}
