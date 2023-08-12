Algoritmo Act13Guia3Ventas
	Definir Art1 Como Real;//Articulo 1
	Definir Art2 Como Real;//Articulo 2
	Definir Art3 Como Real;//Articulo 3
	Definir Art4 Como Real;//Articulo 4
	Definir Art5 Como Real;//Articulo 5
	Definir NyA Como Caracter;//Nombre del cliente
	Definir Cant Como Entero;//Cantidad de articulos comprados
	Definir Cod1 Como Entero;//
	Definir Cod2 Como Entero;//
	Definir Cod3 Como Entero;//Codigo de articulo
	Definir Cod4 Como Entero;//
	Definir Cod5 Como Entero;//
	Definir MontoVenta Como Real;//Monto total de las ventas
	Definir VentArt1 Como Entero;//Venta total de Art1
	Definir VentArt2 Como Entero;//Venta total de Art2
	Definir VentArt3 Como Entero;//Venta total de Art3
	Definir VentArt4 Como Entero;//Venta total de Art4
	Definir VentArt5 Como Entero;//Venta total de Art5
	Definir CantVentas Como Entero;//Cantidad de ventas realizadas
	Definir NyAMayor Como Caracter;//Nombre de cliente con monto mayor
	Definir MayorVenta Como Real;//Mayor monto de venta
	Definir VentaActual Como Real;//Compra actual del cliente
	
	Art1=0; Art2=0; Art3=0; Art4=0; Art5=0;
	VentArt1=0; VentArt2=0; VentArt3=0; VentArt4=0; VentArt5=0;
	Cant=0; MontoVenta=0; CantVentas=0; MayorVenta=0;
	Cod1=0; Cod2=0; Cod3=0; Cod4=0; Cod5=0;
	
	Escribir "           COMERCIO";
	Leer Art1, Art2, Art3, Art4, Art5;
	Escribir "Ingrese nombre del cliente";
	Leer NyA;
	Mientras NyA<>"ZZZ" Hacer
		Escribir "Ingrese cantidad de articulos comprados por el cliente";
		Leer Cod1,Cod2,Cod3,Cod4,Cod5;
		
		VentArt1=VentArt1+(Cod1*Art1);
		VentArt2=VentArt2+(Cod2*Art2);
		VentArt3=VentArt3+(Cod3*Art3);
		VentArt4=VentArt4+(Cod4*Art4);
		VentArt5=VentArt5+(Cod5*Art5);
		
		CantVentas=CantVentas+Cod1+Cod2+Cod3+Cod4+Cod5;
		MontoVenta=MontoVenta+VentArt1+VentArt2+VentArt3+VentArt4+VentArt5;
		
		VentaActual=(Cod1*Art1)+(Cod2*Art2)+(Cod3*Art3)+(Cod4*Art4)+(Cod5*Art5);
		
		Si VentaActual>MayorVenta Entonces
			MayorVenta=VentaActual;
			NyAMayor=Nya;
		FinSi
		Escribir "Ingrese nombre del cliente";
		Leer NyA;
	FinMientras
	
	Escribir "EL MONTO TOTAL DE LAS VENTAS ES: $",MontoVenta;
	Escribir "VENTA TOTAL DEL ARTICULO 1: ",VentArt1;
	Escribir "VENTA TOTAL DEL ARTICULO 2: ",VentArt2;
	Escribir "VENTA TOTAL DEL ARTICULO 3: ",VentArt3;
	Escribir "VENTA TOTAL DEL ARTICULO 4: ",VentArt4;
	Escribir "VENTA TOTAL DEL ARTICULO 5: ",VentArt5;
	Escribir "CANTIDAD DE VENTAS REALIZADAS: ",CantVentas;
	Escribir "CLIENTE CON MAYOR MONTO DE COMPRA: ",NyAMayor;
	
FinAlgoritmo
