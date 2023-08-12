Algoritmo TipoDeTrianguloAct4Guia2
	Definir nLado1 Como Entero;
	Definir nLado2 Como Entero;
	Definir nLado3 Como Entero;
	Definir cMensaje Como Caracter;
	Definir nPer Como Entero;
	Escribir "Ingrese 1er lado";
	Leer nLado1;
	Escribir "Ingrese 2do lado";
	Leer nLado2;
	Escribir "Ingrese 3er lado";
	Leer nLado3;
	
	Si nLado1==nLado2 Entonces
		Si nLado1==nLado3 Entonces
			cMensaje="Equilatero";
		SiNo
			cMensaje="Isosceles";
	FinSi
SiNo
	Si nLado1==nLado3 Entonces
		cMensaje ="Isosceles";
	SiNo
		si nLado2==nLado3 Entonces
			cMensaje="Isosceles";
		SiNo
			cMensaje="Escaleno";
		FinSi
	FinSi
FinSi

nPer=nLado1+nLado2+nLado3;
Escribir "Tipo de Triangulo: ",cMensaje;
Escribir "Perimetro del triangulo: ",nPer;
FinAlgoritmo
