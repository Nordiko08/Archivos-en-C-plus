#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int cant;
	string nombre[100];

	cout<<"Ingrese los nombres de las personas que compraron el bono:";
	cout<<"\nIngrese cantidad de nombres a ingresar:";
	cin>>cant;
	
	cin.ignore();
	cout<<"\n\nnombre de persona: "<<endl;
	for (int i=0; i<cant; i++)  { 
		
		getline (cin,nombre [i]);
	}



cout<<"nro"<<"\t\t"<<"nombre bono"<<endl;
for (int i=0; i<cant; i++) {
	
	cout<<i+1<<"\t\t"<<nombre[i] << endl;
}
	return 0;
}

