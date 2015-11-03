//
//
// Realizar un programa para calcular las dos soluciones de una ecuación de segundo grado.
// Para ello leerá 3 valores (a,b,c) que corresponda a la ecuación: ax^2 + bx + c = 0. 
// Se puede producir un error en tiempo de ejecución ya que como todavia no hemos dado condicionales no podemos controlar
// el programa, por lo tanto si no metemos 3 valores que den 2 soluciones el programa se irá al traste.
//
//Ejemplo a utilizar: 2x^2 +4x -6 = 0


#include <iostream>
#include <cmath> // Biblioteca Matemática para resolución de operaciones matemáticas complejas. En este caso: sqrt

using namespace std;

int main()
{

	//0.Definimos las variables.
	
	int a,b,c;
	int discriminante; // Es el resultado de la raiz cuadrada de b*b -4*a*c
	
	//1.Le pedimos al usuario que introduzca 3 número enteros para a,b,c.

	cout << "Introduzca 3 números enteros separados por un espacio: ";

	//2. Recogemos los números enteros y los guardamos en a,b,c.

	cin >> a >> b >> c;

	//3.Realizamos la operaciones, empezando por el discriminante.

	discriminante = b*b-4*a*c;

	//3.1 Ahora realizamos el cálculo de los dos resultados de la ecuación de 2º grado.


	    //Solución1:

		cout << "Solución 1: " << (-b+sqrt(discriminante))/(2*a) << endl;

	    //Solución2:

		cout << "Solución 2: " << (-b-sqrt(discriminante))/(2*a) << endl;

}
