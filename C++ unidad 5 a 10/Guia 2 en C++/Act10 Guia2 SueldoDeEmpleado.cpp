#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string NYA;//Nombre y apellido del empleado
	int Cat;//Categoria del empleado de 1 a 4
	int Anio;//Antiguedad del empleado
	int Tot;//Sueldo a cobrar
	int Aux, AuxCat;
	
	cout<<"Ingrese el nombre y apellido del empleado: ";
	getline(cin, NYA);
	cout<<"Ingrese la categoria del empleado (1, 2, 3 o 4): ";
	cin>>Cat;
	cout<<"Ingrese la antiguedad del empleado (años en la empresa): ";
	cin>>Anio;
	AuxCat = Cat;
	
	switch(Cat){
	case 1: Cat = 60000;
	break;
	case 2: Cat = 50000;
	break;
	case 3: Cat = 40000;
	break;
	case 5: Cat = 30000;
	default: Cat = 0;
	}
	
	if (Anio>=0 && Anio<=10){
		Aux = Cat*0.2;
	} else if (Anio>=11 && Anio<=15){
		Aux = Cat*0.5;
	} else if(Anio>=16 && Anio<=20){
		Aux = Cat*0.8;
	} else {
		Aux = Cat*1;
	}
	
	Tot = Cat+Aux;
	
	cout<<"\nApellido y Nombre: "<<NYA;
	cout<<"\nCategoria: "<<AuxCat<<"\tSueldo Basico: "<<Cat;
	cout<<"\nAntiguedad: "<<Anio<<" años"<<"\tMonto Antiguedad: $"<<Aux;
	cout<<"\nSueldo Total: $"<<Tot;
	return 0;
}

