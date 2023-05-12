package app;

import model.Person;
import model.PersonDAO;

public class App {
    public static void main(String[] args) throws Exception {

        PersonDAO model = new PersonDAO();

        Person person = new Person();

        person.setName("Santiago");
        person.setLastName("Duran Canedo");
        person.setNumberPhone("3001324564");


        if(model.addPerson(person)){
            System.out.println("Guardado");
        }else{
            System.out.println("No Guardado");
        }

    }
}
