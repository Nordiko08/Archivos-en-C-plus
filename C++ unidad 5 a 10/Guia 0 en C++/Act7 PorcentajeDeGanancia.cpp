#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float PrecioVenta, CostoProducto, PorGanancia, Aux;
	cout<<"Ingrese el precio de venta del producto"<<endl;
	cin>>PrecioVenta;
	cout<<"Ingrese el porcentaje de ganancia del producto"<<endl;
	cin>>PorGanancia;
	
	Aux = PorGanancia * PrecioVenta / 100;
	CostoProducto = PrecioVenta - Aux;
	
	cout<<"El costo de su producto es de: "<<CostoProducto<<"$";
	return 0;
}

