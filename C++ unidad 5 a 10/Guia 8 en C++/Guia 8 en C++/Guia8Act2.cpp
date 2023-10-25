/*Tome el archivo generado en el ejercicio anterior, páselo a una matriz de 2 columnas y ordene la
matriz por la columna donde estén los valores de y.
Utilice un función para ordenar la matriz;*/
#include <iostream>
#include <fstream>
using namespace std;
void Ordenar(int Mat[][2],int Tam);
int main(int argc, char *argv[]) {
	int nX;
	int nY;
	int Cuantos;
	int Matriz[1000][2];
	ifstream Arch;
	Arch.open("Ejemplo.txt");
	if (Arch.fail()){
		cout<<"Error";
	}
	else {
		Cuantos=0;
		Arch >> nX;
		while (!Arch.eof()){
			Arch >> nY;
			Matriz[Cuantos][0]=nX;
			Matriz[Cuantos][1]=nY;
			Cuantos++;
			Arch >> nX;
		}
	}
	Ordenar(Matriz, Cuantos);
	for (int nI=0; nI<Cuantos; nI++){
		cout<< Matriz[nI][0] << " " << Matriz[nI][1]<<endl;
	}
	Arch.close();
	return 0;
}

void Ordenar(int Mat[][2], int Tam){
	int nAux;
	for(int nI=0;nI<Tam-1;nI++){
		for(int nJ=nI+1; nJ<Tam; nJ++){
			if (Mat[nI][1]>Mat[nJ][1]){
				for(int nK=0;nK<2;nK++){nAux=Mat[nI][nK];
				Mat[nI][nK]=Mat[nJ][nK];
				Mat[nJ][nK]=nAux;
				}
			}
		}
	}
}

