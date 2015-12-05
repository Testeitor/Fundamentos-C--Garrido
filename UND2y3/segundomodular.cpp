//
//
// Realizar un programa para calcular las dos soluciones de una ecuación de segundo grado.
// Para ello leerá 3 valores (a,b,c) que corresponda a la ecuación: ax^2 + bx + c = 0. 
//
//Ejemplo a utilizar: 2x^2 +4x -6 = 0
//
//

#include <iostream>
#include <cmath> // Biblioteca Matemática para resolución de operaciones matemáticas complejas. En este caso: sqrt

using namespace std;

//Funciones

void ecuacionSegundoGrado(int a, int b, int c){


	int discriminante;
	discriminante = b*b-4*a*c;
		
		if ( a !=0){ 
			
			if (discriminante >= 0 ){ 
		
				//Solución1:

				cout << "Solución 1: " << (-b+sqrt(discriminante))/(2*a) << endl;

				//Solución2:

				cout << "Solución 2: " << (-b-sqrt(discriminante))/(2*a) << endl;
					
			}
			else{ 
					
				cout << "Raiz compleja" << endl;
						
			}


		}
		else{
		
		cout << " Es solo una raiz -c/b = " << -c/b  << endl;
			
		}
		


}



//Función Principal
int main(){


	//Definimos las variables.
	
	int num1,num2,num3 = 0;


	
	cout << "Introduzca 3 números enteros separados por un espacio: ";

	cin >> num1 >> num2 >> num3;

	ecuacionSegundoGrado(num1,num2,num3);

	

}   //Final del programa.
