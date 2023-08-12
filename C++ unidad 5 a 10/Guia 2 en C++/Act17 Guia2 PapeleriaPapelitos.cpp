#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int nPapel;//N Papel
	string tPapel;//Tipo de papel
	int colorPapel;//Numero del papel
	string cPapel;//Nombre del color del papel
	int Cant;//Cantidad de rollos vendidos
	int Prec;//Precio de papel
	string Color;//Color del papel a comprar
	float Desc;//Descuento
	float Tot;//Total
	float TotAbonar;//Total con descuento aplicado
	float Aux;
	
	 Desc = 0; Tot = 0; TotAbonar = 0;
	
	
	cout<<"Ingrese tipo de papel";
	cout<<"\n\n1. Blanco 80 gramos";
	cout<<"\n2. Blanco 70 gramos";
	cout<<"\n3. Papel prensa";
	cout<<"\n4. ilustracion color (blanco, azul, rojo)"<<endl<<endl;
	cin>>nPapel;
	
	switch(nPapel){
	case 1:
	tPapel = "Blanco 80 gramos";
	cout<<"\nIngrese el precio de "<<tPapel<<" por rollo: ";
	cin>>Prec;
	cout<<"Ingrese cantidad de rollos a comprar: ";
	cin>>Cant;
	Tot=Prec*Cant;
	if (Cant>10){
		Desc = Tot*0.15;
		TotAbonar=Tot-Desc;
	} else {
		TotAbonar=Tot-Desc;
	}
	break;
	case 2:
	tPapel = "Blanco 70 gramos";
	cout<<"\nIngrese el precio de "<<tPapel<<" por rollo: ";
	cin>>Prec;
	cout<<"Ingrese cantidad de rollos a comprar: ";
	cin>>Cant;
	Tot=Prec*Cant;
	if (Cant>10){
		Desc = Tot*0.15;
		TotAbonar=Tot-Desc;
	} else {
		TotAbonar=Tot;
	}
	break;
	case 3:
	tPapel = "Papel prensa";
	cout<<"\nIngrese el precio de "<<tPapel<<" por rollo: ";
	cin>>Prec;
	cout<<"Ingrese cantidad de rollos a comprar: ";
	cin>>Cant;
	Tot=Prec*Cant;
	if (Cant>10){
		Desc = Tot*0.15;
		TotAbonar= Tot-Desc;
	} else {
		TotAbonar = Tot;
	}
	break;
	case 4:
	tPapel = "Ilustracion";
	cout<<"\nIngrese el precio de "<<tPapel<<" por rollo: ";
	cin>>Prec;
	cout<<"Ingrese cantidad de rollos a comprar: ";
	cin>>Cant;
	
	Tot = Prec * Cant;
	
	cout<<"Ingrese el color del papel";
	cout<<"\n1. Blanco";
	cout<<"\n2. Azul";
	cout<<"\n3. Rojo"<<endl<<endl;
	cin>>colorPapel;
	switch(colorPapel){
	case 1: cPapel= "Ilustracion Blanco";
	break;
	case 2: cPapel= "Ilustracion Azul";
	Aux = Tot*0.5;
	Tot = Tot+Aux;
	break;
	case 3: cPapel = "Ilustracion Rojo";
	Aux = Tot*0.5;
	Tot= Tot+Aux;
	break;
	}
	if(Cant>10) {
		Desc = Tot*0.15;
		TotAbonar = Tot - Desc;
	} else {
		TotAbonar = Tot;
	}
	}
	cout<<setfill('.');
	cout<<"\n"<<setw(30)<<"PEPELERIA PAPELITOS"<<setw(30);
	cout<<"\n\nTipo de papel: "<<tPapel;
	cout<<"\nPrecio de ref: $"<<Prec;
	cout<<"\nDescuento: $"<<Desc<<"\tTotal: $"<<Tot;
	cout<<"\nTotal a Abonar: $"<<TotAbonar;
	return 0;
}

