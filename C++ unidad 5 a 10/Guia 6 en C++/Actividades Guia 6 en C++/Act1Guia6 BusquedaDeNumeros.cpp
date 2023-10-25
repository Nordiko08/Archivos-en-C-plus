#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int lista[100];
	int i=0, dato;
	int N;
	string band="F";
	
	cout<<"Digite la cantidad de elementos a guardar: ";
	cin>>N;
	for (int i=0; i<N; i++){
		cin>>lista[i];
	}
	cout<<"Ingrese el numero que desea encontrar: ";
	cin>>dato;
	while((band=="F") && (i<N)){
		if(lista[i]==dato){
			band = "V";
		}
		i++;
	}
	
	if(band=="F"){
		cout<<"El numero a buscar no existe en el arreglo.";
	} else if (band=="V"){
		cout<<"El numero a sido encontrado en la posicion "<<i-1<<endl;
	}
	return 0;
}

