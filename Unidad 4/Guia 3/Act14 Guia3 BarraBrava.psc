Algoritmo Act14Guia3BarraBrava
	Definir NyA Como Caracter;//Apodo
	Definir VecDet Como Entero;//Veces detenido
	Definir can1 Como Entero;//1 vez detenido
	Definir can2 Como Entero;//2-4 veces detenido
	Definir can3 Como Entero;//5-10 veces detenido
	Definir can4 Como Entero;//Mas de 10 veces detenido
	Definir NyAMayor Como Caracter;//Nombre del mayor detenido
	Definir CantMayor Como Entero;//Cantidad mayor que fue detenido
	Definir CantInt Como Entero;//Cantidad de integrantes encuentados
	
	VecDet=0; CantInt=0; CantMayor=0;
	can1=0;can2=0;can3=0;can4=0;
	
	Escribir "Ingrese apodo y cantidad de veces detenido";
	Leer NyA;
	Mientras NyA<>"ZZZ" Hacer
		Leer VecDet;
		
		Si VecDet=1 Entonces
			can1=can1+1;
		SiNo
			si VecDet>=2 y VecDet<=4 Entonces
				can2=can2+1;
			SiNo
				si VecDet>4 y VecDet<=10 Entonces
					can3=can3+1;
				SiNo
					can4=can4+1;
				FinSi
			FinSi
		FinSi
		Si VecDet>CantMayor Entonces
			CantMayor=VecDet;
			NyAMayor=NyA;
		FinSi
		CantInt=CantInt+1;
		Leer NyA;
	FinMientras
	
	Escribir "Cantidad de detenciones          ", " Cantidad de integrantes";
	Escribir "1                                          ", can1;
	Escribir "2-4                                        ", can2;
	Escribir "5-6                                        ", can3;
	Escribir "mas de 10                                  ", can4;
	Escribir "Cantidad de personas encuentadas: ", CantInt;
	Escribir "El integrante con mayor cantidad de detenciones es: ",NyAMayor;
FinAlgoritmo
