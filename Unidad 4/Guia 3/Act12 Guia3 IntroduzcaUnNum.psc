Algoritmo Act12Guia3IntroduzcaUnNum
	Definir num Como Entero;//introducir numeros
	Definir Cont Como Entero;//contador
	Definir Acum Como Entero;//Acumulador
	
	num=0;Cont=0;Acum=0;
	
	Repetir
		Escribir "Introduzca un numero";
		Leer num;
		Acum=Acum+num;
		Cont=Cont+1;
	Hasta Que Acum>100 o Cont=10
	
	
	Si Acum>100 Entonces
		Escribir "La suma de los numeros es mayor a 100";
	SiNo
		Escribir "Se han introducido 10 numeros";
	FinSi
	
	Escribir Acum;
	Escribir Cont;
FinAlgoritmo
