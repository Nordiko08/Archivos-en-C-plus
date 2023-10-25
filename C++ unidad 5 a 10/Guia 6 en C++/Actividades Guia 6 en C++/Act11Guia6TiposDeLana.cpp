#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int tlana[500][3]={0};///[0]LANA DE MERINO [1]LANA DE TEXEL [2]LANA DE DORSET
	int costoTot[500][2]={0};///[0]NUMERO DE CRIADERO [1]COSTO TOTAL DE LOS TIPOS DE LANAS
	int N;///CANTIDAD DE CRIADEROS
	int cont=0;
	int tipoLana;///tipo de lana
	int pos;
	int aux;
	
	
	cout<<"Ingrese el numero de criadero: ";
	cin>>N;
	while (N!=999){
		if(cont<N){
			cont=N;
		}
		cout<<"Ingrese tipo de lana "<<endl;
		cout<<"1- LANA DE MERINO"<<endl;
		cout<<"2- LANA TEXTEL"<<endl;
		cout<<"3- LANA DE DORSET"<<endl;
		cin>>tipoLana;
		switch(tipoLana){
			case 1: cout<<"Ingrese cantidad de KG de lana de merino: ";
			cin>>tlana[N][0];
			tlana[N][0]+=tlana[N][0];
			break;
			case 2: cout<<"Ingrese cantidad de KG de lana de textel: ";
			cin>>tlana[N][1];
			tlana[N][1]+=tlana[N][1];
			break;
			case 3: cout<<"Ingrese cantidad de KG de lana de dorset: ";
			cin>>tlana[N][2];
			tlana[N][2]+=tlana[N][2];
			break;
		}
		cout<<"\n\nIngrese el numero de criadero: ";
		cin>>N;
		
	}
	for(int i=1; i<cont; i++){
		for(int j=0; j<3; j++){
			cout<<tlana[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

