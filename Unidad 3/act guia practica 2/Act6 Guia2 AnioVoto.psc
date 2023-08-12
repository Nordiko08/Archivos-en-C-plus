Algoritmo AnioVotoAct6Guia2
	Definir FNac, DVot Como Entero;
	Definir nDNac, nMNac, nANac Como Entero;
	Definir nDVot, nMVot, nAVot Como Entero;
	Definir AuxA Como Entero;
	Escribir "Ingrese la fecha de nacimiento de la forma ddmmaa";
	Leer FNac;
	
	nDNac = trunc( FNac / 10000);
	
	AuxA = FNac - nDNac * 10000;
	nMNac =  trunc(AuxA / 100);
	nANac = AuxA - nMNac * 100 + 2000;
	
	Escribir "Fecha en formato corto: ", nDNac, "/", nMNac, "/", nANac;
	Escribir "Ingrese la fecha de votacion en el formato ddmmaa";
	Leer DVot;
	
	nDVot = trunc(DVot / 10000);
	
	AuxA = DVot - nDVot * 10000;
	nMVot = trunc( AuxA / 100);
	nAVot = AuxA - nMVot *  100 + 2000;
	
	Escribir "Fecha  en formato corto: ", nDVot,"/",nMVot,"/",nAVot;
	AuxA =  nAVot - nANac;
	
	Si AuxA>=18 Entonces
		Si AuxA>18 Entonces
		Escribir "Es mayor de 18 y VOTA";
	SiNo
		
		Si nMNac < nMVot Entonces
			Escribir "Es mayor de 18 y VOTA";
	SiNo
		Si nMNac==nMVot y nDNac<=nDVot Entonces
			Escribir "Es mayor de 18 y VOTA";
		SiNo
			Escribir "Es menor de 18 y NO VOTA";
		FinSi
	FinSi
FinSi
SiNo Escribir "Es menor de 18 y NO VOTA";
FinSi

FinAlgoritmo
