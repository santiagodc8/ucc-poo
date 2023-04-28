package co.edu.campusucc.poo;

import java.util.Random;

import co.edu.campusucc.poo.domain.ThreadRunnable;

public class MainThreadRunnable {

    public static void main(String[] args) {
        ThreadRunnable runnable = new ThreadRunnable();
        runnable.setTimes(new Random().nextInt(50));
        // initializing Thread Object
        Thread thread = new Thread(runnable);
        thread.start();
    }
}
