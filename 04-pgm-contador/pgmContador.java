import java.util.Date;
import java.lang.Exception;
import java.lang.Thread;

public class pgmContador{
    public static void main(String[] args) {
        System.out.println("+--------------------------------------------+");
        System.out.println("+------------- PGM: PgmContador -------------+");
        System.out.println("+Autor:ππ½ππ½ππ½Santiago Duranππ½ππ½ππ½+");
        System.out.println("+--------------------------------------------+");
        
        try {
            System.out.println("Contando desde el shell a las "+new Date());
            for (int i = 0; i < 20; i++) {
                System.out.println("Posicion Indice βοΈ: "+i);
                Thread.sleep(1000-(i*50));
            }
            System.out.println("Contador Finalizado...π₯π₯π₯π₯π₯");
        } catch (Exception e) {
            System.err.println("β οΈβ οΈβ οΈ "+e);
        }
        
    }
}