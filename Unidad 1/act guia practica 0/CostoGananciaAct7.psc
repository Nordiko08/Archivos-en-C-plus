Algoritmo PorcentajeDeGananciaAct7
	Definir PrecioVenta, CostoProducto, PorGanancia, Aux Como Numero;
	Escribir "Ingrese el precio de venta del producto";
	Leer PrecioVenta;
	Escribir "Ingrese el porcentaje de ganancia del producto";
	Leer PorGanancia;
	
	Aux = PorGanancia * PrecioVenta / 100;
	CostoProducto = PrecioVenta - Aux;
	
	Escribir "El costo de su producto es de: ",CostoProducto,"$";
FinAlgoritmo
