#include <iostream>
using namespace std;
int main ()
{
	int a, b, unidades;
	
	cout<<"Ingrese el primer numero entero: ";
	cin>>a;
	cout<<"Ingrese un diferente numero entero: ";
	cin>>b;
	
	if (a==b){
		cout<<"Ambos numeros no deben ser iguales";
	} else if (a<=b){
		cout<<"El mayor numero es "<<b;
		unidades = b - a;
		cout<<" por "<<unidades<<" unidades mas";
	} else {
		cout<<"El mayor numero es "<<a;
		unidades = a - b;
		cout<<" por "<<unidades<<" unidades mas";
	}
	
	return 0;
}
