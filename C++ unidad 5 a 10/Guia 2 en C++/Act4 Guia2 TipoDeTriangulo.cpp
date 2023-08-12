#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int nLado1;
	int nLado2;
	int nLado3;
	string cMensaje;
	int nPer;
	
	cout<<"Ingrese 1er lado"<<endl;
	cin>>nLado1;
	cout<<"Ingrese 2do lado"<<endl;
	cin>>nLado2;
	cout<<"Ingrese 3er lado"<<endl;
	cin>>nLado3;
	
	if (nLado1==nLado2 && nLado2==nLado3 && nLado3==nLado1) {
		cMensaje="Equilatero";
	} else if(nLado1==nLado3 && nLado1!=nLado2 || 
			  nLado2==nLado3 && nLado3!=nLado1 || 
			  nLado1==nLado2 && nLado1!=nLado3) {
		cMensaje="Isosceles";
	} else {
		cMensaje="Escaleno";
	}
	
	nPer=nLado1+nLado2+nLado3;
	
	cout<<"\nTipo de Triangulo: "<<cMensaje;
	cout<<"\nPerimetro del triangulo: "<<nPer;
	return 0;
}

