Algoritmo TotalACobrarAct11
	Definir NYA Como Caracter;
	Definir Cant,PrecioU,MontTot,Desc,Iva Como Numero;
	Definir MontDesc, totPagar, AuxIva, DescApl Como Numero;
	Cant=0 ; PrecioU=0 ;MontTot=0 ;Desc=0 ; Iva=0;
	Escribir "Ingrese Nombre y Apellido del cliente";
	Leer NYA;
	Escribir "Ingrese cantidad del articulo comprado";
	Leer Cant;
	Escribir "Ingrese precio del articulo comprado";
	Leer PrecioU;
	Escribir "Ingrese el porcentaje a descontar";
	Leer Desc;
	Escribir "Ingrese IVA";
	Leer Iva;
	
	MontTot = Cant * PrecioU;
	MontDesc = MontTot * Desc /100 ;
	DescApl = MontTot - MontDesc;
	AuxIva = DescApl * Iva / 100;
	totPagar = DescApl + AuxIva;
	
	Escribir "Nombre del cliente: ",NYA;
	Escribir "Cantidad de articulos comprados: ", Cant;
	Escribir "Precio total de los articulos comprados: ", MontTot,"$";
	Escribir "El descuento aplicado es de: ",Desc,"% ", MontDesc,"$";
	Escribir "El IVA aplicado es de: ",Iva,"% ", AuxIva,"$";
	Escribir "El total a pagar es de: ",totPagar,"$";
FinAlgoritmo
