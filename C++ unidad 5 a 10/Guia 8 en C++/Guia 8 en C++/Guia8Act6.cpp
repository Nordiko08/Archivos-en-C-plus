/*Se desea realizar un informe con las cantidades de multas por exceso de velocidad que se labran
en el país durante un mes.
Se cuenta con la información que envían todos los municipios: código de provincia y cantidad de
multas. Un código de provincia igual a 99 indica el fin de datos.
Informe:
Nombre de la Provincia Cantidad de multas
xxxxxxxxxxxxxxxxxxxx xxxxx
xxxxxxxxxxxxxxxxxxxx xxxxx
Total de multas: xxxxx
Utilice el archivo creado en el ejercicio anterior para obtener los nombres de las provincias*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream Arch;
	int multas;
	int codigo;
	int cantmultas=0;
	int cant[24]={0};
	string datos[24];
	int aux;
	Arch.open("PROVINCIAS.txt");
	if(Arch.fail()){
		cout<<"Error";
	} else {
		Arch>>aux;
		while(!Arch.eof()){
			Arch.ignore();
			getline(Arch,datos[aux]);
			Arch>>aux;
		}
	}
	Arch.close();
	cout<<"Ingrese el codigo de provincia: ";
	cin>>codigo;
	while(codigo!=99){
		cout<<"Ingrese cantidad de multas: ";
		cin>>multas;
		cant[codigo]+=multas;
		cantmultas+=multas;
		cout<<"Ingrese el codigo de provincia: ";
		cin>>codigo;
	}
	cout<<endl;
	cout<<"Nombre de provincias        cantidad de multas"<<endl;
	for(int i=0; i<24; i++){
		cout<<datos[i]<<"            "<<cant[i]<<endl;
	}
	cout<<endl;
	cout<<"total de multas: "<<cantmultas;
	return 0;
}

