Algoritmo Act18Guia2Bazar
	Definir NYA Como Caracter;//Nombre y apellido del cliente
	Definir DNI Como Entero;//DNI del cliente
	Definir Rprod Como Entero;//Rubro del producto
	Definir nprod Como Caracter;//Nombre del rubro del producto
	Definir Cant Como Entero;//Cantidad del producto
	Definir PUnit Como Real;//Precio unitario del producto
	Definir Subtotal Como Real;//Subtotal 
	Definir Desc Como Real;//Descuento
	Definir Rec Como Real;//Recargo
	Definir nFPago Como Entero;//Numero de la forma de pago
	Definir FPago Como Caracter;//Nombre de la forma de pago
	Definir TipoT Como Caracter;//Tipo de tarjeta
	Definir Cuo Como Entero;//Cantidad de cuotas
	Definir Bank Como Caracter;//Banco de la tarjeta
	Definir DescT Como Real;//Descuento de la tarjeta
	Definir RecT Como Real;//Recargo de la tarjeta
	Definir Tot Como Real;//Total a pagar
	Definir Aux Como Real;
	DescT=0; RecT=0; Desc=0; Rec=0;
	
	Escribir "Ingrese nombre y apellido del cliente";
	Leer NYA;
	Escribir "Ingrese DNI del cliente";
	Leer DNI;
	Escribir "Ingrese rubro del producto a comprar";
	Escribir "1. Calefactores";
	Escribir "2. Radiadores";
	Escribir "3. Caloventores";
	Escribir "4. Cualquier otro producto del local";
	Leer Rprod;
	
	Segun Rprod Hacer
		1:nprod="Calefactores";
		2:nprod="Radiadores";
		3:nprod="Caloventores";
		4:nprod="Cualquier otro producto del local";
	FinSegun
	Escribir "Ingrese cantidad a comprar";
	Leer Cant;
	Escribir "Ingrese precio unitario del producto";
	Leer PUnit;
	Escribir "Ingresar forma de pago";
	Escribir "1. Contado";
	Escribir "2. Debito";
	Escribir "3. Tarjeta de credito";
	Leer nFPago;
	
	Segun nFPago Hacer
		1:FPago="Contado";
			Si Rprod<>4 Entonces
			Subtotal=PUnit*Cant;
			Desc=Subtotal*0.15;
			Tot=Subtotal-Desc;
			Rec=0;
		SiNo
			Subtotal=PUnit*Cant;
			Tot=Subtotal;
		FinSi
		
	2: FPago="Debito";
		Subtotal=PUnit*Cant;
		Tot=Subtotal;
		Desc=0;
		Rec=0;
		3: FPago="Tarjeta de credito";
			Escribir "Ingresar tipo de tarjeta";
			Escribir "V. Visa";
			Escribir "M. Mastercard";
			Escribir "N. Naranja";
			Leer TipoT;
			Escribir "Ingresar banco de la tarjeta";
			Escribir "B. Bersa";
			Escribir "F. Frances";
			Escribir "G. Galicia";
			Escribir "O. Otro";
			Leer Bank;
			Escribir "Ingrese cantidad de cuotas: 1, 3, 6, 12 o 18";
			Leer Cuo;
			
			Si TipoT=="V" y Bank=="B" Entonces
				Subtotal=Cant*PUnit;
				RecT=Subtotal*0.2;
				Tot=Subtotal+RecT;
				DescT=Subtotal*0.15;
				Tot=Tot-DescT;
			SiNo
				Subtotal=(Cant*PUnit)/Cuo;
				RecT=Subtotal*0.2;
				Tot=(Subtotal*Cuo)+Rec;
				DescT=0;
			FinSi
			
	FinSegun
	
	Escribir "DNI: ",DNI,"    ","CLIENTE: ",NYA;
	Escribir "RUBRO DEL PRODUCTO: ",nprod,"    ","CANTIDAD: ",Cant;
	Escribir "PRECIO UNITARIO: $",PUnit,"    ","FORMA DE PAGO: ",FPago;
	Escribir "SUBTOTAL: ",Subtotal;
	Escribir "DESCUENTOS: $",Desc;
	Escribir "RECARGOS: $",Rec;
	Escribir "DESCUENTO TARJETA DE CREDITO: $",DescT;
	Escribir "RECARGO TARJETA DE CREDITO: $",RecT;
	Escribir "TOTAL A PAGAR: $",Tot;
FinAlgoritmo
