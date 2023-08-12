#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float NotaExa1, NotaExa2, TP, Aux;
	float SumaNotas, PorcNotas, PorcTP;
	cout<<"Ingresar la nota del parcial 1 (0 a 100)"<<endl;
	cin>>NotaExa1;
	cout<<"Ingresar la nota del parcial 2 (0 a 100)"<<endl;
	cin>>NotaExa2;
	cout<<"Ingresar la nota de trabajo practico del alumno"<<endl;
	cin>>TP;
	
	SumaNotas = NotaExa1 + NotaExa2;
	PorcNotas = (SumaNotas / 2) * 0.8;
	PorcTP = TP * 0.2;
	Aux = PorcNotas+PorcTP;
	
	cout<<"La nota final del alumno es: "<<Aux;
	return 0;
}

