#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int FechaN, FechaAct, EdadAct;
	cout<<"Escribir el año actual"<<endl;
	cin>>FechaAct;
	cout<<"Escrbir el año de nacimiento"<<endl;
	cin>>FechaN;
	
	EdadAct= FechaAct - FechaN;
	
	cout<<"Su edad actual es: "<<EdadAct;
	return 0;
}

