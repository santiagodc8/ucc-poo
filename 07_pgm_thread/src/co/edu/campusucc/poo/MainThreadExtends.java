package co.edu.campusucc.poo;
import java.util.Random;

import co.edu.campusucc.poo.domain.ThreadExtends;

public class MainThreadExtends{

    public static void main(String[] args) {
        ThreadExtends thread = new ThreadExtends();
        thread.setTimes(new Random().nextInt(50));
        // Invoking Thread using start() method
        thread.start();
    }
}
