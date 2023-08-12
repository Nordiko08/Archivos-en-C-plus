Algoritmo CuotaSocioAct11Guia2
	Definir TSoc Como Caracter;//Tipo de socio
	Definir NCL Como Caracter;//Nombre del club
	Definir NYA Como Caracter;//Nombre del socio
	Definir nCuo Como Entero;//Valor de la cuota
	Definir nSoc Como Entero;//Numero de socio
	Definir Aux Como Entero;
	Definir Tot Como Entero;
	
	Escribir "Ingrese el valor de la cuota del club: ";
	Leer nCuo;
	Escribir "Ingrese Nombre del socio: ";
	Leer NYA;
	Escribir "Ingrese nombre del club: ";
	Leer NCL;
	Escribir "Ingrese el numero del socio: ";
	Leer nSoc;
	Escribir "Ingrese el tipo de socio (activo, familiar o cadete): ";
	Leer TSoc;
	
	Si TSoc=="familiar" Entonces
		Aux = nCuo*0.5;
		Tot=nCuo+Aux;
	SiNo
		si TSoc=="cadete" Entonces
			Aux = nCuo*0.2;
			Tot=nCuo-Aux;
		SiNo
			Si Tsoc=="activo" Entonces
				Tot=nCuo;
			FinSi
		FinSi
	FinSi
	
	Escribir "CLUB: ",NCL;
	Escribir "NRO. SOCIO: ",nSoc,"  NOMBRE DEL SOCIO: ",NYA;
	Escribir "TIPO DE SOCIO: ",TSoc,"  TOTAL A PAGAR: $",Tot;
	
FinAlgoritmo
