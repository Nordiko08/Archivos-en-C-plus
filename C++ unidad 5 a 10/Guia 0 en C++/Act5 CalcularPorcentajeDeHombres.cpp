#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int CantM, CantG, CantH, PorcentajeH, PorcentajeM;
	
	cout<<"Ingrese cantidad de mujeres"<<endl;
	cin>>CantM;
	cout<<"Ingrese cantidad total de habitantes"<<endl;
	cin>>CantG;
	
	CantH = CantG - CantM;
	
	PorcentajeH = CantH * 100 / CantG;
	PorcentajeM = CantM * 100 / CantG;
	
	cout<<"El porcentaje de Hombres es de: "<<PorcentajeH<<"%"<<endl;
	cout<<"El porcentaje de Mujeres es de: "<<PorcentajeM<<"%";
	return 0;
}

