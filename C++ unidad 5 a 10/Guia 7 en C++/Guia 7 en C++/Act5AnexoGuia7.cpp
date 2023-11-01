/*Realice una función que ordene los elementos de un vector, la función recibe de parámetros
el vector y la cantidad de elementos del mismo.*/
#include <iostream>
void ordenarVector(int vec[]);
using namespace std;
int main(int argc, char *argv[]) {
	int vector[]={2,5,6,3,4,1};
	cout<<"Vector antes de ordenar"<<endl;
	for(int i=0;i<6;i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<endl;
	cout<<"El vector ordenado es "<<endl;
	
	ordenarVector(vector);
}
void ordenarVector(int vec[]){
	int Aux;
	for (int i=0; i<(6-1);i++){
		for(int j=i+1; j<6; j++){
		if (vec[i]>vec[j]){
			Aux=vec[i];
			vec[i]=vec[j];
			vec[j]=Aux;
		}	
		}
	}
	for(int i=0; i<6; i++){
		cout<<vec[i]<<" ";
	}
}
