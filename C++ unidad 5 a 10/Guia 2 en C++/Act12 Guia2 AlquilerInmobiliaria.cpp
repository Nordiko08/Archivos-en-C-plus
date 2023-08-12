#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string Zona;//Zona en la que reside
	int ImpMens;//Impuestos y comisiones
	int PrecBase;//Precio Base
	float Tot;//Total a pagar
	
	cout<<"Ingrese el precio base a pagar: ";
	cin>>PrecBase;
	cout<<"Ingrese la zona de la vivienda(centro, residencial o barrio): ";
	cin>>Zona;
	
	if (Zona=="centro"){
		ImpMens=PrecBase*0.15;
		Tot=PrecBase+ImpMens;
	} else if (Zona=="residencial"){
		ImpMens=PrecBase*0.10;
		Tot=PrecBase+ImpMens;
	} else if(Zona=="barrio"){
		ImpMens=PrecBase*0.08;
		Tot=PrecBase+ImpMens;
	}
	
	cout<<"\nPRECIO BASE DEL ALQUILER: $"<<PrecBase<<"\t"<<" MONTO DE IMPUESTO: $"<<ImpMens;
	cout<<"\nTOTAL A PAGAR: $"<<Tot;
	return 0;
}

