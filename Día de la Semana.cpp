#include <iostream>
using namespace std;

int main() {

    int dia;

    cout << "=== DIAS DE LA SEMANA ===" << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "6. Sabado" << endl;
    cout << "7. Domingo" << endl;

    cout << "\nIngrese un numero (1-7): ";
    cin >> dia;

    if (dia < 1 || dia > 7) {
        cout << "Error: debe ingresar un numero entre 1 y 7.";
    }
    else {

        switch (dia) {
            case 1: cout << "El dia es: LUNES"; break;
            case 2: cout << "El dia es: MARTES"; break;
            case 3: cout << "El dia es: MIERCOLES"; break;
            case 4: cout << "El dia es: JUEVES"; break;
            case 5: cout << "El dia es: VIERNES"; break;
            case 6: cout << "El dia es: SABADO"; break;
            case 7: cout << "El dia es: DOMINGO"; break;
        }
    }

    return 0;
}
