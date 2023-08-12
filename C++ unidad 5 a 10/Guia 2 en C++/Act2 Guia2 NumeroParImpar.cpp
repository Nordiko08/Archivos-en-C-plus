#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int nNro;
	float nAux;
	cout<<"Ingrese un numero entero"<<endl;
	cin>>nNro;
	
	if (nNro > 0) {
		cout<<"El numero es positivo";
	} else if(nNro<0){
		cout<<"El numero es negativo";
	} else {
		cout<<"El numero es cero";
	}
	nAux= trunc(nNro/2) * 2;
	
	if (nNro == nAux) {
		cout<<"\nEl numero es par";
	} else {
		cout<<"\nEl numero es impar";
	}
	
	//nAux = nNro % 5;
	//nAux2 = nNro % 3;
	
	if (nNro % 5 == 0 && nNro % 3 == 0 ) {
		cout<<"\nEl numero es multiplo de 3 y 5 a la vez";
	}
	return 0;
}

