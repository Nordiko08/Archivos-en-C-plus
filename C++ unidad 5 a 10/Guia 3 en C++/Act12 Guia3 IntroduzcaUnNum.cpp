#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;//Introducir numeros
	int Cont;//Contador
	int Acum;//Acumulador
	
	num=0; Cont=0; Acum=0;
	
	do {
		cout<<"Introduzca un numero"<<endl;
		cin>>num;
		Acum+=num;
		Cont++;
	} while (Acum<=100 && Cont<10);
	
	if (Acum>100){
		cout<<"\nLa suma de los numeros es mayor a 100";
	} else {
		cout<<"\nSe han introducido 10 numeros";
	}
	
	cout<<"\n\n"<<Acum;
	cout<<"\n"<<Cont;
	
	return 0;
}

