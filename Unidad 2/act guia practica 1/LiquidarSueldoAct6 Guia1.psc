Algoritmo LiquidarSueldoAct6Guia1
	Definir NYA1, NYA2 Como Caracter;
	Definir SUELD, KM1 , KM2, SUELD1, SUELD2, AUX Como Real;
	
	Escribir "Ingrese el nombre y apellido del chofer 1";
	Leer NYA1;
	Escribir "Ingresar los km recorridos del chofer 1";
	Leer KM1;
	Escribir "Ingrese el nombre y apellido del chofer 2";
	Leer NYA2;
	Escribir "Ingresar los km recorridos del chofer 2";
	Leer KM2;
	Escribir "Ingrese el monto del sueldo basico";
	Leer SUELD;
	
	SUELD1 = SUELD +(KM1*50);
	SUELD2 = SUELD +(KM2*50);
	AUX = SUELD1 + SUELD2;
	
	Escribir "LIQUIDACION MENSUAL CHOFERES";
	Escribir "NOMBRE  CHOFER 1: ",NYA1, " TOTAL A COBRAR: ",SUELD1,"$";
	Escribir "NOMBRE  CHOFER 2: ",NYA2, " TOTAL A COBRAR: ",SUELD2,"$";
	Escribir "TOTAL GENERAL $", AUX;
FinAlgoritmo
