#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int arreglo1[5];
	int arreglo2[5];

	
	for(int i=0; i<5; i++){
		cout<<"\nIngrese un numero para el arreglo: ";
		cin>>arreglo1[i];
	}
	
	for(int i=0; i<5; i++){
		arreglo2[i]=arreglo1[i]*3;
	}
	
	for(int i=0; i<5; i++){
		cout<<"\nLos numeros del arreglo 2 multiplicados por 3 son: "<<arreglo2[i];
	}
	return 0;
}

