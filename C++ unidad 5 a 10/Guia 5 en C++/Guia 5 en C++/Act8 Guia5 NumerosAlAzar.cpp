#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N;///Cantidad de numeros a ingresar
	int C;///Tamanio de hasta donde llegaran los numeros al azar entre 0 y C
	int num;
	
	cout<<"Ingrese el valor de N: ";
	cin>>N;
	cout<<"Ingrese el valor de C: ";
	cin>>C;
	
	int* vector = new int[N];
	srand(time(NULL));
	vector[0] = rand()%C+1;
	
	for (int i=1; i<N; i++){
		num = rand()%C+1;
		if(num > vector[i - 1] && num <= C - (N - i)) {
			vector[i] = num;
		} else {
			i--;
		}
	}
	cout << "El vector generado es: "<<endl;
	for(int i=0; i<N; i++){
		cout<<vector[i]<<endl;
	}
	cout<<endl;
	return 0;
}

