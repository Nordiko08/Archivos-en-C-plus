#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Alto;
	int Largo;
	float Cant;
	
	cout<<"Ingresa alto de la pared en metros"<<endl;
	cin>>Alto;
	cout<<"Ingresar largo de la pared en metros"<<endl;
	cin>>Largo;
	
	Cant = (Alto * Largo) * 0.05;
	
	cout<<"Se necesitaran "<<Cant<<" m3 de arena";
	return 0;
}

