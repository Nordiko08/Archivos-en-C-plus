#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int FNac, DVot;
	int nDNac, nMNac, nANac;
	int nDVot, nMVot, nAVot;
	int AuxA;
	
	cout<<"Ingrese la fecha de nacimiento de la forma ddmmaa"<<endl;
	cin>>FNac;
	
	nDNac = trunc( FNac / 10000);
	
	AuxA = FNac - nDNac * 10000;
	nMNac = trunc(AuxA / 100);
	nANac = AuxA - nMNac * 100 + 2000;
	
	if (nANac > 2023){
		nANac-=100;
	}
	
	cout<<"Fecha en formato corto: "<<nDNac<<"/"<<nMNac<<"/"<<nANac<<endl;
	cout<<"Ingrese la fecha de votacion en el formato ddmmaa"<<endl;
	cin>>DVot;
	
	nDVot = trunc(DVot / 10000);
	
	AuxA = DVot - nDVot * 10000;
	nMVot = trunc( AuxA / 100);
	nAVot = AuxA - nMVot * 100 + 2000;
	
	cout<<"Fecha en formato corto: "<<nDVot<<"/"<<nMVot<<"/"<<nAVot<<endl;
	AuxA = nAVot - nANac;
	
	if (nMNac >= nMVot){
		if (AuxA>18){
			cout<<"\nEs mayor de 18 y VOTA";
		} else if(nMNac < nMVot){
		cout<<"\nEs mayor de 18 y VOTA";
	} else if (nMNac == nMVot && nDNac <= nDVot){
		cout<<"\nEs Mayor de 18 y VOTA";
	} else {
		cout<<"\nEs menor de 18 y NO VOTA";
	} 
	}else {
	cout<<"\nEs menor de 18 y NO VOTA";
}
	return 0;
}

