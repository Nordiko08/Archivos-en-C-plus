#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[100];
	int cant=0;
	int nAlum;
	
	cout<<"Ingrese la cantidad de alumnos de la comision"<<endl;
	cin>>cant;
	
	for(int i=0;i<cant;i++){
		cout<<"\nIngrese edad del alumno: ";
		cin>>numeros[i];
	}
	
	cout<<"\nIngrese una posicion para buscar la edad del alumno: ";
	cin>>nAlum;
	
	--nAlum;
	
	while((nAlum >=0) && (nAlum<cant)) {
		cout<<" La edad del alumno es: "<<numeros[nAlum];
		cout<<"\nIngrese una posicion para buscar la edad del alumno: ";
		cin>>nAlum;
		--nAlum;
	}
	
	return 0;
}

