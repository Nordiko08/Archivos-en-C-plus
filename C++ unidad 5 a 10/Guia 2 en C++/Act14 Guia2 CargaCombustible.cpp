#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	string nNComb;
	int Comb;
	int Money;
	int Puntos;
	int Aux;
	Puntos=0;
	
	cout<<"Ingrese el numero de combustible que desea cargar";
	cout<<"\n1.INFINIA";
	cout<<"\n2.INFINIA DIESEL";
	cout<<"\n3.SUPER";
	cout<<"\n4.ULTRADIESEL";
	cout<<"\n5.DIESEL 500"<<endl;
	cin>>Comb;
	cout<<"Ingrese la cantidad de dinero a cargar"<<endl;
	cin>>Money;
	
	switch(Comb){
	case 1: cout<<"\n\nSe cargo "<<Money<<" de INFINIA";
	Aux = Money-trunc(Money%1000);
	Puntos = (Aux/1000)*80;
	if (Money>3500){
		Puntos=Puntos*2;
	}
	cout<<"\nSE SUMARON "<<Puntos<<" PUNTOS POR LA CARGA DE INFINIA";
	break;
	case 2: cout<<"\n\nSe cargo "<<Money<<" de INFINIA DISEL";
	Aux = Money-trunc(Money%1000);
	Puntos = (Aux/1000)*75;
	if (Money>3500){
		Puntos=Puntos*2;
	}
	cout<<"\nSE SUMARON "<<Puntos<<" PUNTOS POR LA CARGA DE INFINIA DIESEL";
	break;
	case 3: cout<<"\n\nSe cargo "<<Money<<" de SUPER";
	Aux = Money-trunc(Money%1000);
	Puntos = (Aux/1000)*40;
	if (Money>3500){
		Puntos=Puntos*2;
	}
	cout<<"\nSE SUMARON "<<Puntos<<" PUNTOS POR LA CARGA DE SUPER";
	break;
	case 4: cout<<"\n\nSe cargo "<<Money<<" de ULTRADIESEL";
	Aux = Money-trunc(Money%1000);
	Puntos = (Aux/1000)*40;
	if (Money>3500){
		Puntos=Puntos*2;
	}
	cout<<"\nSE SUMARON "<<Puntos<<" PUNTOS POR LA CARGA DE ULTRADIESEL";
	break;
	case 5: cout<<"\n\nSe cargo "<<Money<<" de DISEL 500";
	Aux = Money-trunc(Money%1000);
	Puntos = (Aux/1000)*35;
	if (Money>3500){
		Puntos=Puntos*2;
	}
	cout<<"\nSE SUMARON "<<Puntos<<" PUNTOS POR LA CARGA DE DIESEL 500";
	break;
	}
	return 0;
}

