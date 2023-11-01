/* Realice una función llamada EsPrimo que devuelva verdadero si el número pasado como
parámetro es primo, caso contrario devuelva falso.*/
#include <iostream>
#include <string>
using namespace std;
bool esPrimo(int &a);
int main(int argc, char *argv[]) {
	int numero;
	cout<<"Calcular si un numero es primo o no"<<endl;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	bool Aux = esPrimo(numero);
	if (Aux == true){
		cout<<"El numero es primo";
	} else {
		cout<<"El numero no es primo";
	}
	
	return 0;
}
bool esPrimo(int &a){
	int div=1;
	int res=0;
	do{
		if(a % div == 0){
			res++;
		}
		div++;
	} 
	while(div<=a);
	if(res==2){
		return true;
	} else {
		return false;
	}
}
