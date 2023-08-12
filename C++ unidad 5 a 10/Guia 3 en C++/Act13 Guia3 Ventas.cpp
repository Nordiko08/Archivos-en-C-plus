#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	float Art1;//Articulo 1
	float Art2;//Articulo 2
	float Art3;//Articulo 3
	float Art4;//Articulo 4
	float Art5;//Articulo 5
	string NyA;//Nombre del cliente
	int Cod1;
	int Cod2;
	int Cod3;//Codigo de articulo
	int Cod4;
	int Cod5;
	float montoVenta;//Monto total de las ventas
	int VentArt1;//Venta total de Art1
	int VentArt2;//Venta total de Art2
	int VentArt3;//Venta total de Art3
	int VentArt4;//Venta total de Art4
	int VentArt5;//Venta total de Art5
	int CantVentas;//Cantidad de ventas realizadas
	string NyAMayor;//Nombre de cliente con monto mayor
	float MayorVenta;//Mayor monto de venta
	float ventaActual;//Compra actual del cliente
	
	Art1=0; Art2=0; Art3=0; Art4=0; Art5=0;Art1=0;
	VentArt1=0; VentArt2=0; VentArt3=0; VentArt4=0; VentArt5=0;
	montoVenta=0; CantVentas=0; MayorVenta=0;
	Cod1=0; Cod2=0; Cod3=0; Cod4=0; Cod5=0;
	
	cout<<"\t\tCOMERCIO"<<endl<<endl;
	cin>>Art1;
	cin>>Art2;
	cin>>Art3;
	cin>>Art4;
	cin>>Art5;
	cout<<"Ingrese nombre del cliente"<<endl;
	cin.get();
	getline(cin, NyA);
	while(NyA!="ZZZ"){
		cout<<"\nIngrese cantidad de articulos comprados por el cliente"<<endl;
		cin>>Cod1;
		cin>>Cod2;
		cin>>Cod3;
		cin>>Cod4;
		cin>>Cod5;
		
		VentArt1+=+(Cod1*Art1);
		VentArt2+=+(Cod2*Art2);
		VentArt3+=+(Cod3*Art3);
		VentArt4+=+(Cod4*Art4);
		VentArt5+=+(Cod5*Art5);
		
		CantVentas+=+Cod1+Cod2+Cod3+Cod4+Cod5;
		montoVenta+=+VentArt1+VentArt2+VentArt3+VentArt4+VentArt5;
		
		ventaActual=(Cod1*Art1)+(Cod2*Art2)+(Cod3*Art3)+(Cod4*Art4)+(Cod5*Art5);
		
		if(ventaActual>MayorVenta){
			MayorVenta=ventaActual;
			NyAMayor=NyA;
		}
		cout<<"\nIngrese nombre del cliente"<<endl;
		cin.get();
		getline(cin, NyA);
	}
	
	cout<<"\n\nEL MONTO TOTAL DE LAS VENTAS ES: $"<<montoVenta;
	cout<<"\nVENTA TOTAL DEL ARTICULO 1: "<<VentArt1;
	cout<<"\nVENTA TOTAL DEL ARTICULO 2: "<<VentArt2;
	cout<<"\nVENTA TOTAL DEL ARTICULO 3: "<<VentArt3;
	cout<<"\nVENTA TOTAL DEL ARTICULO 4: "<<VentArt4;
	cout<<"\nVENTA TOTAL DEL ARTICULO 5: "<<VentArt5;
	cout<<"\nCANTIDAD DE VENTAS REALIZADAS: "<<CantVentas;
	cout<<"\nCLIENTE CON MAYOR MONTO DE COMPRA: "<<NyAMayor;
	return 0;
}

