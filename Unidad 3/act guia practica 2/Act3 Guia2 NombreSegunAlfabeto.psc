Algoritmo NombreSegunAlfabetoAct3Guia2
	Definir P1, P2, P3 Como Caracter;
	Escribir "Ingrese 3 nombres";
	Leer P1, P2, P3;
	
	Si P1 <= P2 Y P1 <= P3 Entonces
		Escribir P1;
	Si P2 <= P3 Entonces
		Escribir P2;
		Escribir P3;
	SiNo
		Escribir P3;
		Escribir P2;
	FinSi
SiNo
	si P2 <= P1 Y P2 <= P3 Entonces
		Escribir P2;
		si P1 <= P3 Entonces
			Escribir P1;
			Escribir P3;
		SiNo
			Escribir P3;
			Escribir P1;
		FinSi
	SiNo
		si P3 <= P1 Y P3 <= P2 Entonces
			Escribir P3;
		FinSi
		Si P1 <= P2 Entonces
			Escribir P1; 
			Escribir P2;
		SiNo
			Escribir P2;
			Escribir P1;
		FinSi
	FinSi
FinSi

	
FinAlgoritmo
