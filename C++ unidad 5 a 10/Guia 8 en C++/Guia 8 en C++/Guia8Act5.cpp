#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	ofstream Arch;
	string nCiudad;
	int Cant;
	Cant=0;
	Arch.open("PROVINCIAS.txt");
	if(Arch.fail()){
		cout<<"ERROR";
	} else{
		cout<<"Ingrese el nombre de la provincia"<<" "<<Cant<<" : ";
		getline(cin,nCiudad);
		while(Cant!=24){
			Arch<<Cant<<" "<<nCiudad<<endl;
			Cant++;
			cout<<"Ingrese el nombre de la provincia"<<" "<<Cant<<" : ";
			getline(cin,nCiudad);
		}
	}
	Arch.close();
	return 0;
}

