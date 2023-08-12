Algoritmo VentaSucursalAct8Guia1
	Definir Vent1S1, Vent1S2, Vent2S1, Vent2S2, totven  Como Entero;
	Definir totvent1, totvent2 Como Real;
	Definir totemp Como Entero;
	Definir bon, bonemp Como Real;
	
	Escribir "Ingrese total de ventas de la sucursal 1 en el primer semestre";
	Leer Vent1S1;
	Escribir "Ingrese total de ventas de la sucursal 2 en el primer semestre";
	Leer Vent2S1;
	Escribir "Ingrese total de ventas de la sucursal 1 en el segundo semestre";
	Leer Vent1S2;
	Escribir "Ingrese total de ventas de la sucursal 2 en el segundo semestre";
	Leer Vent2S2;
	Escribir "Ingresar cantidad de empleados";
	Leer totemp;
	
	totvent1 = Vent1S1+Vent1S2;
	totvent2 = Vent2S1+Vent2S2;
	totven = totvent1+totvent2;
	bon = totven*0.2;
	bonemp = bon/totemp;
	
	Escribir "El total de ventas de las sucursales en el año es de: $",totven;
	Escribir "A cada empleado le corresponde: $",bonemp;
FinAlgoritmo
