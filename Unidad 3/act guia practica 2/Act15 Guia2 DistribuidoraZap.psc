Algoritmo Act15Guia2DistribuidoraZap
	Definir NYA Como Caracter;//Nombre del cliente
	Definir NDist Como Caracter;//Nombre de la distribuidora
	Definir FPag Como Entero;//Forma de pago
	Definir nPag Como Caracter;//Nombre de la forma de pago
	Definir Desc Como Entero;//Descuento aplicado
	Definir Rec Como Real;//Recargo del total
	Definir PrList Como Entero;//Precio de lista del zapato
	Definir Cant Como Entero;//Cantidad de pares de zapatos
	Definir Tot Como Real;//Total a pagar
	Definir Cuo Como Entero;//Cantidad de cuotas
	Definir Aux Como Real;
	
	Escribir "Ingrese el nombre de la distribuidora de zapatos";
	Leer NDist;
	Escribir "Ingrese Nombre y apellido del cliente";
	Leer NYA;
	Escribir "Ingrese el precio de los zapatos";
	Leer PrList;
	Escribir "Ingrese la cantidad a comprar";
	Leer Cant;
	Escribir "Ingrese la forma de pago";
	Escribir "1. Contado.";
	Escribir "2. 6 Cuotas.";
	Escribir "3. 12 Cuotas.";
	Leer FPag;
	
	Segun FPag Hacer
		1: Aux=PrList*Cant;
			Desc=Aux*0.1;
			Rec=0;
			Tot=Aux-Desc;
			Cuo=Tot;
			nPag="Contado";
		2: Tot=PrList*Cant;
			Rec = 0;
			Desc = 0;
			Cuo=Tot/6;
			nPag="6 Cuotas";
		3: Aux = PrList*Cant;
			Rec = Aux*0.23;
			Tot = Aux+Rec;
			Cuo=Tot/12;
			nPag="12 Cuotas";
			Desc=0;
	FinSegun
	
	Escribir "NOMBRE DEL CLIENTE: ",NYA,"  NOMBRE DE LA DISTRIBUIDORA: ",NDist;
	Escribir "CANTIDAD DE ZAPATOS VENDIDOS: ",Cant,"  PRECIO EN LISTA DE LOS ZAPATOS:  ",PrList;
	Escribir "FORMA DE PAGO: ",nPag;
	Escribir "DESCUENTO: ",Desc,"  RECARGO: ",Rec;
	Escribir "CANTIDAD DE CUOTAS: ",nPag," MONTO DE LAS CUOTAS: ",Cuo;
	Escribir "TOTAL A PAGAR: $",Tot;
	
FinAlgoritmo
