Algoritmo CalcularPorcentajeDeHombresAct5
	Definir CantM, CantG, CantH, PorcentajeH, PorcentajeM Como Entero;
	Escribir "Ingrese cantidad de mujeres";
	Leer CantM;
	Escribir "Ingrese cantidad total de habitantes";
	Leer CantG;
	
	CantH = CantG - CantM;
	
	PorcentajeH = redon(CantH * 100 / CantG);
	PorcentajeM = redon(CantM * 100 / CantG);
	
	Escribir "El porcentaje de Hombres es de: ",PorcentajeH,"%";
	Escribir "El porcentaje de Mujeres es de: ",PorcentajeM,"%";
	
FinAlgoritmo
