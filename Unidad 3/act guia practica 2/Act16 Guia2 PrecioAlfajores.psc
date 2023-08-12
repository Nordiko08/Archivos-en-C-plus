Algoritmo Act16Guia2PrecioAlfajores
	Definir NYA Como Caracter;//Nombre del cliente
	Definir nGusto Como Entero;//Gusto del alfajor(Dulce de leche, Frutal o Mouse
	Definir Gusto Como Caracter;//se guarda el nombre del gusto
	Definir tCaja Como Entero;//Cajas de 6, 12 o 24 unidades
	Definir pCaja Como Entero;//Precio de la caja de alfajores
	Definir pUnit Como Entero;//Precio unitario del alfajor
	Definir Desc Como Entero;//Descuento segun la cantidad
	Definir Iva Como Real;//Iva aplicado al total
	Definir Tot Como Real;//Total con iva
	Definir esReg Como Caracter;//Para saber si regalo es V o F
	Definir Reg Como Entero;//Si es para regalo
	Definir Aux Como Entero;
	
	Escribir "Ingrese el precio unitario del alfajor";
	Leer pUnit;
	Escribir "Ingrese tipo de caja a elegir";
	Escribir "1. 6 Unidades";
	Escribir "2. 12 Unidades";
	Escribir "3. 24 Unidades";
	Leer Aux;
	Escribir "Ingrese de que sabor desea";
	Escribir "1. Dulce de leche";
	Escribir "2. Frutal";
	Escribir "3. Mouse";
	Leer Gusto;
	Escribir "Ingrese nombre del cliente";
	Leer NYA;
	Escribir "Es para regalo? Ingrese V (si) o F (no)";
	Leer esReg;
	
	Segun Aux Hacer
		1:tCaja=6;
			pCaja=tCaja*pUnit;
			Iva=pCaja*0.21;
			Tot=pCaja+Iva;
			Gusto="Dulce de leche";
		2:tCaja=12;
			Desc=pUnit*0.1;
			pCaja=(tCaja*pUnit)-Desc;
			Iva=pCaja*0.21;
			Tot=pCaja+Iva;
			Gusto="Frutal";
		3:tCaja=24;
			Desc=pUnit*0.24;
			pCaja=(tCaja*pUnit)-Desc;
			Iva=pCaja*0.21;
			Tot=pCaja+Iva;
			Gusto="Mouse";
	FinSegun
	
	Si esReg=="si" Entonces
		Reg=250;
		Tot=Tot+Reg;
	SiNo
		Reg=0;
	FinSi
	
	Escribir "CLIENTE: ",NYA,"   ","TIPO DE CAJA: ",tCaja," UNIDADES","   ","GUSTO: ",Gusto;
	Escribir "SUBTOTAL: $",pCaja,"   "," RECARGO REGALO: $",Reg;
	Escribir "IVA 21%: $",Iva;
	Escribir "TOTAL: $",Tot;
FinAlgoritmo
