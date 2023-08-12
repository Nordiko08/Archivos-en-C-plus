Algoritmo Act20Guia3PrecioNafta
	Definir LSup Como Real;//Nafta super
	Definir LPrem Como Real;//Nafta premium
	Definir LDies Como Real;//Diesel
	Definir Pat Como Caracter;//Patente del auto
	Definir Cod Como Entero;//Codigo de empleado
	Definir TCom Como Caracter;//Tipo de combustible
	Definir CantL Como Entero;//Cantidad de combustible
	Definir TotSup Como Entero;//Total de litros vendidos super
	Definir TotPrem Como Entero;//Total de litros vendidos de premium
	Definir TotDies Como Entero;//Total de litros vendidos de diesel
	Definir TotRec Como Real;//Total recaudado
	
	LSup=0; LPrem=0; LDies=0;
	Cod=0; CantL=0; 
	TotDies=0; TotPrem=0; TotSup=0; TotRec=0;
	
	Escribir "           ESTACION DE SERVICIO";
	Escribir "Ingrese Precio de combustible (Super, Premium y Diesel)";
	Leer LSup,LPrem,LDies;
	Escribir "Ingrese patente del auto";
	Leer Pat;
	Mientras Pat<>"zzz" Hacer
		Escribir "Ingrese codigo de empleado";
		Leer Cod;
		Escribir "Ingrese tipo de combustible: super, premium o diesel";
		Leer TCom;
		Escribir "Ingrese cantidad de litros";
		Leer CantL;
		
		Si TCom=="super" Entonces
			TotSup=TotSup+CantL;
		SiNo
			Si TCom=="premium" Entonces
				TotPrem=TotPrem+CantL;
			SiNo
				si TCom=="diesel" Entonces
					TotDies=TotDies+CantL;
				FinSi
			FinSi
		FinSi
		Escribir "Ingrese patente del auto";
		Leer Pat;
	FinMientras
	
	TotRec=(TotSup*LSup)+(TotPrem*LPrem)+(TotDies*LDies);
	
	Escribir "Se vendieron: ",TotSup, " litros de nafta Super";
	Escribir "Se vendieron: ",TotPrem, " litros de nafta Premium";
	Escribir "Se vendieron: ",TotDies, " litros de Diesel";
	Escribir "Monto total recaudado: $",TotRec;
FinAlgoritmo
