#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string TSoc;//Tipo de socio
	string nClub;//Nombre del club
	string NYA;//Nombre del socio
	int nCuo;//Valor de la cuota
	int nSoc;//Numero de socio
	int Aux;
	float Tot;
	
	cout<<"Ingrese el valor de la cuota del club: ";
	cin>>nCuo;
	cout<<"Ingrese Nombre del club: ";
	cin.ignore();
	getline(cin,nClub);
	cout<<"Ingrese nombre del socio: ";
	cin.ignore(0,'\n');
	getline(cin,NYA);
	cout<<"Ingrese el numero de socio: ";
	cin>>nSoc;
	cout<<"Ingrese el tipo de socio (activo, familiar o cadete): ";
	cin.ignore();
	getline(cin, TSoc);
	
	if (TSoc=="familiar"){
		Aux = nCuo*0.5;
		Tot = nCuo + Aux;
	} else if (TSoc=="cadete"){
		Aux = nCuo*0.2;
		Tot = nCuo-Aux;
	} else if(TSoc=="activo"){
		Tot = nCuo;
	}
	
	cout<<"\nCLUB: "<<nClub;
	cout<<"\nNRO.SOCIO: "<<nSoc<<"\tNOMBRE DEL SOCIO: "<<NYA;
	cout<<"\nTIPO DE SOCIO: "<<TSoc<<"\tTOTAL A PAGAR: "<<Tot;
	return 0;
}

