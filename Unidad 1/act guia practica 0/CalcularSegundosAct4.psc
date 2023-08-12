Algoritmo CalcularSegundosAct4
	Definir HH, MM, SS, AuxMS, AuxHM, AuxHS, AuxTot Como Entero;
	Escribir "Ingrese cantidad de horas";
	Leer HH;
	Escribir "Ingrese cantidad de minutos";
	Leer MM;
	Escribir "Ingrese cantidad de segundos";
	Leer SS;
	AuxHM = HH * 60;
	AuxHS = AuxHM * 60;
	AuxMS = MM * 60;
	
	AuxTot = AuxMS + AuxHS + SS;
	
	Escribir "La cantidad total de segundos es de: ",AuxTot," segundos";
	
FinAlgoritmo
