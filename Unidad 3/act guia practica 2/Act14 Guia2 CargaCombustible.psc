Algoritmo Act14Guia2CargaCombustible
	Definir nNComb Como Caracter;
	Definir Comb Como Entero;
	Definir Money Como Entero;
	Definir Puntos Como Entero;
	Definir Aux Como Entero;
	Puntos=0;
	
	Escribir "Ingrese el numero de  combustible que desea cargar";
	Escribir "1.INFINIA";
	Escribir "2.INFINIA DIESEL";
	Escribir "3.SUPER";
	Escribir "4.ULTRADIESEL";
	Escribir "3.DIESEL 500";
	Leer Comb;
	Escribir "Ingrese la cantidad de dinero a cargar";
	Leer Money;
	
	Segun Comb Hacer
		1: Escribir "Se cargo ",Money," de INFINIA";
			Aux = Money-Trunc(Money%1000);
			Puntos=(Aux/1000)*80;
			Si Money>3500 Entonces
				Puntos=Puntos*2;
			FinSi
			Escribir "SE SUMARON ",Puntos," PUNTOS POR LA CARGA DE INFINIA";
		2: Escribir "Se cargo ",Money," de INFINIA DIESEL";
			Aux = Money-Trunc(Money%1000);
			Puntos=(Aux/1000)*75;
			Si Money>3500 Entonces
				Puntos=Puntos*2;
			FinSi
			Escribir "SE SUMARON ",Puntos," PUNTOS POR LA CARGA DE INFINIA DIESEL";
		3: Escribir "Se cargo ",Money," de SUPER";
			Aux = Money-Trunc(Money%1000);
			Puntos=(Aux/1000)*40;
			Si Money>3500 Entonces
				Puntos=Puntos*2;
			FinSi
			Escribir "SE SUMARON ",Puntos," PUNTOS POR LA CARGA DE SUPER";
		4: Escribir "Se cargo ",Money," de ULTRADIESEL";
			Aux = Money-Trunc(Money%1000);
			Puntos=(Aux/1000)*40;
			Si Money>3500 Entonces
				Puntos=Puntos*2;
			FinSi
			Escribir "SE SUMARON ",Puntos," PUNTOS POR LA CARGA DE ULTRADIESEL";
		5: Escribir "Se cargo ",Money," de DIESEL 500";
			Aux = Money-Trunc(Money%1000);
			Puntos=(Aux/1000)*35;
			Si Money>3500 Entonces
				Puntos=Puntos*2;
			FinSi
			Escribir "SE SUMARON ",Puntos," PUNTOS POR LA CARGA DE DIESEL 500";
	FinSegun
FinAlgoritmo
