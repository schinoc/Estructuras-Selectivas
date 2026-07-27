#include <iostream>
using namespace std;
int main ()
{
	int a, b;
	
	cout<<"Ingrese el primer numero entero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero entero: ";
	cin>>b;
	
	if (a==b){
		cout<<"Ambos numeros son iguales";
	} else if (a<=b){
		cout<<"El menor numero es: "<<a;
	} else {
		cout<<"El menor numero es: "<<b;
	}
	
	return 0;
}
