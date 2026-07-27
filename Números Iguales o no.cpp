#include <iostream>
using namespace std;
int main ()
{
	int a, b;
	
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	
	if (a==b){
		cout<<"Ambos numeros son iguales";
	} else if (a<=b){
		cout<<"Ambos numeros son diferentes"<<endl;
		cout<<"El mayor numero es "<<b;
	} else {
		cout<<"Ambos numeros son diferentes"<<endl;
		cout<<"El mayor numero es "<<a;
	}
	
	return 0;
}
