#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int nMont;
	int HS;
	float Tot;
	float Aux, Aux2;
	
	cout<<"Ingrese el monto por hora a cobrar"<<endl;
	cin>>nMont;
	cout<<"ingrese cantidad de horas trabajadas"<<endl;
	cin>>HS;
	
	if (HS>40){
		Aux = HS - 40;
		Aux2 = (nMont * 0.5) * Aux;
		Tot = (nMont * HS) + Aux2;
	} else {
		Tot = nMont * HS;
	}
	
	cout<<"\nEl monto a cobrar por el trabajador es de: $"<<Tot;
	return 0;
}

