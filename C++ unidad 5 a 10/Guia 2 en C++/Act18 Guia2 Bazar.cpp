#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	string NYA;//Nombre y apellido del cliente
	int DNI;//DNI del cliente
	int Rprod;//Rubro del producto
	string nprod;//Nombre del rubro del producto
	int Cant;//Cantidad del producto
	float PUnit;//Precio unitario del producto
	float Subtotal;//Subtotal
	float Desc;//Descuento
	float Rec;//Recargo
	int nFPago;//Numero de la forma de pago
	string FPago;//Nombre de la forma de pago
	string TipoT;//Tipo de tarjeta
	int Cuo;//Cantidad de cuotas
	string Bank;//Banco de la tarjeta
	float DescT;//Descuento de la tarjeta
	float RecT;//Recargo de la tarjeta
	float Tot;//Total a pagar
	DescT=0; RecT=0; Desc=0 ; Rec=0; Subtotal=0; PUnit=0; nFPago=0; Tot=0;
	
	cout<<"Ingrese nombre y apellido del cliente: ";
	getline(cin, NYA);
	cout<<"Ingrese DNI del cliente: ";
	cin>>DNI;
	cout<<"Ingrese rubro del producto a comprar";
	cout<<"\n1. Calefactores";
	cout<<"\n2. Radiadores";
	cout<<"\n3. Caleventores";
	cout<<"\n4. Cualquier otro producto del local"<<endl<<endl;
	cin>>Rprod;
	
	switch(Rprod){
	case 1: nprod = "Calefactores";break;
	case 2: nprod = "Radiadores";break;
	case 3: nprod = "Caleventores"; break;
	case 4: nprod = "Cualquier otro producto del local";break;
	}
	cout<<"\nIngrese cantidad a comprar: ";
	cin>>Cant;
	cout<<"\nIngrese precio unitario del producto: ";
	cin>>PUnit;
	cout<<"\nIngresar forma de pago";
	cout<<"\n1. Contado";
	cout<<"\n2. Debito";
	cout<<"\n3. Tarjeta de credito"<<endl<<endl;
	cin>>nFPago;
	
	switch(nFPago) {
	case 1: FPago = "Contado";
	if (Rprod>0 && Rprod!=4){
		Subtotal= PUnit * Cant;
		Desc = Subtotal * 0.15;
		Tot=Subtotal-Desc;
	} else {
		Subtotal= PUnit * Cant;
		Tot = Subtotal;
	}
	break;
	case 2: FPago = "Debito";
	Subtotal = PUnit*Cant;
	Tot = Subtotal;
	break;
	case 3: FPago = "Tarjeta de credito";
	cout<<"\nIngresar tipo de tarjeta";
	cout<<"\nV. Visa";
	cout<<"\nM. MasterCard";
	cout<<"\nN. Naranja"<<endl<<endl;
	cin>>TipoT;
	cout<<"\nIngresar banco de la tarjeta";
	cout<<"\nB. Bersa";
	cout<<"\nF. Frances";
	cout<<"\nG. Galicia";
	cout<<"\nO. Otro"<<endl<<endl;
	cin>>Bank;
	cout<<"\nIngrese cantidad de cuotas: 1, 2, 6, 12 o 18: ";
	cin>>Cuo;
	
	if (TipoT=="V" && Bank=="B"){
		Subtotal = Cant * PUnit;
		RecT = Subtotal * 0.2;
		Tot = Subtotal + (RecT * Cuo);
		DescT = Subtotal*0.15;
		Tot = (Tot-DescT);
	} else {
		Subtotal = (Cant * PUnit) / Cuo;
		RecT = Subtotal * 0.2;
		Tot = (Subtotal * Cuo) + (RecT*Cuo);
	}
	break;
	}
	cout<<"\n\nDNI: "<<DNI<<"\tCLIENTE: "<<NYA;
	cout<<"\nRUBRO DEL PRODUCTO: "<<nprod<<"\tCANTIDAD: "<<Cant;
	cout<<"\nPRECIO UNITARIO: $"<<PUnit<<"\tFORMA DE PAGO: "<<FPago;
	cout<<"\nSUBTOTAL: "<<Subtotal;
	cout<<"\nDESCUENTO: $"<<Desc;
	cout<<"\nRECARGOS: $"<<Rec;
	cout<<"\nDESCUENTO TARJETA DE CREDITO: $"<<DescT;
	cout<<"\nRECARGO TARJETA DE CREDITO: $"<<RecT;
	cout<<"\nTOTAL A PAGAR: $"<<Tot;
	return 0;
}

