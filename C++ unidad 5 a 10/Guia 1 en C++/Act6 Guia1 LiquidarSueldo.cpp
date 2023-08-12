#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string NYA, NYA2;
	float SUELD, KM1, KM2, SUELD1, SUELD2, AUX;
	
	cout<<"Ingrese el nombre del chofer 1"<<endl;
	cin>>NYA;
	cout<<"Ingresar los km recorridos de chofer 1"<<endl;
	cin>>KM1;
	cout<<"Ingrese el nombre del chofer 2"<<endl;
	cin>>NYA2;
	cout<<"Ingresar los km recorridos de chofer 2"<<endl;
	cin>>KM2;
	cout<<"Ingrese el monto del sueldo basico"<<endl;
	cin>>SUELD;
	
	SUELD1 = SUELD + (KM1*50);
	SUELD2 = SUELD + (KM2*50);
	AUX = SUELD1 + SUELD2;
	
	cout<<"LIQUIDACION MENSUAL CHOFERES"<<endl;
	cout<<"NOMBRE\tCHOFER 1: "<<NYA<<" TOTAL A COBRAR: "<<SUELD1<<"$"<<endl;
	cout<<"NOMBRE\tCHOFER 2: "<<NYA2<<" TOTAL A COBRAR: "<<SUELD2<<"$"<<endl;
	cout<<"TOTAL GENERAL $"<<AUX;
	
	return 0;
}

