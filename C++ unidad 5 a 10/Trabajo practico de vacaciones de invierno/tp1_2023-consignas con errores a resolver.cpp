#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string bulonera; ///NOMBRE DE LA BULONERA
	int mes;///MES A PROCESAR
	int anio;///ANIO A PROCESAR
	float valor_pesos; ///VALOR DE REFERENCIA EN PESOS PARA PONDERAR
	string rubroydescri[500][2]; ///0: Rubro al que pertenece; 1: Descripcion del producto
	int stock[500][3]; ///0: Valor mi­nimo de stock; 1: Stock actual; 2: Stock Final
	float valor_unitario[500]; ///Valor unitario a ponderar
	float precio_unitario[500]; ///Precio unitario de cada producto
	int cont_productos; ///CONTADOR DE PRODUCTOS
	int matriz_b[500][500]; ///Matriz para contar por producto y por dia
	int dia; ///DIA DE VENTA
	int cant_vend; ///CANTIDAD VENDIDA DEL PRODUCTO
	int reponer_stock; ///CANTIDAD DE PRODUCTOS QUE DEBEN ACTUALIZAR SU stock
		
	cont_productos= 0;
	reponer_stock= 0;
	
	///CARGA DE PRIMEROS DATOS
	cout>>"Ingrese el nombre de la bulonera: ",
	getline(cin, bulonera);
	cout<<"Mes a procesar (1 a 12): ";
	cin>>mes;
	cout<<"Anio a procesar: ";
	cin>>anio
	cout<<"Valor de referencia en pesos: $ ";
	cin>>valor_pesos;
	cout<<endl;
	
	if(mes == 2)
		max_dia= 28;
	
	
	///CARGA DE DATOS DE TODOS LOS PRODUCTOS
	cout<<"CARGA DE DATOS DE LOS PPRODUCTOS..."<<endl;
	cout<<"Codigo de producto: ";
	cin>>codigo_p;
	while (codigo_p <> 0)
	{
		cin.get();
		cout<<"Rubro: ";
		getline(cin, rubroydescri[i][0]);
		cout<<"Descricion: ";
		getline(cin, rubroydescri[i][1]);
		cout<<"Stock minimo: ";
		cin>>stock[i][0];
		cout<<"Valor unitario a ponderar: ";
		cin>>valor_unitario[i];
		precio_unitario[i]= valor_unitario[i] * valor_pesos;
		cout<<"Stock actual: ";
		cin>>stock[i][1];
		stock[i][2]=0;///INICIALIZO PARA CALCULO DE STOCK FINAL
		cont_productos++;
		cout<<"Codigo de producto: ";
		cin>>codigo_p;
	}
	
	///CARGA DE DATOS DE LAS VENTAS REALIZADAS EN EL PERIODO
	cout<<endl<<"CARGA DE DATOS DE LAS VENTAS..."<<endl;
	cout<<"Dia: ";
	cin>>dia;
	while (dia <> 99)
	{
		
			cout<<"Codigo de producto: ";
			cin>>codigo_p;
			cout<<"Cantidad Vendida: ";
			cin>>cant_vend;
			matriz_b[i][dia]= matriz_b[i][dia] + cant_vend;
			stock[i][2]= stock[i][2] + 1;
			cout<<"Dia: ";
			cin>>dia;
					
	}
		
	
	///INFORME 1
	cout<<endl<<"-----------------------------------------------------------------"<<endl;
	cout<<endl<<"BULONERA "<<bulonera<<endl;
	cout<<"Stock INICIAL  - Periodo "<<mes<<"/"<<anio<<endl;
	cout<<"CODIGO        RUBRO      	DESCRIPCION       	STOCK INICIAL	PRECIO UNITARIO"<<endl;
	for(int i=1; i<=500; i++)
		cout<<i<<"  "<<rubroydescri[i][0]<<"   "<<rubroydescri[i][1]<<"   "<<stock[i][1]<<"  "<<precio_unitario[i]<<endl;
	
	///INFORME 2
	cout<<endl<<"-----------------------------------------------------------------"<<endl;
	cout<<endl<<"BULONERA "<<bulonera<<endl;
	cout<<"VENTAS MENSUALES  - Periodo "<<mes<<"/"<<anio<<endl;
	cout<<"CODIGO   ";
	for(int i=1; i<=max_dia; i++)
		cout<<i<<"  "<<i<<"  "<<<matriz_b[i][j]<<"  ";
		
		cout<<endl;
	}
	
	///INFORME 3
	cout<<endl<<"-----------------------------------------------------------------"<<endl;
	cout<<endl<<"BULONERA "<<bulonera<<endl;
	cout<<"STOCK A REPONER  - Periodo "<<mes<<"/"<<anio<<endl;
	cout<<"CODIGO	STOCK FINAL"<<endl;
	for(int i=1; i<=500 i++)
	{
		if(stock[i][2] < stock[i][0])
		{
			reponer_stock++;
			cout<<i<<"   "<<stock[i][2]<<endl;
		}
	}
	cout<<"TOTAL DE PRODUCTOS A REPONER STOCK: "<<reponer_stock<<endl;
			
	///INFORME 4

	cout<<endl<<"-----------------------------------------------------------------"<<endl;
	cout<<endl<<"BULONERA "<<bulonera<<endl;
	cout<<"STOCK ACTUALIZADO Y PONDERADO  - Periodo "<<mes<<"/"<<anio<<endl;
	cout<<"CODIGO-RUBRO  STOCK FINAL    VALOR PONDERADO"<<endl;
	for(int i=1; i<=cont_productos; i++)
	{
		if(stock[i][2] > 0)
		{
			
			
			cout<<i<<"-"<<auxrubro<<"  "<<stock[i][2]<<"  "<<auxvalor<<endl;
		}		
	}
		
	return 0;
}

