#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int matriz[3][3];///matrix de 3x3
	cout << "Ingrese los valores de la matriz: "<<endl;
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin >> matriz[i][j];
		}
	}
	int fila;
	cout<<"Ingrese el numero de fila que desea mostrar (1-3): ";
	cin>>fila;
	
	cout<<"Los valores de la fila "<<fila<<" son: ";
	for(int j=0; j<3; j++){
		cout<<matriz[fila - 1][j]<<" ";
	}
	cout << endl;
	return 0;
}

