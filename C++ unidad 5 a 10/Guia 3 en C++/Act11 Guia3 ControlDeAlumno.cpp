#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int N;//Cantidad de alumnos
	string NyA;//Nombre del alumno
	float Peso;//Peso del alumno
	float Altura;//Altura del alumno
	float maxAlto;
	string NyAAlto;
	string NyAPeso;
	float minPeso;
	int Aux;
	Aux=0; maxAlto=0; minPeso=999; N=0;
	NyAAlto="Ninguno"; NyAPeso="Ninguno";
	
	cin>>N;
	do {
		cin.get();
		getline(cin, NyA);
		cin>>Peso;
		cin>>Altura;
		if(Altura>maxAlto){
			maxAlto=Altura;
			NyAAlto=NyA;
		}
		if(Peso<minPeso){
			minPeso=Peso;
			NyAPeso=NyA;
		}
		Aux++;
	} while (Aux<N);
	
	cout<<"\nEl Alumno mas alto es: "<<NyAAlto;
	cout<<"\nEl alumno con menor peso es: "<<NyAPeso;
	return 0;
}

