Algoritmo Act3Guia3TablaDeMultiplicar
	Definir nNum, nResul Como Entero;
	Definir Cont Como Entero;
	
	Cont=0;
	
	Escribir "TABLA DE MULTIPLICAR";
	Leer nNum;
	Repetir
		Cont=Cont+1;
		nResul=Cont*nNum;
		Escribir Cont," x ",nNum," = ", nResul;
	Hasta Que Cont == 10
FinAlgoritmo
