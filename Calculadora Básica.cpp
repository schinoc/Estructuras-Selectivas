#include <iostream>
using namespace std;

int main() {
    float num1, num2, resultado;
    int opcion;

    cout << "Calculadora basica" << endl;
    cout << "==================" << endl;
    cout << "1.- Suma" << endl;
    cout << "2.- Resta" << endl;
    cout << "3.- Multiplicacion" << endl;
    cout << "4.- Division" << endl;
    cout << "Escoja una opcion (1-4): ";
    cin >> opcion;
    cout << "\nIngrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch(opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: no se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Opcion invalida." << endl;
    }

    return 0;
}
