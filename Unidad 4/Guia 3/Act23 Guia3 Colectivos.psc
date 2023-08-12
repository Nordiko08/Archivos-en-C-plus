Algoritmo Act23Guia3Colectivos
	Definir BEst Como Entero;//Boleto estudiante
	Definir BCom Como Entero;//Boleto comun
	Definir Bjub Como Entero;//Boleto jubilado
	Definir CantEst Como Entero;//Cantidad boletos estudiante
	Definir CantCom Como Entero;//Cantidad boletos comun
	Definir CantJub Como Entero;//Cantidad boleto jubilado
	Definir NroCol Como Entero;//Numero de colectivo
	Definir TotxRec Como Real;//Total recaudado por recorrido
	Definir TotRec Como Real;//Total recaudado
	Definir MensRec Como Entero;//Cole que menos recaudo
	Definir NroColmens Como Entero;//Numero de cole que menos recaudo
	Definir AuxBest Como Real;//Auxiliar de precio del boleto
	Definir AuxBjub Como Real;//Auxiliar  de precio jubilado
	Definir CantxCom Como Entero;
	Definir CantxEst Como Entero;
	Definir CantxJub Como Entero;
	
	BEst=0; BCom=0; Bjub=0;
	CantCom=0; CantEst=0; CantJub=0;
	TotRec=0; MensRec=999;
	NroCol=0; NroColmens=0;
	CantxCom=0; CantxEst=0; CantxJub=0;
	
	Escribir "Ingrese nro de colectivo";
	Leer NroCol;
	Escribir "Ingrese el precio comun del boleto";
	Leer BCom;
	Mientras NroCol<>99 Hacer
		Escribir "Ingrese cantidad de boletos de estudiante, comun y jubilado vendidos";
		Leer CantEst, CantCom, CantJub;
		
		CantxCom=CantxCom+CantCom;
		CantxEst=CantxEst+CantEst;
		CantxJub=CantxJub+CantJub;
		
		AuxBest=BCom*0.2;
		BEst=BCom-AuxBest;
		AuxBjub=BCom*0.4;
		Bjub=BCom-AuxBjub;
		
		TotxRec=(CantCom*BCom)+(CantEst*BEst)+(CantJub*Bjub);
		Escribir "TOTAL RECAUDADO EN EL RECORRIDO $",TotxRec;
		
		Si MensRec>TotxRec Entonces
			MensRec=TotxRec;
			NroColmens=NroCol;
		FinSi
		
		TotRec=TotRec+(CantEst*BEst)+(CantCom*BCom)+(CantJub*Bjub);
		Escribir "Ingrese nro de  colectivo";
		Leer NroCol;
	FinMientras
	Escribir "TOTAL DE BOLETOS DE  ESTUDIANTE VENDIDOS EN EL DIA: ",CantxEst;
	Escribir "TOTAL  RECAUDADO EN TODOS LOS  RECORRIDOS: $",TotRec;
	Escribir "EL NUMERO DE COLECTIVO QUE MENOS RECAUDO: ",NroColmens,"    RECAUDO: $",MensRec;
FinAlgoritmo