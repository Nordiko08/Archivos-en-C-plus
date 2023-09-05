#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int mm;///Cantidad de milimetros
	int cont_lluvia[6]={0};
	string ciudad;///nombre de ciudad actual
	int cont=0;///cantidad de lluvias
	int cant_max=0;///maxima cantidad llovida
	string auxciudad;///auxiliar para saber en que ciudad llovio mas
	
	cout<<"Ingresar cantidad de milimetros llovidos: ";
	cin>>mm;
	while (mm != 0){
		cin.get();
		cout<<"Ingresar nombre de la ciudad: ";
		getline(cin,ciudad);
		if (mm > 0 && mm < 100){
			cont_lluvia[0]++;
		} else if(mm > 100 && mm < 200){
			cont_lluvia[1]++;
		} else if(mm > 200 && mm < 300){
			cont_lluvia[2]++;
		} else if(mm > 300 && mm < 400){
			cont_lluvia[3]++;
		} else if(mm > 400 && mm < 500){
			cont_lluvia[4]++;
		} else if(mm > 500){
			cont_lluvia[5]++;
		}
		cont++;
		
		if(cant_max<mm){
			cant_max=mm;
			auxciudad=ciudad;
		}
		cout<<"Ingresar cantidad de milimetros llovidos: ";
		cin>>mm;
	}
	cout<<"\nCANTIDAD DE LLUVIAS DE 0 A 100: "<<cont_lluvia[0];
	cout<<"\nCANTIDAD DE LLUVIAS DE 100 A 200: "<<cont_lluvia[1];
	cout<<"\nCANTIDAD DE LLUVIAS DE 200 A 300: "<<cont_lluvia[2];
	cout<<"\nCANTIDAD DE LLUVIAS DE 300 A 400: "<<cont_lluvia[3];
	cout<<"\nCANTIDAD DE LLUVIAS DE 400 A 500: "<<cont_lluvia[4];
	cout<<"\nCANTIDAD DE LLUVIAS DE 500 O MAS: "<<cont_lluvia[5];
	cout<<"\nLA CANTIDAD DE LLUVIAS FUE DE: "<<cont;
	cout<<"\nCANTIDAD MAXIMA LLOVIDA: "<<cant_max;
	cout<<"\nCIUDAD EN LA QUE LLOVIO MAS: "<<auxciudad;
	return 0;
}

