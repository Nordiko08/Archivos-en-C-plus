#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float DatosAlumn[500][5];///[0]DNI [1]NOTA1 [2]NOTA2 [3]NOTA3 [4]PROMEDIO
	int N;///Cantidad de alumnos a ingresar
	int aux;
	int pos;
	
	cout<<"Ingrese la cantidad de alumnos a cargar: ";
	cin>>N;
	for(int i=0; i<N; i++){
		cout<<"Ingrese el DNI del alumno: ";
		cin>>DatosAlumn[i][0];
		cout<<"Ingrese la nota 1 del alumno: ";
		cin>>DatosAlumn[i][1];
		cout<<"Ingrese la nota 2 del alumno: ";
		cin>>DatosAlumn[i][2];
		cout<<"Ingrese la nota 3 del alumno: ";
		cin>>DatosAlumn[i][3];
		DatosAlumn[i][4]=(DatosAlumn[i][1]+DatosAlumn[i][2]+DatosAlumn[i][3])/(3);
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++) {
			pos = i;
			aux = DatosAlumn[i][4];
			while((pos>0)&&(DatosAlumn[pos-1][4]>aux)){
				DatosAlumn[pos][j]=DatosAlumn[pos-1][j];
				pos--;
		}
			DatosAlumn[pos][4]=aux;
		}
	}
	
	cout<<"DOCUMENTO\tNOTA 1\tNOTA 2\tNOTA 3\tPROMEDIO"<<endl;
	for(int i=0; i<N; i++){
		for(int j=0; j<5; j++){
			cout<<DatosAlumn[i][j]<<"    ";
		}
		cout<<endl;
	}
	
	return 0;
}

