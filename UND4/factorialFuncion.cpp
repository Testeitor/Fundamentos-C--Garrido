//
//
// Crear un programa que calcule el factorial de un número.
// Formula de calcular el factorial de un número positivo: n!=n⋅(n−1)!
// Ejemplo: 5! = 5⋅4⋅3⋅2⋅1 = 120
//
//

#include <iostream>
using namespace std;

//Funciones.Función para calcular el factorial de un número.


int Factorial(int n_factorial){

	int i = 0;
	int factorial = 1;

	for(i=1;i<=n_factorial;i++){

	factorial *=i; 

	}

	return factorial;

}


//Función Principal
int main(){


		//0.Declaración de Variables

		int numero_factorial = 0;
		int resultado_factorial;
		

		//1.Ahora le pedimos al usuario que introduzca un número para calcular el factorial.

		cout << "Introduzca un número para calcular su factorial: " << endl;

		cin >> numero_factorial;


		//2.Ahora invocamos la función factorial y le pasamos como parametro el contenido de la variable numero_factorial.

		resultado_factorial = Factorial(numero_factorial);
		
		//3.Por último mostramos el resultado del factorial del número proporcionado por el usuario.

		cout << numero_factorial << "!= " << resultado_factorial << endl;

}//Fin de Programa
