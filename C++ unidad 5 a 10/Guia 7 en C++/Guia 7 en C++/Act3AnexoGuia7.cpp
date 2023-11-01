/*Realice una función llamada EsImpar que devuelva verdadero si es impar el valor pasado
como parámetro, caso contrario devuelva falso.*/
#include <iostream>
#include <string>
using namespace std;
int esImpar(int &a);
int main(int argc, char *argv[]) {
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	int Aux=esImpar(num);
	
	if(Aux==1){
		cout<<"Es Impar";
	} else {
		cout<<"Es Par";
	}
	return 0;
}
int esImpar(int &a){
	return a%2;
}
