/*El club del ejercicio anterior decide realizar un control estadístico de la cantidad de veces que han
estado detenidos sus integrantes. Para ello use el archivo BARRAS.TXT generado en el ejercicio
anterior.
Informar de acuerdo al siguiente informe:
Cantidad de Detenciones Cantidad de integrantes
1 XXXX
2 – 4 XXXX
5 – 10 XXXX
más de 10 XXXX
Cantidad de integrantes de la barra: XXXX
Desean conocer además el apodo del integrante que más detenciones ostenta.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream Arch;
	string Apodo;
	int Cant;
	int Cont1,Cont2a4,Cont5a10,Contmas10;
	Cont1=Cont2a4=Cont5a10=Contmas10=0;
	
	Arch.open("BARRAS.txt");
	if (Arch.fail()){
		cout<<"Error";
	}
	else{
		getline(Arch,Apodo,'|');
		while(!Arch.eof()){
			Arch >> Cant;
			Arch.ignore();
			if(Cant<2){
				Cont1++;
			} else if(Cant<5){
				Cont2a4++;
			} else if(Cant<11){
				Cont5a10++;
			} else{
				Contmas10++;
			}
			getline(Arch,Apodo,'|');
		}
		
	}
	Arch.close();
	cout<<"Cantidad de detenciones    Cantidad de Integrantes"<<endl;
	cout<<"          1                "<<Cont1<<endl;
	cout<<"       de 2 a 4            "<<Cont2a4<<endl;
	cout<<"       de 5 a 10           "<<Cont5a10<<endl;
	cout<<"       mas de 10           "<<Contmas10<<endl;
	return 0;
}

