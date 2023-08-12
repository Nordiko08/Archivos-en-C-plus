Algoritmo NumerosParImparAct2Guia2
	Definir nNro Como Entero;
	Definir nAux, nAux2 Como Entero;
	Escribir "Ingrese un numero entero";
	Leer nNro;
	
	Si nNro > 0 Entonces
		Escribir "El numero es positivo";
	SiNo
		si nNro < 0   Entonces
			Escribir "El numero es negativo";
		SiNo
			Escribir "El numero es cero";
		FinSi
	FinSi
	nAux= trunc(nNro / 2) *2;
	Si nNro == nAux Entonces
		Escribir "El numero es par";
	SiNo
		Escribir "El numero es impar";
	FinSi
	
	nAux = nNro % 5;
	nAux2 = nNro % 3;
	
	Si nAux==0 Y nAux2==0 Entonces
		Escribir "El numero es multiplo de 3 y 5 a la vez";
	FinSi
FinAlgoritmo
