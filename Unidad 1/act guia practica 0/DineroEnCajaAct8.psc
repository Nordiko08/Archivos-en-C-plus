Algoritmo DineroEnCajaAct8
	Definir B5, B10, B20, B50, B100, Tot Como Entero;
	Definir B5a, B10a, B20a, B50a, B100a Como Entero;
	Escribir "Ingrese cantidad de billetes de 5$";
	Leer B5;
	Escribir "Ingrese cantidad de billetes de 10$";
	Leer B10;
	Escribir "Ingrese cantidad de billetes de 20$";
	Leer B20;
	Escribir "Ingrese cantidad de billetes de 50$";
	Leer B50;
	Escribir "Ingrese cantidad de billetes de 100$";
	Leer B100;
	
	B5a = B5*5;
	B10a = B10*10;
	B20a = B20*20;
	B50a = B50*50;
	B100a = B100*100;
	
	Tot = B5a+B10a+B20a+B50a+B100a;
	
	Escribir "El total de billetes ingresados es de: ",Tot,"$";
	
FinAlgoritmo
