Algoritmo SalarioCobrarAct7Guia2
	Definir nMont Como Entero;
	Definir Hs Como Entero;
	Definir Tot Como Real;
	Definir Aux, Aux2 Como Real;
	
	Escribir "Ingrese el monto por hora a cobrar";
	Leer nMont;
	Escribir "Ingrese cantidad de horas trabajadas";
	Leer Hs;
	
	Si Hs>40 Entonces
		Aux = Hs - 40;
		Aux2 = (nMont * 0.5) * Aux;
		Tot = (nMont * Hs) + Aux2;
	SiNo
		Tot = nMont * Hs;
	FinSi
	
	
	Escribir "El total a cobrar por el trabajador es de: $",Tot;
FinAlgoritmo
