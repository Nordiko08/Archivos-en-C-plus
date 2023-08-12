#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float capital, razon, plazo, interes,Aux;
	
	cout<<"Ingrese el capital solicitado"<<endl;
	cin>>capital;
	cout<<"Ingrese Razon(taza anual)"<<endl;
	cin>>razon;
	cout<<"Ingrese plazo a pagar(cantidad de meses)"<<endl;
	cin>>plazo;
	
	interes = (capital * razon * plazo) / (100*12);
	Aux = round((capital + interes) / plazo);
	
	cout<<"El valor de la cuota es de: "<<Aux<<"$";
	return 0;
}

