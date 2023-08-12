#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int B5, B10, B20, B50, B100, Tot;
	int B5a, B10a, B20a, B50a, B100a;
	cout<<"Ingrese cantidad de billetes de 5$"<<endl;
	cin>>B5;
	cout<<"Ingrese cantidad de billetes de 10$"<<endl;
	cin>>B10;
	cout<<"Ingrese cantidad de billetes de 20$"<<endl;
	cin>>B20;
	cout<<"Ingrese cantidad de billetes de 50$"<<endl;
	cin>>B50;
	cout<<"Ingrese cantidad de billetes de 100$"<<endl;
	cin>>B100;
	
	B5a = B5 * 5;
	B10a = B10 * 10;
	B20a = B20 * 20;
	B50a = B50 * 50;
	B100a = B100 * 100;
	
	Tot = B5a+B10a+B20a+B50a+B100a;
	
	cout<<"El total de billetes ingresados es de: "<<Tot<<"$";
	return 0;
}

