#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string NyA, Aux;//Nombre y Apellido
	int Cont;//Contador
	Cont=0; Aux="";
	
	getline(cin, NyA);
	
	while(NyA!=Aux){
		Aux=NyA;
		Cont++;
		cin.get();
		getline(cin, NyA);
	}
	
	cout<<"\nSe ingresaron "<<Cont<<" nombres";
	
	return 0;
}

