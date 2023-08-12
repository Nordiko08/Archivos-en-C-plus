#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int NUM[10];
	int cont=0;
	int nMax=0;
	int nMin=9999;
	int valor=0;
	string valormensaje;//CTRL + H
	
	
	
	for(int i=0; i<10; i++){
		cout<<"\nIngrese un numero: ";
		cin>>NUM[i];
	}
	
	
	for(int i=0; i<10; i++){
		if(NUM[i]%2 == 0){
			cont++;
		}
		if(NUM[i]>nMax){
			nMax=NUM[i];
		}
		if(NUM[i]<nMin){
			nMin=NUM[i];
		}
	} 
	
	cout<<"\nIngrese un valor: ";
	cin>>valor;
	
	bool encontrado=false;
	for(int i=0; i<10; i++){
		if(NUM[i]==valor){
			encontrado=true;
			break;
		}
	}
	
	cout<<"\nCantidad de numeros pares: "<<cont;
	cout<<"\nEl numero maximo es: "<<nMax;
	cout<<"\nEl numero minimo es: "<<nMin;
	if (encontrado) {
		cout<<"\nEl valor "<<valor<<" esta en el arreglo."<<endl;
	} else {
		cout<<"\nEl valor "<<valor<<" no esta en el arreglo."<<endl;
	}
	
	return 0;
}

