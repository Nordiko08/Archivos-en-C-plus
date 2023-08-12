Algoritmo SueldoDeEmpleadoAct10Guia2
	Definir NYA Como Caracter;//Nombre y apellido del empleado
	Definir Cat Como Entero;//Categoria del empleado de 1 a 4
	Definir Anio Como Entero;//Antiguedad del empleado
	Definir Tot Como Entero;//Sueldo a cobrar
	Definir Aux, AuxCat Como Entero;
	
	Escribir "Ingrese el nombre y apellido del empleado: ";
	Leer NYA;
	Escribir "Ingrese la categoria del empleado (1,2,3 o 4) ";
	Leer Cat;
	Escribir "Ingrese la antiguedad del empleado (años en la empresa)";
	Leer Anio;
	AuxCat=Cat;
	Segun Cat Hacer
		1:
			Cat = 60000;
		2:
			Cat = 50000;
		3:
			Cat = 40000;
			
		4:  Cat = 30000;
		De Otro Modo:
			Cat=0;
	FinSegun
	
	Si Anio>=0 Y Anio<=10 Entonces
		Aux = Cat*0.2;
	SiNo
		Si Anio>=11 Y Anio<=15 Entonces
			Aux = Cat*0.5;
		SiNo
			Si Anio>=16 Y Anio<=20 Entonces
				Aux = Cat*0.8;
				Sino Aux = Cat*1;
			FinSi
		FinSi
	FinSi
	Tot = Cat+Aux;
	Escribir "Apellido y Nombre: ",NYA;
	Escribir "Categoria: ", AuxCat,"   Sueldo Basico: $",Cat;
	Escribir "Antiguedad: ",Anio," años","   Monto Antiguedad: $", Aux;
	Escribir "Sueldo Total: $",Tot;
FinAlgoritmo
