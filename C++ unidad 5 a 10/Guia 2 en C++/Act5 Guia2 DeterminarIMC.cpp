#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float IMC;
	float peso;
	float Est;
	
	cout<<"Ingrese el peso de la persona en KGs"<<endl;
	cin>>peso;
	cout<<"Ingrese la altura de la persona en MTs"<<endl;
	cin>>Est;
	
	IMC = peso/pow(Est,2);
	
	if (IMC<=18.5){
		cout<<"\n\nDebajo de lo normal";
	} else if (IMC > 18.5 && IMC<=25){
		cout<<"\n\nNormal";
	} else if (IMC>25 && IMC<=30){
		cout<<"\n\nSobrepeso";
	} else {
		cout<<"\n\nObecidad";
	}
	return 0;
}

