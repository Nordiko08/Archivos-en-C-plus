/*Se desea generar un archivo de texto que guarde los valores de x e y donde y = a x2 + bx + c.
Los valores de a, b y c son ingresados por teclado. Los valores de x son números enteros desde 1
hasta 1000.
En cada renglón del archivo deben estar los valores de x e y separados por un espacio en blanco.
Utlizar una función llamada funcion_cuadratica que recibe de parámetros los coeficientes a, b, c y el
valor de x y devuelve el valor de y.*/

#include <iostream>
#include <fstream>
using namespace std;
int funcion_cuadratica(int A, int B, int C, int X);

int main(int argc, char *argv[]) {
	ofstream Archivo;
	int nCoefA;
	int nCoefB;
	int nCoefC;
	int nResult;
	Archivo.open("Ejemplo.txt");
	if (Archivo.fail()){
		cout << "Error al crear el archivo";
	}
	else {
		cout<<"Ingrese coeficiente a: ";
		cin>>nCoefA;
		cout<<"Ingrese coeficiente b: ";
		cin>>nCoefB;
		cout<<"Ingrese coeficiente c: ";
		cin>>nCoefC;
		for (int nI=0; nI<1000; nI++){
			nResult=funcion_cuadratica(nCoefA, nCoefB, nCoefC, nI);
			cout<< nI <<" "<<nResult<<endl;
			Archivo << nI <<" "<< nResult << endl;
		}
	}
	Archivo.close();
	return 0;
}

int funcion_cuadratica(int A, int B, int C, int X){
	int Y=A*X*X+B*X+C;
	return Y;
}

