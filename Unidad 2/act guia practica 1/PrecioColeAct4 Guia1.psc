Algoritmo PrecioColeAct4Guia1
	Definir NIE, NFE, NIC, NFC, NIT, NFT Como Entero;
	Definir PES Como Real;
	Definir PCOM, PTR Como Real;
	Definir CBE, CBT, CBC Como Real;
	Definir REC Como Real;
	Escribir "Ingrese el precio del pasaje de estudiante";
	Leer PES;
	Escribir "Ingrese la numeracion inicial y final del boleto de estudiante";
	Leer NIE, NFE;
	Escribir "Ingrese la numeracion inicial y final del boleto comun";
	Leer NIC, NFC;
	Escribir "Ingrese la numeracion inicial y final del boleto de trabajador";
	Leer NIT, NFT;
	
	CBE = NFE - NIE;
	CBT = NFT - NIT;
	CBC = NFC - NIC;
	PCOM = PES*2;
	PTR = PCOM*0.4;
	
	REC = (CBE*PES)+(CBT*PTR)+(CBC*PCOM);
	
	Escribir "Se vendieron: ", CBE, " boletos de estudiantes";
	Escribir "Se vendieron: ", CBT, " boletos de trabajador";
	Escribir "Se vendieron: ", CBC, " boletos comunes";
	Escribir "Se recaudo: ", REC, "$";
	
FinAlgoritmo
