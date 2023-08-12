Algoritmo cotizacionMonedaAct1Guia1
	Definir Peso, montoPeso Como Real;
	Definir Dolar, montoDolar Como Real;
	Definir Euro, montoEuro Como Real;
	Definir Rel, montoRel Como Real;
	
	Escribir "Ingrese monto en pesos";
	Leer Peso;
	Escribir "Ingresar cotizacion del Dolar";
	Leer Dolar;
	Escribir "Ingresar cotizacion del Euro";
	Leer Euro;
	Escribir "Ingresar cotizacion del Real";
	Leer Rel;
	
	montoDolar = Peso * Dolar;
	montoEuro = Peso * Euro;
	montoRel = Peso * Rel;
	
	Escribir "El equivalente de ",Peso,"$ pesos"," es de : ",montoDolar," USD";
	Escribir "El equivalente de ",Peso,"$ pesos"," es de : ",montoEuro," Euros";
	Escribir "El equivalente de ",Peso,"$ pesos"," es de : ",montoRel," Reales";
	
FinAlgoritmo
