#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string cNom1, cNom2;
	int nPun1Equ1, nPun1Equ2;
	int nPun2Equ1, nPun2Equ2;
	int nPun3Equ1, nPun3Equ2;
	int nSetEq1, nSetEq2;
	int nTotPuntos1, nTotPuntos2;
	
	nSetEq1=0; nSetEq2=0;nPun3Equ1=0;nPun3Equ2=0;
	
	cout<<"Ingrese el nombre del 1er Equipo: ";
	getline(cin, cNom1);
	cout<<"\nIngrese el nombre del 2do Equipo: ";
	getline(cin, cNom2);
	cout<<"\nIngrese los puntos del equipo "<<cNom1<<" en el 1er Set: ";
	cin>>nPun1Equ1;
	cout<<"\nIngrese los puntos del equipo "<<cNom2<<" en el 1er Set: ";
	cin>>nPun1Equ2;
	cout<<"\nIngrese los puntos del equipo "<<cNom1<<" en el 2do Set: ";
	cin>>nPun2Equ1;
	cout<<"\nIngrese los puntos del equipo "<<cNom2<<" en el 2do Set: ";
	cin>>nPun2Equ2;
	
	if (nPun1Equ1>nPun1Equ2){
		nSetEq1+=1;
	} else {
		nSetEq2+=1;
	}
	if (nPun2Equ1>nPun2Equ2){
		nSetEq1+=1;
	} else {
		nSetEq2+=1;
	}
	
	if (nSetEq1==nSetEq2){
		cout<<"\nIngrese los puntos del equipo "<<cNom1<<" en el 3er Set: ";
		cin>>nPun3Equ1;
		cout<<"\nIngrese los puntos del equipo "<<cNom2<<" en el 3er Set: ";
		cin>>nPun3Equ2;
		if (nPun3Equ1 > nPun3Equ2){
			nSetEq1+=1;
		} else {
			nSetEq2+=1;
		}
	} else {
		nPun3Equ1=0;
		nPun3Equ2=0;
	}
	
	nTotPuntos1=nPun1Equ1+nPun2Equ1+nPun3Equ1;
	nTotPuntos2=nPun1Equ2+nPun2Equ2+nPun3Equ2;
	
	if (nSetEq1>nSetEq2){
		cout<<"\nGanador equipo: "<<cNom1;
		if(nTotPuntos2>nTotPuntos1){
			cout<<"\nDATO ESTADISTICO: Equipo perdedor hizo mas puntos que el ganador";
		} 
	} else {
			cout<<"\nGanador equipo: "<<cNom2;
			if (nTotPuntos1>nTotPuntos2){
				cout<<"\nDATO ESTADISTICO: Equipo perdedor hizo mas puntos que el ganador";
			}
		}
	return 0;
}

