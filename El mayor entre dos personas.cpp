#include <iostream>
using namespace std;
int main ()
{
	string nombre1, nombre2;
    int edad1, edad2;
	
	cout<<"Ingrese el nombre de la primera persona: ";
    cin>>nombre1;
    cout<<"Ingrese su edad: ";
    cin>>edad1;
    cout<<"Ingrese el nombre de la segunda persona: ";
    cin>>nombre2;
    cout<<"Ingrese su edad: ";
    cin>>edad2;
	
	if (edad1 > edad2) {
        cout << nombre1 << " es mayor que " << nombre2
             << " por " << (edad1 - edad2) << " anios." << endl;
    } else if (edad2 > edad1) {
        cout << nombre2 << " es mayor que " << nombre1
             << " por " << (edad2 - edad1) << " anios." << endl;
    } else {
        cout << "Ambos tienen la misma edad." << endl;
    }

    return 0;
}
