Algoritmo Act6Guia2ProcesoIAPV
	Definir N Como Entero;//Cantidad de adjudicatorios
	Definir C Como Entero;//Contador
	Definir Total Como Real;//Acumulador de deuda
	Definir Max Como Entero;//Maximo
	Definir Min Como Entero;//Minimo
	Definir NYA Como Caracter;//Nombre del adjudicado
	Definir Cant Como Entero;//Cantidad de cuotas en mora
	Definir Deuda Como Real;//Deuda del adjudicado
	Definir MaxNya Como Caracter;//Auxiliar de nombre
	Definir MaxDeuda Como Real;//Auxiliar de deuda
	Definir MinNya Como Caracter;//Auxiliar de nombre
	Definir MinCant Como Real;//Auxiliar de Deuda
	
	Escribir "PROCESO IAPV";
	Leer N; C=0;
	Total=0;
	Max=0;
	Min=100000;
	Repetir
		Leer NYA, Cant, Deuda;
		Si Cant>Max Entonces Max=Cant;
			MaxNya=Nya;
			MaxDeuda=Deuda;
		FinSi
		Si Deuda< Min Entonces
			Min = Deuda;
			MinNya=NYA;
			MinCant=Cant;
		FinSi
		Total=Total+Deuda;
		C=C+1;
	Hasta Que C=N;
	Escribir "Deuda Total al IAPV: ",Total;
	Escribir "Información de Adjudicatarios";
	Escribir "Adjud. con mayor cantidad de cuotas en mora: ",MaxNya;
	Escribir "Cantidad de cuotas: ",Max;
	Escribir "Deuda: ",MaxDeuda;
	Escribir "Adjud. con menor monto de deuda: ",MinNya;
	Escribir "Cantidad de Cuotas: ",MinCant;
	Escribir "Deuda: ",Min;
	
FinAlgoritmo
