#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[10];
	int i;
	
	for(i=0; i<10; i++){
		cout<<"Ingrese un numero: ";
		cin>>numeros[i];
	}
	
	for(i=10; i>0; i--){
		cout<<"\n"<<numeros[i]<<endl;
	}
	
	return 0;
}

