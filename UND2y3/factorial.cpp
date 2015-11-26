//
//
// Crear un programa que calcule el factorial de un número.
// Formula de calcular el factorial de un número positivo: n!=n⋅(n−1)!
// Ejemplo: 5! = 5⋅4⋅3⋅2⋅1 = 120

#include <iostream>
using namespace std;

int main(){


		//0.Declaración de Variables

		int numero_factorial = 0;
		int i = 0;
		int factorial = 1;


		//1.Ahora le pedimos al usuario que introduzca un número para calcular el factorial.

		cout << "Introduzca un número para calcular su factorial: " << endl;

		cin >> numero_factorial;


		//2.Ahora empleamos un bucle for para calcular el factorial de "numero_factorial";

		for(i=1;i<=numero_factorial;i++){

		factorial *=i; 

		}

		cout << numero_factorial << "!= " << factorial << endl;

}//Fin de Programa
