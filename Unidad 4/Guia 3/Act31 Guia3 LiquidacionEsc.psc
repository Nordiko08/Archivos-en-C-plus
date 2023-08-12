Algoritmo Act31Guia3LiquidacionEsc
	Definir CodEsc Como Entero;//Codigo de escuela
	Definir DNI Como Entero;//DNI del docente
	Definir NyA Como Caracter;//Nombre y apellido del docente
	Definir Sueld Como Real;//Sueldo del docente
	Definir Mes Como Caracter;//Nombre del mes a liquidar
	Definir CantDoc Como Entero;//Cantidad de docentes procesados
	Definir Totdoc Como Entero;//total de docentes de las escuela general
	Definir TotdocAux Como Entero;//Aux de total de docentes
	Definir TotEsc Como Real;//Total a pagar en la escuela
	Definir TotTodEsc Como Real;//Total a pagar en todas las escuelas
	Definir CantMax Como Entero;//Cantidad de docentes que cobran mas de 10.000
	Definir CantmaxTot Como Entero;//cantidad maxima total de docentes total
	CodEsc=0; DNI=0; Sueld=0; Totdoc=0; TotTodEsc=0; CantmaxTot=0;
	Leer CodEsc;
	Mientras CodEsc<>999 Hacer
		TotdocAux=0; CantMax=0; TotEsc=0; CantDoc=0;
		Leer Mes;
		Escribir "LIQUIDACION DEL MES DE ",Mes;
		Escribir "ESCUELA: ",CodEsc;
		Leer CantDoc;
		Escribir "DOCUMENTO     APELLIDO Y APELLIDO     SUELDO";
		Mientras TotdocAux<CantDoc Hacer
			Leer DNI,NyA,Sueld;
			Escribir DNI,"            ",NyA,"          $",Sueld;
			TotdocAux=TotdocAux+1;
			TotEsc=TotEsc+Sueld;
			Si Sueld>=10000 Entonces
				CantMax=CantMax+1;
			FinSi
		FinMientras
		Escribir "TOTAL A PAGAR EN LA ESCUELA: $",TotEsc;
		Escribir "CANTIDAD DE DOCENTES PROCESADOS: ",CantDoc;
		Escribir "CANTIDAD DE DOCENTES QUE COBRAN MAS DE $10.000: ",CantMax;
		TotTodEsc=TotTodEsc+TotEsc;
		CantmaxTot=CantmaxTot+CantMax;
		Totdoc=Totdoc+CantDoc;
		Leer CodEsc;
	FinMientras
	Escribir "LIQUIDACION DEL MES DE ",Mes;
	Escribir "CANTIDAD DE DOCENTES PROCESADOS: ",Totdoc;
	Escribir "TOTAL A PAGAR EN TODAS LAS ESCUELAS: $",TotTodEsc;
	Escribir "CANTIDAD DE DOCENTES QUE COBRAN MAS DE $10.000: ",CantmaxTot;
FinAlgoritmo