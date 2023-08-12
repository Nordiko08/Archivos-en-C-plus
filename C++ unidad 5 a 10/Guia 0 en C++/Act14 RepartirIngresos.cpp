#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float sueldo, ing, nEdad1, nEdad2, nEdad3, ntot;
	float tot1, tot2, tot3;
	
	cout<<"Ingresar sueldo"<<endl;
	cin>>sueldo;
	cout<<"Ingresar la edad del primer nieto"<<endl;
	cin>>nEdad1;
	cout<<"Ingresar la edad del segundo nieto"<<endl;
	cin>>nEdad2;
	cout<<"Ingresar la edad del tercer nieto"<<endl;
	cin>>nEdad3;
	
	ing = sueldo * 0.15;
	ntot = nEdad1+nEdad2+nEdad3;
	tot1 = round(ing*nEdad1/ntot);
	tot2 = round(ing*nEdad2/ntot);
	tot3 = round(ing*nEdad3/ntot);
	
	cout<<"Los ingresos que corresponden repartir son de: "<<ing<<"$"<<endl;
	cout<<"Al primer nietole corresponde: "<<tot1<<"$"<<endl;
	cout<<"Al segundo nieto le corresponde: "<<tot2<<"$"<<endl;
	cout<<"Al tercer nieto le corresponde: "<<tot3<<"$"<<endl;
	return 0;
}

