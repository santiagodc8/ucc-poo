package co.edu.campusucc.poo;
import java.util.Scanner;


public class MainOne{
    public static void main(String[] args) {
        try (Scanner reader = new Scanner(System.in)) {
            int num1 = 0;
            int num2 = 0;

            System.out.println("Escribe un numero entero: ⌨️");
            num1 = reader.nextInt();

            System.out.println("Escribe otro numero entero: ⌨️");
            num2 = reader.nextInt();

            int resultado = num1+num2;

            System.out.println("La suma es " + num1 + " + " + num2 + " = " + resultado + " 🔥");
        }

        System.out.println("|-------------------------------------------|");
        System.out.println("| PgmBasico 1                               |");
        System.out.println("| Lenguaje: Java                            |");
        System.out.println("| Author: Santiago Duran 👈🏽               |");
    }
}

