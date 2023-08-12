#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int N;//Cantidad de adjudicatarios
	int C;//Contador
	float Total;//Acumulador de deuda
	int nMax;//Maximo
	int nMin;//Minimo
	string NYA;//Nombre del adjudicado
	int Cant;//Cantidad de cuotas en mora
	float Deuda;//Deuda del adjudicado
	string MaxNya;//Auxiliar de nombre
	float MaxDeuda;//Auxiliar de deuda
	string MinNya;//Auxiliar de nombre
	float MinCant;//Auxiliar de deuda
	
	C=0; N=0;
	Total=0;
	nMax=0;
	nMin=999999;
	cout<<"\tPRECESO IAPV"<<endl<<endl;
	cin>>N; 
	
	do {
		cin.get();
		getline(cin, NYA);
		cin>>Cant;
		cin>>Deuda;
		if(Cant>nMax) {
			nMax=Cant;
			MaxNya=NYA;
			MaxDeuda=Deuda;
		} if (Deuda<nMin){
			nMin = Deuda;
			MinNya = NYA;
			MinCant = Cant;
		}
		Total+=Deuda;
		C++;
		
	} while (C<N);
	
	cout<<setfill('.');
	cout<<"\nDeuda total al IAPV: "<<Total;
	cout<<setw(30)<<"\n\nInformacion de Adjudicatarios"<<setw(30);
	cout<<"\nAdjud. con mayor cantidad de cuotas en mora: "<<MaxNya;
	cout<<"\nCantidad de cuotas: "<<nMax;
	cout<<"\nDeuda: "<<MaxDeuda;
	cout<<"\nAdjud. con menor monto de deuda: "<<MinNya;
	cout<<"\nCantidad de Cuotas: "<<MinCant;
	cout<<"\nDeuda: "<<nMin;
	return 0;
}

