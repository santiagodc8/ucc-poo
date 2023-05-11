package co.edu.campusucc.poo;
import java.util.Date;

public class MainThree {
    public static void main(String[] args) {
        System.out.println("+-----------------------------------+");
        System.out.println("+---------- PGM: pgmPrint ----------+");
        System.out.println("Autor: 👉🏽👉🏽👉🏽Santiago Duran👈🏽👈🏽👈🏽 ");
        System.out.println("+-----------------------------------+");

        try {
            System.out.println("Imprimiendo desde el shell a las " + new Date() + "⌚");
            Thread.sleep(3000);
            System.out.println("📖📖📖📖📖📖📖📖📖");
            Thread.sleep(1000);
            System.out.println("🖨️🖨️🖨️ Impresion finalizada 🖨️🖨️🖨️");
        } catch (Exception e) {
            System.err.println("⚠️⚠️⚠️" + e);
        }

    }
}
