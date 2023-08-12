#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string NYA;//Nombre del cliente
	string Gusto;//Se guarda el nombre del Gusto
	int tCaja;//Cajas de 6, 12 o 24 unidades
	int pCaja;//Precio de la caja de alfajores
	int pUnit;//Precio unitario del alfajor
	int Desc;//Descuento segun cantidad
	float Iva;//Iva aplicado al total
	float Tot;//Total con Iva
	string esReg;//Para saber si regalo es V o F
	int Reg;//Si es para regalo
	int Aux;
	
	Reg = 0; pCaja=0;
	
	cout<<"Ingrese el precio unitario del alfajor: ";
	cin>>pUnit;
	cout<<"Ingrese tipo de caja a elegir";
	cout<<"\n1. 6 Unidades";
	cout<<"\n2. 12 Unidades";
	cout<<"\n3. 24 Unidades"<<endl;
	cin>>Aux;
	cout<<"Ingrese de que sabor desea";
	cout<<"\n1. Dulce de leche";
	cout<<"\n2. Frutal";
	cout<<"\n3. Mouse"<<endl;
	cin>>Gusto;
	cout<<"Ingrese Nombre y Apellido del cliente: "<<endl;
	cin.get();
	getline(cin, NYA);
	cout<<"Es para regalo? si/no "<<endl;
	cin>>esReg;
	
	
	switch(Aux){
	case 1: 
	tCaja = 6;
	pCaja = tCaja*pUnit;
	Iva = pCaja*0.21;
	Tot = pCaja+Iva;
	Gusto = "Dulce de leche";
	break;
	case 2:
	tCaja = 12;
	Desc = pUnit*0.1;
	pCaja = (tCaja*pUnit)-Desc;
	Iva = pCaja*0.21;
	Tot = pCaja+Iva;
	Gusto = "Frutal";
	break;
	case 3:
	tCaja = 24;
	Desc = pUnit*0.24;
	pCaja = (pCaja*pUnit)-Desc;
	Iva = pCaja*0.21;
	Tot = pCaja + Iva;
	Gusto = "Mouse";
	break;
	}
	
	if (esReg=="si") {
		Reg=250;
		Tot=Tot+Reg;
	}
	
	cout<<"\n\nCLIENTE: "<<NYA<<"\t"<<"TIPO DE CAJA: "<<tCaja<<" UNIDADES"<<"\t"<<"GUSTO :"<<Gusto;
	cout<<"\nSUBTOTAL: $"<<pCaja<<"\t\t"<<"RECARGO REGALO: $"<<Reg;
	cout<<"\nIVA 21%: $"<<Iva;
	cout<<"\nTOTAL: $"<<Tot;
	return 0;
}

