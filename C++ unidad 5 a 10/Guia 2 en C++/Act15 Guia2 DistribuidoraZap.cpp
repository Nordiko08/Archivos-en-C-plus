#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string NYA;//Nombre del cliente
	string NDist;//Nombre de la distribuidora
	int FPag;//Forma de pago
	string nPag;//Nombre de la forma de pago
	int Desc;//Descuento aplicado
	float Rec;//Recarga del total
	int PrList;//Precio de la lista del zapato
	int Cant;//Cantidad de pares de zapatos
	float Tot;//Total a pagar
	int Cuo;//Cantidad de cuotas
	float Aux;
	Rec=0; Desc=0; Cuo=0; Tot=0;
	
	cout<<"Ingrese el nombre de la distribuidora de zapatos: ";
	getline(cin, NDist);
	cout<<"Ingrese Nombre y Apellido del cliente: ";
	cin.ignore(0, '\n');
	getline(cin, NYA);
	cout<<"Ingrese el precio de los zapatos: ";
	cin>>PrList;
	cout<<"Ingrese la cantidad a comprar: ";
	cin>>Cant;
	cout<<" Ingrese la forma de pago";
	cout<<"\n1.Contado.";
	cout<<"\n2.6 Cuotas.";
	cout<<"\n3. 12 Cuotas."<<endl;
	cin>>FPag;
	
	switch(FPag){
	case 1: 
	Aux = PrList*Cant;
	Desc = Aux*0.1;
	Tot=Aux-Desc;
	Cuo=Tot;
	nPag="Contado";
	break;
	
	case 2: 
	Tot = PrList*Cant;
	Cuo= Tot/6;
	nPag="6 Cuotas";
	break;
	
	case 3: 
	Aux = PrList*Cant;
	Rec = Aux*0.23;
	Tot = Aux+Rec;
	Cuo = Tot/12;
	nPag = "12 Cuotas";
	break;
	}
	
	cout<<"\n\nNOMBRE DEL CLIENTE: "<<NYA<<"\t"<<"NOMBRE DE LA DISTRIBUIDORA: "<<NDist;
	cout<<"\nCANTIDAD DE ZAPATOS VENDIDOS: "<<Cant<<"\t\t"<<"PRECIO EN LISTA DE LOS ZAPATOS: "<<PrList;
	cout<<"\nFORMA DE PAGO: "<<nPag;
	cout<<"\nDESCUENTO: "<<Desc<<"\t"<<"RECARGO: "<<Rec;
	cout<<"\nCANTIDAD DE CUOTAS: "<<nPag<<"\t\t"<<"MONTO DE LAS CUOTAS: "<<Cuo;
	cout<<"\nTOTAL A PAGAR: $"<<Tot;
	return 0;
}

