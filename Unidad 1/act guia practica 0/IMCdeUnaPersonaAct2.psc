Algoritmo IMCdeUnaPersonaAct2
	Definir IMC, peso, altura, altura2 Como numero;
	Escribir "Ingrese su peso actual en KGs";
	Leer peso;
	Escribir "Ingrese su altura actual en CMs";
	Leer altura;
	altura2 = altura * altura;
	IMC = redon(altura2 / peso);
	Escribir "Su IMC (Indice de Masa Corporal) es de: ",IMC;
FinAlgoritmo
