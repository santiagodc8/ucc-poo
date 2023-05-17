package app;

import java.util.ArrayList;

import javax.swing.JOptionPane;
import model.Person;
import model.PersonDAO;

public class App {
    public static void main(String[] args) throws Exception {


        PersonDAO model = new PersonDAO();

        int menu = Integer.parseInt(JOptionPane.showInputDialog("CRUD EXAMPLE\n"+
                                                               "1- Insertar Datos.🖊️\n"+
                                                               "2- Seleccionar Datos.🖇️\n"+
                                                               "3- Actualizar Datos.🔄\n"+
                                                               "4- Borrar Datos.✖️\n"+
                                                               "5- Salir.↩️"));

        switch(menu){

            case 1:
                
                Person person = new Person();

                person.setName("Andrea Acosta");
                person.setPhone("3158956764");
                person.setIdentification("1000866262");
        
                if(model.addPerson(person)){
                    System.out.println("Guardado");
                }else{
                    System.out.println("No Guardado");
                }

            break;

            case 2:

                ArrayList<String> data=new ArrayList<>();
                data.add("Identificacion");
                data.add("1000866262");
                
                ArrayList<Person> list = model.selectPerson("", null);

                for(int i=0; i<list.size(); i++){

                    System.out.println(list.get(i).getName());
                
                }
                
            break;

            case 3:

                person = new Person();

                person.setName("Camila Garcia");
                person.setPhone("3168796764");
                person.setIdentification("10658669262");
        
                if(model.updatePerson(person)){
                    System.out.println("Los datos han sido modificados de manera exitosa");
                }else{
                    System.out.println("No se pudo modificar la informacion");
                }

            break;

            case 4:

                int confirm = JOptionPane.showConfirmDialog(null, "¿Esta seguro que desea realizar el proceso?\n"
                                                                 +"Todos los datos se perderan");

                if(confirm == JOptionPane.YES_OPTION){
                    if(model.deletePerson(4)){
                        System.out.println("Los datos han sido eliminados de manera exitosa");
                    }else{
                        System.out.println("No se pudo eliminar la información");
                    }
                }

            break;

            case 5:
                System.out.println("Saliendo del sistema...");
                System.out.println("Proceso finalizado");
            break;

        }



    }
}