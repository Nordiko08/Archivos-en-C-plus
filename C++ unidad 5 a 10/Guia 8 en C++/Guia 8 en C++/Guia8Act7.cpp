/*Se desea llenar una matriz de N x M con números al azar menores a 1000. Los valores de N y M
se ingresan como primeros datos. Luego generar un archivo MATRIZ.TXT donde se guarde: N, M,
luego los valores de cada una de las celdas recorriendo la matriz por filas y columnas. Por último la
suma de todos los valores. Todos los valores se escriben separados por espacios en blanco.*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	ofstream archivo;
	int numrandom[50][50];
	int nfila;
	int ncolumna;
	
	archivo.open("MATRIZ.txt");
	if(archivo.fail()){
		cout<<"El archivo no existe ponte las pilas";
	}
	else {
		cout<<"Ingrese el numero de filas: ";
		cin>>nfila;
		cout<<"Ingrese el numero de columnas: ";
		cin>>ncolumna;
		for(int i=0;i<nfila;i++){
			for(int j=0;j<ncolumna;j++){
				numrandom[i][j]=rand()%1001;
			}
		}
		
		for(int i=0;i<nfila;i++){
			for(int j=0;j<ncolumna;j++){
				archivo<<numrandom[i][j]<<" ";
			}
			archivo<<endl;
		}
		for(int i=0;i<nfila;i++){
			for(int j=0;j<ncolumna;j++){
				cout<<numrandom[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	archivo.close();
	return 0;
}

