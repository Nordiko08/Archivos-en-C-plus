#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float LSup;//Nafta super
	float LPrem;//Nafta premium
	float LDies;//Diesel
	string Pat;//Patente del auto
	int Cod;//Codigo de empleado
	string TCom;//Tipo de combustible
	int CantL;//Cantidad de combustible
	int TotSup;//Total de litros vendidos super
	int TotPrem;//Total de litros vendidos premium
	int TotDies;//Total de litros vendidos de diesel
	float TotRec;//Total recaudado
	
	LSup=0; LPrem=0; LDies=0;
	Cod=0; CantL=0;
	TotDies=0; TotPrem=0; TotSup=0; TotRec=0;
	
	cout<<"\t\tESTACION DE SERVICIO";
	cout<<"\n\nIngrese precio de combustible (Super, Premium y Diesel)"<<endl;
	cin>>LSup;cin>>LPrem;cin>>LDies;
	cout<<"Ingrese patente del auto"<<endl;
	cin.get();
	getline(cin, Pat);
	while(Pat!="ZZZ"){
		cout<<"Ingrese codigo de empleado"<<endl;
		cin>>Cod;
		cout<<"Ingrese tipo de combustible: super, premium o diesel"<<endl;
		cin>>TCom;
		cout<<"Ingrese cantidad de litros"<<endl;
		cin>>CantL;
		
		if(TCom=="super"){
			TotSup+=+CantL;
		} else if(TCom=="premium"){
			TotPrem+=+CantL;
		} else if(TCom=="diesel"){
			TotDies+=+CantL;
		}
		cout<<"\nIngrese patente del auto"<<endl;
		cin.get();
		getline(cin, Pat);
	}
	
	TotRec=(TotSup*LSup)+(TotPrem*LPrem)+(TotDies*LDies);
	
	cout<<"\n\nSe vendieron: "<<TotSup<<" litros de nafta Super";
	cout<<"\nSe vendieron: "<<TotPrem<<" litros de nafta Premium";
	cout<<"\nSe vendieron: "<<TotDies<<" litros de nafta Diesel";
	cout<<"\nMonto total recaudado: $"<<TotRec;
	return 0;
}

