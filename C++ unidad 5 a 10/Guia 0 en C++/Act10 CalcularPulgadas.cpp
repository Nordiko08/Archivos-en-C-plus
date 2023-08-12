#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float pulgadas, altoP, Aux;
	cout<<"Ingrese la cantidad de pulgadas de su TV"<<endl;
	cin>>Aux;
	
	pulgadas = Aux * 2.21;
	altoP = Aux * 1.245;
	
	cout<<"El ancho de su Tv es de: "<<pulgadas<<" cm"<<endl;
	cout<<"El alto de su Tv es de: "<<altoP<<" cm";
	return 0;
}

