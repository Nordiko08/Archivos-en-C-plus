Algoritmo AlquilerInmobiliariaAct12Guia2
	Definir Zona Como Caracter;//Zona en la que recide
	Definir ImpMens Como Entero;//Impuestos y comisiones
	Definir PrecBase Como Entero;//Precio base
	Definir Tot Como Real;//Total a pagar
	
	Escribir "Ingrese el precio base a pagar: ";
	Leer PrecBase;
	Escribir "Ingrese la zona de la vivienda(centro, residencial o barrio): ";
	Leer Zona;
	
	Si Zona=="centro" Entonces
		ImpMens=PrecBase*0.15;
		Tot=PrecBase+ImpMens;
	SiNo
		Si Zona=="residencial" Entonces
			ImpMens=PrecBase*0.10;
			Tot=PrecBase+ImpMens;
		SiNo
			Si Zona=="barrio" Entonces
			ImpMens=PrecBase*0.08;
			Tot=PrecBase+ImpMens;
		FinSi
		FinSi
	FinSi
	
	Escribir "PRECIO BASE DEL ALQUILER: $",PrecBase,"  MONTO DE IMPUESTOS: $",ImpMens;
	Escribir "TOTAL A PAGAR: $",Tot;
	
FinAlgoritmo
