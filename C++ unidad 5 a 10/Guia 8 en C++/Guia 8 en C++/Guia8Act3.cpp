/*Se necesita generar un archivo con la cantidad de detenciones de los integrantes de las barras
	bravas de un club. El archivo debe contener la información: apodo y la cantidad de veces que estuvo
	detenido.
	El final de datos se determina con apodo igual a ‘ZZZ’.
	Nombre al archivo “BARRAS.TXT”.
	En el archivo se almacena, por renglón, apodo y cantidad de detenciones separados por ‘|’.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	ofstream Arch;
	string Apodo;
	int Cant;
	Arch.open("BARRAS.txt");
	if(Arch.fail()){
		cout<<"Error";
	}
	else {
		cout<<"Ingrese el apodo del barra: ";
		getline(cin,Apodo);
		while(Apodo!="ZZZ"){
			cout<<"Ingrese cantidad de detenciones: ";
			cin>>Cant;
			cin.get();
			Arch << Apodo << " | " <<Cant<<endl;
			cout<<"Ingrese el apodo del barra: ";
			getline(cin,Apodo);
		}
	}
	Arch.close();
	return 0;
}

