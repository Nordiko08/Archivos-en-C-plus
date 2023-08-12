Algoritmo Act8Guia3IngreseNombres
	Definir NyA, Aux Como Caracter;//Nombre y Apellido
	Definir Cont Como Entero;//Contador
	Cont=0; Aux=" ";
	
	Leer NyA;
	Mientras NyA<>Aux Hacer
		Aux=NyA;
		Cont=Cont+1;
		Leer Nya;
	FinMientras
	Escribir "Se ingresaron ",Cont," nombres";
FinAlgoritmo
