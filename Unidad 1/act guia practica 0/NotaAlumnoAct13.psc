Algoritmo NotaAlumnoAct13
	Definir NotaExa1, NotaExa2, TP, Aux Como Numero;
	Definir SumaNotas, PorcNotas, PorcTP Como Numero;
	Escribir "Ingresar la nota del parcial 1 (0 a 100)";
	Leer NotaExa1;
	Escribir "Ingresar la nota del parcial 2 (0 a 100)";
	Leer NotaExa2;
	Escribir "Ingresar la nota del trabajo practico del alumno";
	Leer TP;
	
	SumaNotas = NotaExa1 + NotaExa2;
	PorcNotas = (SumaNotas / 2) * 0.8;
	PorcTP = TP * 0.2;
	Aux = PorcNotas+PorcTP;
	
	Escribir "La nota final del alumno es: ",Aux;
FinAlgoritmo
