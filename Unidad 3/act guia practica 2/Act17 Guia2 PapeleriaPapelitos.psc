Algoritmo Act17Guia2PapeleriaPapelitos
	Definir nPapel Como Entero;//N Papel
	Definir tPapel Como Caracter;//Tipo de papel
	Definir colorPapel Como Entero;//Numero del papel 4
	Definir cPapel Como Caracter;//Nombre del color del papel 4
	Definir Cant Como Entero;//Cantidad de rollos vendidos
	Definir Prec Como Entero;//Precio de papel
	Definir Color Como Caracter;//Color del papel a comprar
	Definir Rec Como Entero;//Recarga
	Definir Desc Como Real;//Descuento
	Definir Tot Como Real;//Total
	Definir TotAbonar Como Real;//Total con descuento aplicado
	Definir Aux Como Real;
	
	Escribir "Ingrese tipo de papel";
	Escribir "1. Blanco 80 gramos";
	Escribir "2. Blanco 70 gramos";
	Escribir "3. Papel prensa";
	Escribir "4. ilustración color (blanco, azul, rojo)";
	Leer nPapel;
	
	Segun nPapel Hacer
		1:tPapel="Blanco 80 gramos";
			Escribir "Ingrese el precio de ",tPapel," por rollo";
			Leer Prec;
			Escribir "Ingrese cantidad de rollos a comprar";
			Leer Cant;
			Tot=Prec*Cant;
			Si Cant>10 Entonces
				Desc=Tot*0.15;
				TotAbonar=Tot-Desc;
			SiNo
				Desc=0;
				TotAbonar=Tot;
			FinSi
		2:tPapel="Blanco 70 gramos";
			Escribir "Ingrese el precio de ",tPapel," por rollo";
			Leer Prec;
			Escribir "Ingrese cantidad de rollos a comprar";
			Leer Cant;
			Tot=Prec*Cant;
			Si Cant>10 Entonces
				Desc=Tot*0.15;
				TotAbonar=Tot-Desc;
			SiNo
				Desc=0;
				TotAbonar=Tot;
			FinSi
		3:tPapel="Papel prensa";
			Escribir "Ingrese el precio de ",tPapel," por rollo";
			Leer Prec;
			Escribir "Ingrese cantidad de rollos a comprar";
			Leer Cant;
			Tot=Prec*Cant;
			Si Cant>10 Entonces
				Desc=Tot*0.15;
				TotAbonar=Tot-Desc;
			SiNo
				Desc=0;
				TotAbonar=Tot;
			FinSi
		4:tPapel="Ilustracion";
			Escribir "Ingrese el precio de ",tPapel," por rollo";
			Leer Prec;
			Escribir "Ingrese cantidad de rollos a comprar";
			Leer Cant;
			Tot=Prec*Cant;
			
			Escribir "Ingrese el color del papel";
			Escribir "1.Blanco";
			Escribir "2.Azul";
			Escribir "3.Rojo";
			Leer colorPapel;
			Segun colorPapel Hacer
				1: cPapel="Ilustracion Blanco";
				2: cPapel="Ilustracion Azul";
					Aux=Tot*0.05;
					Tot=Tot+Aux;
				3: cPapel="Ilustracion Rojo";
					Aux=Tot*0.05;
					Tot=Tot+Aux;
			FinSegun
			Si Cant>10 Entonces
				Desc=Tot*0.15;
				TotAbonar=Tot-Desc;
			SiNo
				Desc=0;
				TotAbonar=Tot;
			FinSi
	FinSegun
	
	Escribir "Papeleria Papelitos";
	Escribir "Tipo de papel: ",tPapel;
	Escribir "Precio de ref: $",Prec;
	Escribir "Descuento: $",Desc,"  ","Total: $",Tot;
	Escribir "Total a Abonar: $",TotAbonar;
	
FinAlgoritmo
