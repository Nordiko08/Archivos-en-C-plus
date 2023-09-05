#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int matriz[4][4];
	int temp;
	int i;
	int j;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<"\nIngrese el numero de la matriz ["<<i<<"] ["<<j<<"] : ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<"\n\tLos numeros de la matriz original son"<<endl<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<"\t"<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nIntroduce el numero de fila a intercambiar (1 a 4): ";
	cin>>i;
	cout<<"Introduce el numero de columna a intercambiar(1 a 4): ";
	cin>>j;
	i--;
	j--;
	for(int k=0; k<4; k++){
		temp = matriz[i][k];
		matriz[i][k]=matriz[j][k];
		matriz[j][k]=temp;
	}
	
	cout<<"La nueva matriz es "<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}

