#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float PAN;
	float MGIN, MTRAU, MPED;
	cout<<"Ingrese el monto del presupuesto anual"<<endl;
	cin>>PAN;
	
	MGIN = PAN * 0.4;
	MTRAU = PAN * 0.3;
	MPED = PAN * 0.3;
	
	cout<<"Ginecologia recibira: "<<MGIN<<"$"<<" del presupuesto"<<endl;
	cout<<"Traumatologia recibira: "<<MTRAU<<"$"<<" del presupuesto"<<endl;
	cout<<"Pediatria recibira: "<<MPED<<"$"<<" del presupuesto";
	return 0;
}

