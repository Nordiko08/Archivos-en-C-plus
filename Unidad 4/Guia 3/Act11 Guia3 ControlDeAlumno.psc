Algoritmo Act12Guia3ControlDeAlumno
	Definir N Como Entero;//Cantidad de alumnos
	Definir NyA Como Caracter;//Nombre del alumno
	Definir Peso Como Real;//Peso del alumno
	Definir Alt Como Real;//Altura del alumno
	Definir MaxAlto Como Real;
	Definir NyAAlto Como Caracter;
	Definir NyAPeso Como Caracter;
	Definir MinPeso Como Real;
	Definir Aux Como Entero;
	Aux=0; MaxAlto=0; MinPeso=999;
	NyAAlto="Ninguno"; NyAPeso="Ninguno";
	Leer N;
	Repetir
		Leer Nya;
		Leer Peso;
		Leer Alt;
		Si Alt>MaxAlto Entonces
			MaxAlto=Alt;
			NyAAlto=NyA;
		FinSi
		Si Peso<MinPeso Entonces
			MinPeso=Peso;
			NyAPeso=NyA;
		FinSi
		Aux=Aux+1;
	Hasta Que Aux==N
	Escribir "El Alumno mas alto es: ",NyAAlto;
	Escribir "El alumno con menor peso es: ",NyAPeso;
FinAlgoritmo
