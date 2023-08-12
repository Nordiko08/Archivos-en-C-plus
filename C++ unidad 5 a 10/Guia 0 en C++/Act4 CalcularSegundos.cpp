#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int HH, MM, SS, AuxMS, AuxHM, AuxHS, AuxTot;
	
	cout<<"Ingrese cantidad de horas"<<endl;
	cin>>HH;
	cout<<"Ingrese cantidad de minutos"<<endl;
	cin>>MM;
	cout<<"Ingrese cantidad de segundos"<<endl;
	cin>>SS;
	
	AuxHM= HH * 60;
	AuxHS= AuxHM * 60;
	AuxMS= MM * 60;
	
	AuxTot = AuxMS + AuxHS + SS;
	
	cout<<"La cantidad total de segundos es de: "<<AuxTot<<" segundos";
	return 0;
}

