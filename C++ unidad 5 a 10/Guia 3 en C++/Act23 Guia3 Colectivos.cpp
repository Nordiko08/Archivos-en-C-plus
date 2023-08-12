#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int BEst;//Boleto estudiante
	int BCom;//Boleto comun
	int Bjub;//Boleto jubilado
	int CantEst;//Cantidad boletos estudiante
	int CantCom;//Cantidad boletos comun
	int CantJub;//Cantidad boleto jubilado
	int NroCol;//Numero de colectivo
	float TotxRec;//Total recaudado por recorrido
	float TotRec;//Total recaudado
	int MensRec;//Cole que menos recaudo
	int NroColmens;//Numero de cole que menos recaudo
	float AuxBest;//Auxiliar de precio del boleto
	float AuxBjub;//Auxiliar de precio jubilado
	int CantxCom;
	int CantxEst;
	int CantxJub;
	
	BEst=0; BCom=0; Bjub=0;
	CantCom=0; CantEst=0; CantJub=0;
	TotRec=0; TotxRec=0; MensRec=999;
	NroCol=0; NroColmens=0;
	CantxCom=0; CantxEst=0; CantxJub=0;
	
	cout<<"Ingrese nro de colectivo"<<endl;
	cin>>NroCol;
	cout<<"Ingrese el precio comun del boleto"<<endl;
	cin>>BCom;
	
	while(NroCol!=99){
		cout<<"Ingrese cantidad de boletos de estudiante, comun y jubilado vendidos"<<endl;
		cin>>CantEst;cin>>CantCom;cin>>CantJub;
		
		CantxCom+=CantCom;
		CantxEst+=CantEst;
		CantxJub+=CantJub;
		
		AuxBest=BCom*0.2;
		BEst=BCom-AuxBest;
		AuxBjub=BCom*0.4;
		Bjub=BCom-AuxBjub;
		
		TotxRec=(CantCom*BCom)+(CantEst*BEst)+(CantJub*Bjub);
		cout<<"TOTAL RECAUDADO EN EL RECORRIDO $"<<TotxRec;
		
		if(MensRec>TotxRec){
			MensRec=TotxRec;
			NroColmens=NroCol;
		}
		
		TotRec+=(CantEst*BEst)+(CantCom*BCom)+(CantJub*Bjub);
		cout<<"\nIngrese nro de colectivo"<<endl;
		cin>>NroCol;
	}
	cout<<"\n\nTOTAL DE BOLETOS DE ESTUDIANTE VENDIDOS EN EL DIA: "<<CantxEst;
	cout<<"\nTOTAL RECAUDADO EN TODOS LOS RECORRIDOS: $"<<TotRec;
	cout<<"\nEL NUMERO DE COLECTIVO QUE MENOS RECAUDO: "<<NroColmens<<"\tRECAUDO: $"<<MensRec;
	return 0;
}

