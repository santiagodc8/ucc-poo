#include <iostream>

using namespace std;

int main() {

    int num1;
    int num2;
    int suma, resta, multiplicacion;
    float division;

    cout << "+-----------------------------------------+\n";
	cout << "| pgm_basico.cpp                          |\n";
	cout << "| Language: C++                           |\n";
	cout << "| Autor:👉🏽 Santiago Duran               |\n";
	cout << "+-----------------------------------------+\n";
	cout << "";

    cout << "Escribe un número entero ⌨️: ";
    cin >> num1;

    cout << "Escribe un número entero ⌨️: ";
    cin >> num2;
    
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Asegurémonos de no dividir por cero
    if (num2 != 0) {
        division = (float)num1 / num2;
        cout << "La division de los numeros es 🚀: " << division << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }

    cout << "La suma de los numeros es 🔥: " << suma << endl; 
    cout << "La resta de los numeros es 💥: " << resta << endl;
    cout << "La multiplicacion de los numeros es 🎉: " << multiplicacion << endl;

    return 0;
}