/*. Realice una funci�n que devuelva el menor de 2 n�meros que se pasan como par�metros.*/
#include <iostream>
using namespace std;
int menorDeDosNumeros(int n1, int n2);
int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	
	cout<<"Ingrese el primero numero: ";
	cin>>numero1;
	cout<<"Ingrese el segundo numero: ";
	cin>>numero2;
	cout<<endl;
	int Aux = menorDeDosNumeros(numero1, numero2);
	cout<<"El numero menor es "<<Aux;
	return 0;
}
int menorDeDosNumeros(int n1, int n2){
	 if(n1<n2){
		return n1;
	} else {
		return n2;
	}
}
