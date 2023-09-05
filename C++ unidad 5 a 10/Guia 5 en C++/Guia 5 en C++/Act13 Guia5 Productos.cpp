#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int productos[13][2]={0};///[0]CANT TOT VEND [1]IMPORTE TOT
	int nroP;///NUMERO DE PRODUCTO 1-12
	int preUnit;///PRECIO UNITARIO DEL PRODUCTO
	string desc[13][1];///DESCRIPCION DEL PRODUCTO
	int cantVend=0;///CANTIDAD TOTAL VENDIDA
	int importTot;///IMPORTE TOTAL DE LOS PRODUCTOS VENDIDOS
	int minVend=99999;///PRODUCTO CON MENOR CANTIDAD DE VENTAS
	string descMinVend;///DESCRIPCION DEL PRODUCTO CON MENOR CANTIDAD DE VENTAS
	
	cout<<"Ingrese el numero del producto de 1 a 12: ";
	cin>>nroP;
	while(nroP!=0){
		cin.get();
		cout<<"Ingrese la descripcion del producto: ";
		getline(cin,desc[nroP][0]);
		cout<<"Ingrese el precio unitario del producto: ";
		cin>>preUnit;
		cout<<"Cantidad vendida del producto: ";
		cin>>cantVend;
		productos[nroP][0]+=cantVend;
		importTot=preUnit*cantVend;
		productos[nroP][1]+=importTot;
		if(cantVend<minVend){
			minVend=cantVend;
			descMinVend=desc[nroP][0];
			
		}
		cout<<"\nIngrese el numero del producto de 1 a 12: ";
		cin>>nroP;
		
	}
	
	cout<<"\tNRO. DE PRODUCTO\tDESCRIPCION\tCANTIDAD TOTAL VENDIDA\tIMPORTE TOTAL"<<endl;
	for(int i=1;i<=12;i++){
		cout<<"\t"<<i<<"\t\t\t"<<desc[i][0]<<"\t\t"<<productos[i][0]<<"\t\t\t"<<productos[i][1]<<endl;
	}
	
	cout<<"\n\nEL PRODUCTO CON MENOR CANTIDAD DE VENTAS ES: "<<descMinVend;
	return 0;
}

