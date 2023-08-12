Algoritmo AporteJubilatorioAtc9
	Definir SueldoNeto, AporteJubilatorio, SueldoL, Aux Como Real;
	Escribir "Ingrese su sueldo neto";
	Leer SueldoNeto;
	Escribir "Ingrese el porcentaje de su aporte jubilatorio";
	Leer AporteJubilatorio;
	
	Aux = SueldoNeto*AporteJubilatorio/100;
	SueldoL = SueldoNeto - Aux;
	
	Escribir "Su sueldo liquido es de: ",SueldoL,"$";
FinAlgoritmo
