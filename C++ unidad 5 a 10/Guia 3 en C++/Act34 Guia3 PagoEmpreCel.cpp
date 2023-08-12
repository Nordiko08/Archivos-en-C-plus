#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int CodEmpre;//Codigo de empresa(1, 2, 3, o 4)
	string NyAEmpr;//Nombre de la empresa
	string NyA;//Nombre del usuario
	string Mes;//Mes de pago
	string FPago;//Fecha de pago
	int NPago;//Numero forma de pago
	float Import;//Importe a pagar
	string FormPago;//Forma de pago
	int LugPago;//Lugar de pago(1, 2, 3 o 4)
	string NomLugPago;//Nombre de lugar de pago
	int TotEmpr;//Total de la empresa
	float TotTod;//Total cobrado de todas las empresas
	int CanUsua;//Cantidad de usuarios
	int Cont;//Contador de usuarios
	int NUMMAX;
	string NyAMin;//Nombre del menor recaudado
	float PagaRapi;//Pagado en rapipago y personal
	float OtroMovis;//Pagado en otros movistar
	CodEmpre=0; Import=0; LugPago=0; TotTod=0;
	NUMMAX=999999; NyAMin=""; PagaRapi=0; OtroMovis=0;
	NyAEmpr="";
	
	cout<<"Introduzca el codigo de empresa";
	cout<<"\n1-CLARO";
	cout<<"\n2-PERSONAL";
	cout<<"\n3-MOVISTAR";
	cout<<"\n4-TUENTI";
	cout<<"\n99-SALIR"<<endl<<endl;
	cin>>CodEmpre;//Codigo de empresa(1, 2, 3, o 4)
	while(CodEmpre!=99){
		Cont=0; TotEmpr=0;
		cout<<"Ingrese nombre del mes a pagar"<<endl;
		cin>>Mes;//Mes de pago
		switch(CodEmpre){
		case 1:NyAEmpr="CLARO";break;
		case 2:NyAEmpr="PERSONAL";break;
		case 3:NyAEmpr="MOVISTAR";break;
		case 4:NyAEmpr="TUENTI";break;
		default:CodEmpre=99;break;
		}
		cout<<"Ingrese cantidad de usuarios a cargar"<<endl;
		cin>>CanUsua;//Cantidad de usuarios
		cout<<"\nRESUMEN DEL MES: "<<Mes;
		cout<<"\nCODIGO DE LA EMPRESA: "<<NyAEmpr;
		cout<<"\n\nFECHA"<<"\t\t\tUSUARIO"<<"\t\t\tIMPORTE"<<"\t\t\tFORMA DE PAGO"<<endl<<endl;
		while(CanUsua!=Cont){
			cout<<"\nIntroduzca fecha de pago en formato dd/mm/aaaa"<<endl;
			cin>>FPago;//Fecha de pago
			cout<<"Ingrese nombre y apellido del usuario"<<endl;
			cin.get();
			getline(cin, NyA);//Nombre del usuario
			cout<<"Ingrese importe a pagar"<<endl;
			cin>>Import;//Importe a pagar
			cout<<"Ingrese forma de pago"<<endl;
			cout<<"\n1-CONTADO";
			cout<<"\n2-DEBITO";
			cout<<"\n3-TARJETA DE CREDITO"<<endl;
			cin>>NPago;//Numero forma de pago
		  switch (NPago){
			case 1:FormPago="CONTADO";break;
			case 2:FormPago="DEBITO";break;
			case 3:FormPago="TARJETA DE CREDITO";break;
		    }
		  if(FormPago=="CONTADO"){
			    cout<<"Ingrese lugar de pago";
				cout<<"\n1-Pago facil";
				cout<<"\n2-RapiPago";
				cout<<"\n3-Banco";
				cout<<"\n4-Otro"<<endl;
				cin>>LugPago;//Lugar de pago(1, 2, 3 o 4)
				switch(LugPago){
				case 1:NomLugPago="PagoFacil";break;
				case 2:NomLugPago="RapiPago";break;
				case 3:NomLugPago="Banco";break;
				case 4:NomLugPago="Otro";break;
				}
				if (NyAEmpr=="PERSONAL" && NomLugPago=="RapiPago"){
					PagaRapi+=Import;
				}
				else if(NyAEmpr=="MOVISTAR" && NomLugPago=="Otro"){
					OtroMovis+=Import;
				}
			}
		  cout<<FPago<<"\t\t"<<NyA<<"\t\t\t"<<Import<<"\t\t\t  "<<FormPago<<endl;
		  Cont++;
		  TotEmpr+=Import;
		}
	 if(TotEmpr<NUMMAX){
		NUMMAX=TotEmpr;
		NyAMin=NyAEmpr;
		cout<<"\nTOTAL DE LA EMPRESA: $"<<TotEmpr<<endl;
		TotTod+=TotEmpr;
		cout<<"\nIntroduzca el codigo de empresa";
		cout<<"\n1-CLARO";
		cout<<"\n2-PERSONAL";
		cout<<"\n3-MOVISTAR";
		cout<<"\n4-TUENTI";
		cout<<"\n99-SALIR"<<endl<<endl;
		cin>>CodEmpre;
	}
	}
	 cout<<"\n\nTOTAL COBRADO DE TODAS LAS EMPRESAS: $"<<TotTod;
	 cout<<"\nCODIGO DE EMPRESAS DE MENOR RECAUDACION: "<<NyAMin;
	 cout<<"\nPERSONAL: TOTAL ABONADO EN RAPIPAGO: $"<<PagaRapi;
	 cout<<"\nMOVISTAR: TOTAL ABONADO EN OTROS LUGARES DE PAGO: $"<<OtroMovis;
	return 0;
}

