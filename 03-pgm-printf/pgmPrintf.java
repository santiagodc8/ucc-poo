import java.util.Date;

public class pgmPrintf {
    public static void main(String[] args) {
        System.out.println("+-----------------------------------+");
        System.out.println("+---------- PGM: phmPrint ----------+");
        System.out.println("Autor: ππ½ππ½ππ½Santiago Duranππ½ππ½ππ½ ");
        System.out.println("+-----------------------------------+");

        try {
            System.out.println("Imprimiendo desde el shell a las " + new Date() + "β");
            Thread.sleep(3000);
            System.out.println("πππππππππ");
            Thread.sleep(1000);
            System.out.println("π¨οΈπ¨οΈπ¨οΈ Impresion finalizada π¨οΈπ¨οΈπ¨οΈ");
        } catch (Exception e) {
            System.err.println("β οΈβ οΈβ οΈ" + e);
        }

    }
}
