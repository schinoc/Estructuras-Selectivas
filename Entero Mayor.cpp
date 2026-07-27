#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "=== MENOR DE DOS NUMEROS ===" << endl;

    cout << "Ingrese el primer numero entero: ";
    cin >> a;

    cout << "Ingrese el segundo numero entero: ";
    cin >> b;

    if (a == b)
    {
        cout << "Ambos numeros son iguales.";
    }
    else
    {
        if (a < b)
        {
            cout << "El numero menor es: " << a << endl;
            cout << "El numero mayor es: " << b << endl;
        }
        else
        {
            cout << "El numero menor es: " << b << endl;
            cout << "El numero mayor es: " << a << endl;
        }
    }

    return 0;
}
