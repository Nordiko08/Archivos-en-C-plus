Algoritmo RecorridoDistanciaAct7Guia1
	Definir Ax,Ay,Bx,By,Cx,Cy Como Entero;
	Definir DistAB,DistBC,DistCA Como Real;
	Definir Total Como Real;
	Escribir "Ingrese las coordenadas X Y del punto A:";
	Leer Ax,Ay;
	Escribir "Ingrese las coordenadas X Y del punto B:";
	Leer Bx,By;
	Escribir "Ingrese las coordenadas X Y del punto C:";
	Leer Cx,Cy;
	DistAB=rc((Ax-Bx)^2+(Ay-By)^2);
	DistBC=rc((Cx-Bx)^2+(Cy-By)^2);
	DistCA=rc((Ax-Cx)^2+(Ay-Cy)^2);
	Total=DistAB+DistBC+DistCA;
	Escribir "Distancia total: ",Total;
FinAlgoritmo