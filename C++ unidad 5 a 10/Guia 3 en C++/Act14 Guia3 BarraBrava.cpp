#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string NyA;//Apodo
	int VecDet;//Veces detenido
	int can1;//1 vez detenido
	int can2;//2-4 vez detenido
	int can3;//5-10 vez detenido
	int can4;//Mas de 10 veces detenido
	string NyAMayor;//Nombre del mayor que fue detenido
	int CantMayor;//Cantidad mayor que fue detenido
	int CantInt;//Cantidad de integrantes encuestados
	
	VecDet=0; CantInt=0; CantMayor=0;
	can1=0; can2=0; can3=0; can4=0;
	
	cout<<"Ingrese apodo y cantidad de veces detenido"<<endl;
	getline(cin, NyA);
	
	while(NyA!="ZZZ"){
		cin>>VecDet;
		
		if(VecDet==1){
			can1++;
		} else if(VecDet>=2 && VecDet<=4){
			can2++;
		} else if(VecDet>4 && VecDet<=10){
			can3++;
		} else {
			can4++;
		}
		if(VecDet>CantMayor){
			CantMayor=VecDet;
			NyAMayor=NyA;
		}
		CantInt++;
		cin.get();
		getline(cin, NyA);
	}
	
	cout<<"\n\nCantidad de detenciones"<<"\t\tCantidad de integrantes";
	cout<<"\n\t1"<<"\t\t\t\t"<<can1;
	cout<<"\n\t2-4"<<"\t\t\t\t"<<can2;
	cout<<"\n\t5-6"<<"\t\t\t\t"<<can3;
	cout<<"\n\tmas de 10"<<"\t\t\t"<<can4;
	cout<<"\n\nCantidad de personas encuestadas: "<<CantInt;
	cout<<"\nEl integrantes con mayor cantidad de detenciones es: "<<NyAMayor;
	return 0;
}

