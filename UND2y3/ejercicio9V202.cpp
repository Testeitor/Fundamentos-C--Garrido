//
//
// Realizar un programa para calcular las dos soluciones de una ecuación de segundo grado.
// Para ello leerá 3 valores (a,b,c) que corresponda a la ecuación: ax^2 + bx + c = 0. 
// Se puede producir un error en tiempo de ejecución ya que como todavia no hemos dado condicionales no podemos controlar
// el programa, por lo tanto si no metemos 3 valores que den 2 soluciones el programa se irá al traste.
//
//Ejemplo a utilizar: 2x^2 +4x -6 = 0
//
// Esta es la versión 2.1 del programa de ecuación de segundo grado. En la que controlamos que a sea distinto de cero. a !=0.
// Y controlamos que el discriminante sea distinto de cero discriminante >=0.

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
	
	//3.1 Ahora realizamos la estructura condicional para controlar el a !=0.
	
		if ( a !=0){ //3.2 Si 'a' es distinto de 0 realizamos la siguiente condicional.
			
					if (discriminante >= 0 ){ //3.3 Si el discriminante es mayor igual que 0 realizamos el calculo de las dos ecuaciones.
		
						//Solución1:

						cout << "Solución 1: " << (-b+sqrt(discriminante))/(2*a) << endl;

						//Solución2:

						cout << "Solución 2: " << (-b-sqrt(discriminante))/(2*a) << endl;
					
					}
					else{ //3.4 Si la condicion es false le decimos por pantalla que es una raiz compleja.
					
						cout << "Raiz compleja" << endl;
						
					} // Final condicional 3.3
		}
		else
		{
			
		//3.3 Si el resultado de la condicional es falso nos mostraría una raiz -c/b.
		
		cout << " Es solo una raiz" << -c/b  << endl;
			
		}
		
	// Final del condicional 3.1

}   //Final del programa.
