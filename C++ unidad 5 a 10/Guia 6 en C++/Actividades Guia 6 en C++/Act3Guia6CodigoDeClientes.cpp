#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float clientes[500][2];///[0]codigo de cliente [1]saldo del cliente
	int N;///Cantidad de clientes a cargar
	int DATO;
	string band="F";
	int cont=0;
	int i=0;
	
	cout<<"Ingrese la cantidad de clientes a cargar: ";
	cin>>N;
	cout<<endl;
	for(int i=0; i<N; i++){
		cout<<"Ingrese codigo de cliente: ";
		cin>>clientes[i][0];
		cout<<"Ingrese saldo del cliente: ";
		cin>>clientes[i][1];
		cont++;
		cout<<endl;
	}
	
	cout<<"Ingrese codigo de cliente a buscar: ";
	cin>>DATO;
	while ((band=="F")&&(i<N)){
		if(clientes[i][0]==DATO){
			band="V";
		}
		i++;
	}
	cout<<endl;
	if(band=="F"){
		cout<<"CLIENTE INEXISTENTE";
	} else if(band=="V"){
		cout<<"El saldo del cliente es :"<<clientes[i-1][1];
	}
	return 0;
}

