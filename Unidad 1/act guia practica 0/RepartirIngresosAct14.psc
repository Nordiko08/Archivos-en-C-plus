Algoritmo RepartirIngresosAct14
	Definir sueldo, ing, nEdad1, nEdad2, nEdad3, nTot como numero;
	Definir tot1, tot2, tot3 como numero;
	Escribir "Ingresar el sueldo";
	Leer sueldo;
	Escribir "Ingresar la edad del primer nieto";
	Leer nEdad1;
	Escribir "Ingresar la edad del segundo nieto";
	Leer nEdad2;
	Escribir "Ingresar la edad del tercer nieto";
	Leer nEdad3;
	
	ing = sueldo * 0.15;
	nTot = nEdad1+nEdad2+nEdad3;
	tot1= redon(ing*nEdad1/nTot);
	tot2= redon(ing*nEdad2/nTot);
	tot3= redon(ing*nEdad3/nTot);
	Escribir "Los ingresos que corresponden repartir son de: ",ing,"$";
	Escribir "Al primer nieto le corresponde: ",tot1,"$";
	Escribir "Al segundo nieto le corresponde: ",tot2,"$";
	Escribir "Al tercer nieto le corresponde: ",tot3,"$";
	
FinAlgoritmo
