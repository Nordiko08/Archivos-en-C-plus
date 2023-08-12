#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float Peso;
	float Dolar, montoDolar;
	float Real, montoReal;
	float Euro, montoEuro;
	
	cout<<"Ingrese monto en pesos"<<endl;
	cin>>Peso;
	cout<<"Ingresar cotizacion del Dolar"<<endl;
	cin>>Dolar;
	cout<<"Ingresar cotizacion del Euro"<<endl;
	cin>>Euro;
	cout<<"Ingresar cotizacion del Real"<<endl;
	cin>>Real;
	
	montoDolar = Peso * Dolar;
	montoEuro = Peso * Euro;
	montoReal = Peso * Real;
	
	cout<<"El equivalente de "<<Peso<<"$ pesos es de: "<<montoDolar<<" USD"<<endl;
	cout<<"El equivalente de "<<Peso<<"$ pesos es de: "<<montoEuro<<" Euros"<<endl;
	cout<<"El equivalente de "<<Peso<<"$ pesos es de: "<<montoReal<<" Reales";
	return 0;
}

