#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N;///Cantidad de elementos
	int Num[100][100];///Numero a ingresar
	int codigo_p;///
	
	cout<<"Ingrese cantidad de elementos a guardar: ";
	cin>>N;
	cout<<"\nIngrese posiscion: ";
	cin>>codigo_p;
	for(int i=0; i<N; i++){
		cout<<"Ingrese un numero: ";
		cin>>Num[codigo_p][N];
	}
	cout<<"\n\nPosicion "<<" "<<"Numero guardado";
	for(int i=0; i<N; i++){
		
		cout<<"\n"<<codigo_p<<"\t\t"<<Num[codigo_p][N];
	}
	
	
	return 0;
}
