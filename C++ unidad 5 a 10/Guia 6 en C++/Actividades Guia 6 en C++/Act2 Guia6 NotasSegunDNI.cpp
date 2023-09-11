#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int DNI[25][1];///DNI DE ALUMNOS
	int NOTA[25][3];///[0]NOTA1 [1]NOTA2 [2]NOTA3
	int Promedio[25][1];///Promedio de las 3 notas de cada alumno
	int N;///Cantidad de alumnos a ingresar
	string band="F";
	int DATO;
	int i=0;
	
	cout<<"Ingrese la cantidad de alumnos a buscar: ";
	cin>>N;
	for (int i=0; i<N; i++){
		cout<<"Ingrese el numero de documento del alumno "<<i+1<<" :";
		cin>>DNI[i][0];
		for(int j=0; j<N; j++){
			cout<<"Ingrese la nota 1 del alumno "<<i+1<<" :";
			cin>>NOTA[j][0];
			cout<<"Ingrese la nota 2 del alumno "<<i+1<<" :";
			cin>>NOTA[j][1];
			cout<<"Ingrese la nota 3 del alumno "<<i+1<<" :";
			cin>>NOTA[j][2];
			Promedio[j][0]=(NOTA[i][0]+NOTA[i][1]+NOTA[i][2])/3;
			cout<<endl;
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	cout<<"Ingrese el numero de documento del alumno a buscar: ";
	cin>>DATO;
	while ((band=="F")&&(i<N)){
		if(DNI[i][0]==DATO){
			band="V";
		}
		i++;
	}
	cout<<endl;
	if(band=="F"){
		cout<<"El numero de documento ingresado no se fue encontrado ";
	} else if (band=="V"){
		cout<<"El numero de documento del alumno fue encontrado "<<endl;
		cout<<"El promedio del alumno es: "<<Promedio[i-1][0];
	}
	return 0;
}

