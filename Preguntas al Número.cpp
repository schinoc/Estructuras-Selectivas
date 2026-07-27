#include <iostream>
using namespace std;
int main() {
    int numero, opcion;

    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Menu" << endl;
    cout << "====" << endl;
    cout << "1.- ¿Es menor que 9?" << endl;
    cout << "2.- ¿Su ultima cifra es 4?" << endl;
    cout << "3.- ¿Es negativo?" << endl;
    cout << "Escoja una opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            if (numero < 9) {
                cout << "Si, el numero es menor que 9." << endl;
            } else {
                cout << "No, el numero no es menor que 9." << endl;
            }
            break;
        case 2:
            if (numero % 10 == 4 || numero % 10 == -4) {
                cout << "Si, la ultima cifra es 4." << endl;
            } else {
                cout << "No, la ultima cifra no es 4." << endl;
            }
            break;
        case 3:
            if (numero < 0) {
                cout << "Si, el numero es negativo." << endl;
            } else {
                cout << "No, el numero no es negativo." << endl;
            }
            break;
        default:
            cout << "Opcion invalida." << endl;
    }

    return 0;
}
