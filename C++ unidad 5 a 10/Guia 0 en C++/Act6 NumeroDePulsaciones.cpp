#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Edad, nPulsaciones;
	cout<<"Escribir su edad"<<endl;
	cin>>Edad;
	
	nPulsaciones = ((220-Edad)/10);
	
	cout<<"Su numero de pulsaciones debe ser de: "<<nPulsaciones;
	return 0;
}

