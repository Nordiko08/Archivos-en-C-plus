/*Realice una función que realice el intercambio entre 2 valores que se pasan como
parámetros*/
#include <iostream>
using namespace std;
void intercambio(int &a, int &b);
int main(int argc, char *argv[]) {
	int numero1=10;
	int numero2=20;
	cout<<"Los numeros antes del intercambio son:"<<endl;
	cout<<"numero 1: "<<numero1<<"  numero 2: "<<numero2<<endl;
	
	intercambio(numero1, numero2);
	
	cout<<"Los numeros despues del intercambio son:"<<endl;
	cout<<"numero 1: "<<numero1<<"  numero 2: "<<numero2<<endl;
	
	return 0;
}
void intercambio(int &a, int &b){
	int Aux=a;
	a=b;
	b=Aux;
}

