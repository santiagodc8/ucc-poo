package java;

import java.util.Scanner;

import co.edu.campusucc.poo.MainOne;
import co.edu.campusucc.poo.MainTwo;
import co.edu.campusucc.poo.MainThree;
import co.edu.campusucc.poo.MainFour;
import co.edu.campusucc.poo.MainFive;
import co.edu.campusucc.poo.MainSix;
import co.edu.campusucc.poo.MainSevenE;
import co.edu.campusucc.poo.MainSevenR;
import co.edu.campusucc.poo.app.MainInvoiceEngine;
import co.edu.campusucc.poo.app.MainNine;




public class Menu {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int option;

        do {

            System.out.println("Bienvenido al menu principal de Java 👍");
            System.out.println("Por favor ingesa el numero para ser redireccionado al programa deseado👊");
            System.out.println("1. Basico");
            System.out.println("2. Basico dos");
            System.out.println("3. Print ");
            System.out.println("4. Contador");
            System.out.println("5. Abstraccion");
            System.out.println("6. Abstraccion Avion");
            System.out.println("7. Threads");
            System.out.println("8. Inivoice Engine");
            System.out.println("9. Interface Avion");

            option = sc.nextInt();

            switch (option) {
                case 1:
                    MainOne mainOne = new MainOne();
                    mainOne.main(args);
                    break;
                case 2:
                    MainTwo mainTwo = new MainTwo();
                    mainTwo.main(args);
                    break;
                case 3:
                    MainThree mainThree = new MainThree();
                    mainThree.main(args);
                    break;
                case 4:
                    MainFour mainFour = new MainFour();
                    mainFour.main(args);
                    break;
                case 5:
                    MainFive mainFive = new MainFive();
                    mainFive.main(args);
                    break;
                case 6:
                    MainSix mainSix = new MainSix();
                    mainSix.main(args);
                    break;
                case 7:
                    MainSevenR mainSevenR = new MainSevenR();
                    mainSevenR.main(args);
                    break;
                case 8:
                    MainInvoiceEngine mainInvoiceEngine = new MainInvoiceEngine();
                    mainInvoiceEngine.main(args);
                    break;
                case 9:
                    MainNine mainNine = new MainNine();
                    mainNine.main(args);
                    break;
                default:
                    System.out.println("Invalid option");
                    break;
            }

            System.out.println();
            System.out.println();

        } while (!(option != 0) || option > 9);

        sc.close();
    }

}