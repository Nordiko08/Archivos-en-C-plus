Algoritmo CantidadDeSetsAct9Guia2
	Definir cNom1, cNom2 Como Caracter;
	Definir nPun1Equ1, nPun1Equ2 Como Entero;
	Definir nPun2Equ1, nPun2Equ2 Como Entero;
	Definir nPun3Equ1, nPun3Equ2 Como Entero;
	Definir nSetEq1, nSetEq2 Como Entero;
	Definir nTotPuntos1, nTotPuntos2 Como Entero;
	
	Escribir "Ingrese el nombre del 1er equipo: ";
	Leer cNom1;
	Escribir "Ingrese el nombre del 2do equipo: ";
	Leer cNom2;
	Escribir "Ingrese los puntos del equipo ", cNom1," en el 1er Set: ";
	Leer nPun1Equ1;
	Escribir "Ingrese los puntos del equipo ", cNom2," en el 1er Set: ";
	Leer nPun1Equ2;
	Escribir "Ingrese los puntos del equipo ", cNom1," en el 2do Set: ";
	Leer nPun2Equ1;
	Escribir "Ingrese los puntos del equipo ", cNom2," en el 2do Set: ";
	Leer nPun2Equ2;
	nSetEq1=0;
	nSetEq2=0;
	
	Si nPun1Equ1>nPun1Equ2 Entonces
		nSetEq1=nSetEq1+1;
	SiNo
		nSetEq2=nSetEq2+1;
	FinSi
	Si nPun2Equ1>nPun2Equ2 Entonces
		nSetEq1=nSetEq1+1;
	SiNo
		nSetEq2=nSetEq2+1;
	FinSi
	Si nSetEq1==nSetEq2 Entonces
		Escribir "Ingrese los puntos del equipo ", cNom1," en el 3er Set:";
		Leer nPun3Equ1;
		Escribir "Ingrese los puntos del equipo ", cNom2," en el 3er Set:";
		Leer nPun3Equ2;
		Si nPun3Equ1>nPun3Equ2 Entonces
			nSetEq1=nSetEq1+1;
		SiNo
			nSetEq2=nSetEq2+1;
		FinSi
	SiNo
		nPun3Equ1=0;
		nPun3Equ2=0;
	FinSi
	nTotPuntos1=nPun1Equ1+nPun2Equ1+nPun3Equ1;
	nTotPuntos2=nPun1Equ2+nPun2Equ2+nPun3Equ2;
	Si nSetEq1>nSetEq2 Entonces
		Escribir "Ganador equipo ",cNom1;
		Si nTotPuntos2>nTotPuntos1 Entonces
			Escribir "DATO ESTADISTICO: Equipo perdedor hizo mas puntos que el ganador";
		FinSi
	SiNo
		Escribir "Ganador equipo ",cNom2;
		Si nTotPuntos1>nTotPuntos2 Entonces
			Escribir "DATO ESTADISTICO: Equipo perdedor hizo mas puntos que el ganador";
		FinSi
	FinSi
	
FinAlgoritmo
