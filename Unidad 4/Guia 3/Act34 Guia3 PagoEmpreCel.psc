Algoritmo Act34Guia3PagoEmpreCel
	Definir CodEmpre Como Entero;//Codigo de empresa (1,2,3 o 4)
	Definir NyAEmpr Como Caracter;//Nombre de la empresa
	Definir NyA Como Caracter;//Nombre del usuario
	Definir Mes Como Caracter;//Mes de facturacion
	Definir FPago Como Caracter;//Fecha de pago
	Definir NPago Como Entero;//Numero forma de pago
	Definir Import Como Real;//Importe a pagar
	Definir FormPago Como Caracter;//Forma de pago
	Definir LugPago Como Entero;//Lugar de pago(1,2,3 o 4)
	Definir NomLugPago Como Caracter;//Nombre de lugar de pago
	Definir TotEmpr Como Entero;//Total de la empresa
	Definir TotTod Como Real;//Total cobrado de todas las empresas
	Definir CanUsua Como Entero;//Cantidad de usuarios
	Definir Cont Como Entero;//Contador de usuarios
	Definir NUMMAX Como Entero;
	Definir NyAMin Como Caracter;//Nombre del menor recaudado
	Definir PagaRapi Como Real;//Pagado en rapipago y personal
	Definir OtroMovis Como Real;//Pagado en otros movistar
	CodEmpre=0; Import=0; LugPago=0; TotTod=0; 
	NUMMAX=999999; NyAMin=""; PagaRapi=0; OtroMovis=0;
	Leer CodEmpre;
	Mientras CodEmpre<>99 Hacer
		Cont=0; TotEmpr=0;
		Leer Mes;
		Segun CodEmpre Hacer
			1:NyAEmpr="CLARO";
			2:NyAEmpr="PERSONAL";
			3:NyAEmpr="MOVISTAR";
			4:NyAEmpr="TUENTI";
			De Otro Modo:
				CodEmpre=99;
		FinSegun
		Leer CanUsua;
		Escribir "RESUMEN DEL MES: ",Mes;
		Escribir "CODIGO DE LA EMPRESA :",NyAEmpr;
		Escribir "FECHA     USUARIO     IMPORTE     FORMA DE PAGO";
		Mientras CanUsua<>Cont Hacer
			Import=0;
			Leer FPago,NyA,Import,NPago;
			Segun NPago Hacer
				1:FormPago="CONTADO";
				2:FormPago="DEBITO";
				3:FormPago="TARJETA DE CREDITO";
			FinSegun
			Si FormPago="CONTADO" Entonces
				Leer LugPago;
				Segun LugPago Hacer
					1:NomLugPago="PagoFacil";
					2:NomLugPago="RapiPago";
					3:NomLugPago="Banco";
					4:NomLugPago="Otro";
				FinSegun
				Si NyAEmpr="PERSONAL" y NomLugPago="RapiPago" Entonces
					PagaRapi=PagaRapi+Import;
				SiNo
					Si  NyAEmpr="MOVISTAR" y NomLugPago="Otro" Entonces
						OtroMovis=OtroMovis+Import;
					FinSi
				FinSi
			FinSi
			Escribir FPago,"     ",NyA,"     ",Import,"     ",FormPago;
			Cont=Cont+1;
			TotEmpr=TotEmpr+Import;	
		FinMientras
		Si TotEmpr<NUMMAX Entonces
			NUMMAX=TotEmpr;
			NyAMin=NyAEmpr;
		FinSi
		Escribir "TOTAL DE LA EMPRESA: $",TotEmpr;
		TotTod=TotTod+TotEmpr;
		Leer CodEmpre;
	FinMientras
	Escribir "TOTAL COBRADO DE TODAS LAS EMPRESAS: $",TotTod;
	Escribir "CODIGO DE EMPRESA DE MENOR RECAUDACION: ",NyAMin;
	Escribir "PERSONAL: TOTAL ABONADO EN RAPIPAGO: $",PagaRapi;
	Escribir "MOVISTAR: TOTAL ABONADO EN OTROS LUGARES DE PAGO: $",OtroMovis;
FinAlgoritmo
