#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string Datos[500][3];///[0]NOMBRE Y APELLIDO, [1]DOMICILIO, [2]T.SEXO, 
	int DatosN[500][3];///[0]EDAD DE LA PERSONA [1]DNI DE LA PERSONA [2]ALTURA DE LA PERSONA
	string NYAaux;
	int cont=0;
	int auxAltura=0;
	float promAltura=0;
	
	
	cout<<"Ingrese nombre y apellido de la personas a registrar: ";
	getline(cin, NYAaux);
	while(NYAaux!="zzz"){
		
		Datos[cont][0]=NYAaux;
		cout<<"Ingrese la edad de la persona: ";
		cin>>DatosN[cont][0];
		cout<<"Ingrese numero de DNI: ";
		cin>>DatosN[cont][1];
		cout<<"Ingrese la altura de la persona en CM: ";
		cin>>DatosN[cont][2];
		cout<<"Ingrese el domicilio de la persona: ";
		cin.get();
		getline(cin,Datos[cont][1]);
		cout<<"Ingrese tipo de sexo de la persona: ";
		cin>>Datos[cont][2];
		cout<<"\nIngrese nombre y apellido de la personas a registrar: ";
		cin.get();
		getline(cin, NYAaux);
		cont++;
	}
	for(int i=0; i<cont; i++){
		auxAltura+=DatosN[i][2];
	}
	promAltura=auxAltura/cont;
	
	cout<<"\n\nNOMBRE Y APELLIDO\tDOCUMENTO\tSEXO"<<endl<<endl;
	for(int i=0; i<cont; i++){
		if (promAltura<DatosN[i][2]){
		cout<<"\t"<<Datos[i][0]<<"\t"<<DatosN[i][1]<<"\t"<<Datos[i][2]<<endl;
		}
	}
	return 0;
}

