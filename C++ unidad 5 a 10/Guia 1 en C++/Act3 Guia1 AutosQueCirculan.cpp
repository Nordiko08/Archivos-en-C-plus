#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	string patente;
	int hora1, hora2, hAux, hmin, hseg;
	int min1, min2, minAux, minseg;
	int seg1, seg2, segAux, seg;
	float segm, segh;
	float Aux;
	
	cout<<"Ingrese la patente del vehiculo"<<endl;
	cin>>patente;
	cout<<"Ingrese la hora en que paso por el primer puesto"<<endl;
	cin>>hora1;
	cout<<"Ingrese los minutos en el que paso por el primer puesto"<<endl;
	cin>>min1;
	cout<<"Ingrese los segundos en el que paso por el primer puesto"<<endl;
	cin>>seg1;
	cout<<"Ingrese la hora en que paso por el segundo puesto"<<endl;
	cin>>hora2;
	cout<<"Ingrese los minutos en el que paso por el segundo puesto"<<endl;
	cin>>min2;
	cout<<"Ingrese los segundos en el que paso por el segundo puesto"<<endl;
	cin>>seg2;
	
	hAux = hora1 - hora2;//resta la hora del puesto 1 y 2 para determinar el tiempo
	minAux = min1 - min2;//resta los minutos del puesto 1 y 2 para determinar el tiempo
	segAux = seg1 - seg2;//resta los segundos del puesto 1 y 2 para determinar el tiempo
	hmin = hAux * 60;//multiplica la hora para sacar min
	hseg = hmin * 60;//multiplica min para sacar seg
	minseg = minAux * 60;//multiplica min para sacar seg
	seg = hseg + minseg + segAux;//suma la cantidad de seg total
	segm = seg/60;//divide seg para sacar cant de min
	segh = segm/60;//divide min para sacar cant de hs
	
	Aux = round(-7.5 / segh);//calculo de distancia entre tiempo en hs para alla velocidad
	
	cout<<"El auto con la patente: "<<patente<<" recorrio el pueblo a una velocidad de "<<Aux<<" km/h";
	return 0;
}

