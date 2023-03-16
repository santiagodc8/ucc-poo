package co.edu.campusucc.poo;

import java.io.*;
import java.util.*;

import co.edu.campusucc.poo.domain.ThreadExtends;

public class MainThreadExtends extends Thread {

    public static void main(String[] args) {
        ThreadExtends thread = new ThreadExtends();

        // Invoking Thread using start() method
        thread.start();
    }
}
