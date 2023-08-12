Algoritmo MontoPresupuestoAct5Guia1
	Definir PAN Como Real;
	Definir MGIN, MTRAU, MPED Como Real;
	Escribir "Ingrese el monto del presupuesto anual";
	Leer PAN;
	
	MGIN = PAN * 0.40;
	MTRAU = PAN * 0.30;
	MPED = PAN * 0.30;
	
	Escribir "Ginecologia recibira: ", MGIN, "$"," del presupuesto";
	Escribir "Traumatologia recibira: ", MTRAU, "$"," del presupuesto";
	Escribir "Pediatria recibira: ", MPED, "$"," del presupuesto";
	
FinAlgoritmo
