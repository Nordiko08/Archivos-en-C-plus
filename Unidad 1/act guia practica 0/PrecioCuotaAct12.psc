Algoritmo PrecioCuotaAct12
	Definir capital, razon, plazo,interes, Aux Como Numero;
	Escribir "Ingrese el capital solicitado";
	Leer capital;
	Escribir "Ingrese Razon(taza anual)";
	Leer razon;
	Escribir "Ingrese plazo a pagar(en cantidad de meses)";
	Leer plazo;
	
	interes = (capital * razon * plazo) / (100*12);
	Aux = redon((capital + interes) / plazo);
	
	Escribir "El valor de la cuota es de: ",Aux,"$";
	
FinAlgoritmo
