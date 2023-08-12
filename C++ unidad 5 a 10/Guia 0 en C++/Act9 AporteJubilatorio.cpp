#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float SueldoNeto, AporteJubilatorio, SueldoL, Aux;
	cout<<"Ingrese su sueldo neto"<<endl;
	cin>>SueldoNeto;
	cout<<"Ingrese el porcentaje de su aporte jubilatorio"<<endl;
	cin>>AporteJubilatorio;
	
	Aux = SueldoNeto*AporteJubilatorio/100;
	SueldoL = SueldoNeto - Aux;
	
	cout<<"Su sueldo liquido es de: "<<SueldoL<<"$";
	return 0;
}

