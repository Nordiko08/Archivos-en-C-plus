Algoritmo AutosQueCirculanAc3Guia1
	Definir patente Como Caracter;
	Definir hora1, hora2, hAux, hmin, hseg Como Entero;
	Definir min1, min2, minAux, minseg Como Entero;
	Definir seg1, seg2, segAux, seg Como Entero;
	Definir segm, segh Como Real;
	Definir Aux Como Real;
	
	Escribir "Ingrese la patente del vehiculo";
	Leer patente;
	Escribir "Ingrese la hora en que paso por el primer puesto";
	Leer hora1;
	Escribir "Ingrese los minutos en el que paso por el primer puesto";
	Leer min1;
	Escribir "Ingrese los segundos en el que paso por el primer puesto";
	Leer seg1;
	Escribir "Ingrese la hora en que paso por el segundo puesto";
	Leer hora2;
	Escribir "Ingrese los minutos en el que paso por el segundo puesto";
	Leer min2;
	Escribir "Ingrese los segundos en el que paso por el segundo puesto";
	Leer seg2;
	
	hAux = hora1 - hora2;//resta la hora del puesto 1 y 2 para determinar el tiempo
	minAux = min1 - min2;//resta los min del puesto 1 y 2 para determinar el tiempo
	segAux = seg1 - seg2;//resta los seg del puesto 1 y 2 para determinar el tiempo
	hmin = hAux * 60;//multiplica la hora para sacar min
	hseg = hmin * 60;//multiplica min para sacar seg
	minseg = minAux * 60;//multiplica min para sacar seg
	seg = hseg + minseg + segAux;//suma la cantidad de seg total
	segm = seg/60;//divide seg para sacar cant de min
	segh = segm/60;//divide min para sacar cant de hs
	
	aux = redon(-7.5 / segh);//calculo de distancia entre tiempo en hs para allar velocidad
	
	Escribir "El auto con la patente ", patente, " recorrio el pueblo a una velocidad de ",Aux," km/h";
	
	
FinAlgoritmo
