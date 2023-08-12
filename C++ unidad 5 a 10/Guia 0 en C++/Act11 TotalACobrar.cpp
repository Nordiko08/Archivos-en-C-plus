#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string NYA;
	float Cant, PrecioU, MontTot, Desc, Iva;
	float MontDesc, totPagar, AuxIva, DescApl;
	
	cout<<"Ingrese Nombre del cliente"<<endl;
	cin>>NYA;
	cout<<"Ingrese cantidad del articulo comprado"<<endl;
	cin>>Cant;
	cout<<"Ingrese precio del articulo comprado"<<endl;
	cin>>PrecioU;
	cout<<"Ingrese el porcentaje a descontar"<<endl;
	cin>>Desc;
	cout<<"Ingrese IVA"<<endl;
	cin>>Iva;
	
	MontTot = Cant * PrecioU;
	MontDesc = MontTot * Desc / 100;
	DescApl = MontTot - MontDesc;
	AuxIva = DescApl * Iva / 100;
	totPagar = DescApl + AuxIva;
	
	cout<<"Nombre del cliente: "<<NYA<<endl;
	cout<<"Cantidad de articulos comprados: "<<Cant<<endl;
	cout<<"Precio total de articulos comprados: "<<MontTot<<"$"<<endl;
	cout<<"El descuento aplicado es de: "<<Desc<<"%"<<"\t"<<MontDesc<<"$"<<endl;
	cout<<"El Iva aplicado es de: "<<Iva<<"%"<<"\t"<<AuxIva<<"$"<<endl;
	cout<<"El total a pagar es de: "<<totPagar<<"$";
	return 0;
}

