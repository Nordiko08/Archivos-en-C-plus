#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float  peso, altura, altura2;
	int IMC;
	cout<<"Ingrese su peso actual en KGs"<<endl;
	cin>>peso;
	cout<<"Ingrese su altura en CMs"<<endl;
	cin>>altura;
	
	altura2 = altura * altura;
	IMC = altura2 / peso;
	cout<<"Su IMC (Indice de Masa Corporal) es de: "<<IMC;
	return 0;
}

