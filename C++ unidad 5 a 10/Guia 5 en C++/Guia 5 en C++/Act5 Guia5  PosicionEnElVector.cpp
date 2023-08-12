#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N;///Cantidad de elementos
	int Num[100];///Numero a ingresar
	
	cout<<"Ingrese cantidad de elementos a guardar: ";
	cin>>N;
	for(int i=0; i<N; i++){
		cout<<"Ingrese un numero: ";
		cin>>Num[i];
	}
	cout<<"\n\nPosicion "<<" "<<"Numero guardado";
	for(int i=0; i<N; i++){
		
		cout<<"\n"<<i<<"\t\t"<<Num[i];
	}
	
	
	return 0;
}

