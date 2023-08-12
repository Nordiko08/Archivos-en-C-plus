#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float Vent1S1, Vent1S2, Vent2S1, Vent2S2, Totven;
	float totvent1, totvent2;
	float totemp;
	float bon, bonemp;
	
	cout<<"Ingrese total de ventas de la sucursal 1 en el primer semestre"<<endl;
	cin>>Vent1S1;
	cout<<"Ingrese total de ventas de la sucursal 2 en el primer semestre"<<endl;
	cin>>Vent2S1;
	cout<<"Ingrese total de ventas de la sucursal 1 en el segundo semestre"<<endl;
	cin>>Vent1S2;
	cout<<"Ingrese total de ventas de la sucursal 2 en el segundo semestre"<<endl;
	cin>>Vent2S2;
	cout<<"Ingresar cantidad de empleados"<<endl;
	cin>>totemp;
	
	totvent1 = Vent1S1+Vent1S2;
	totvent2 = Vent2S1+Vent2S2;
	Totven = totvent1+totvent2;
	bon = Totven*0.20;
	bonemp = bon/totemp;
	
	cout<<"El total de ventas de las sucursales en el año es de: $"<<Totven<<endl;
	cout<<"A cada empleado le corresponde: $"<<bonemp;
	return 0;
}

