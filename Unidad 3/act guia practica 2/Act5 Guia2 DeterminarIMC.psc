Algoritmo DeterminarElIMCAct5Guia2
	Definir IMC Como Real;
	Definir peso Como Real;
	Definir Est Como Real;
	
	Escribir "Ingrese el peso de  la persona en Kgs";
	Leer peso;
	Escribir "Ingrese la altura de la persona en Mts";
	Leer Est;
	
	IMC=peso/Est^2;
	
	Si IMC<=18.5 Entonces
		Escribir "Debajo de lo normal";
	SiNo
		Si IMC>18.5 Y IMC<=25 Entonces
			Escribir "Normal";
		SiNo
			Si IMC>25 Y IMC<=30 Entonces
				Escribir "Sobrepeso";
			SiNo
				Escribir "Obecidad";
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
