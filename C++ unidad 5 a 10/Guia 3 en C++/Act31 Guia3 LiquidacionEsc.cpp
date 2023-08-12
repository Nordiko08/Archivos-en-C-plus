#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int codEsc;//Codigo de escuela
	int DNI;//DNI del docente
	string NyA;//Nombre y apellido del docente
	float Sueld;//Sueldo del docente
	string Mes;//Nombre del mes a liquidar
	int CantDoc;//Cantidad de docentes procesados
	int Totdoc;//Total de docentes de las escuelas general
	int TotdocAux;//Aux de total de docentes
	float TotEsc;//Total a pagar en la escuela
	float TotTodEsc;//Total a pagar en todas las escuelas
	int CantMax;//cantidad de docentes que cobran mas de 10.000
	int CantmaxTot;//cantidad maxima total de docentes total
	codEsc=0; DNI=0; Sueld=0; Totdoc=0; TotTodEsc=0; CantmaxTot=0;
	cin>>codEsc;
	cin>>Mes;
	while(codEsc!=999){
		TotdocAux=0; CantMax=0; TotEsc=0; CantDoc=0;
		
		cout<<"LIQUIDACION DEL MES DE "<<Mes;
		cout<<"\nESCUELA: "<<codEsc<<endl;
		cin>>CantDoc;
		cout<<"DOCUMENTO"<<"\tNOMBRE Y APELLIDO"<<"\tSUELDO"<<endl<<endl;
		while(TotdocAux<CantDoc){
			cin>>DNI;
			cin.get();
			getline(cin, NyA);
			cin>>Sueld;
			cout<<"\n"<<DNI<<"\t\t"<<NyA<<"\t\t"<<Sueld<<endl<<endl;
			TotdocAux++;
			TotEsc+=Sueld;
			if(Sueld>=10000){
				CantMax++;
			}
		}
		cout<<"\nTOTAL A PAGAR EN LA ESCUELA: $"<<TotEsc;
		cout<<"\nCANTIDAD DE DOCENTES PROCESADOS: "<<CantDoc;
		cout<<"\nCANTIDAD DE DOCENTES QUE COBRAN MAS DE $10.000: "<<CantMax<<endl;
		TotTodEsc+=TotEsc;
		CantmaxTot+=CantMax;
		Totdoc+=CantDoc;
		cin>>codEsc;
	}
	cout<<"\n\nLIQUIDACION DEL MES DE "<<Mes;
	cout<<"\nCANTIDAD DE DOCENTES PROCESADOS: "<<Totdoc;
	cout<<"\nTOTAL A PAGAR EN TODAS LAS ESCUELAS: $"<<TotTodEsc;
	cout<<"\nCANTIDAD DE DOCENTES QUE COBRAN MAS DE $10.000: "<<CantmaxTot;
	return 0;
}

