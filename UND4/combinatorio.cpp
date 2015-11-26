//
//
// Elaborar un programa que calcule la combinatoria de 2 números.
// Fórmula: 
//             (a)  a!
//	          = --------
//	       (b)  b! (a-b)
//
// Ejemplo la combinatoria de 7 y 4 = 35.
//
//


#include <iostream>
using namespace std;

//Funciones.


//(2)Función para calcular el factorial de A y B.

int Factorial(int n_factorial){

	int i = 0;
	int factorial = 1;

	for(i=1;i<=n_factorial;i++){

	factorial *=i; 

	}

	return factorial;

}//(2)Fin Funcion Factorial.



//(1)Función para calcular el combinatorio de 2 números.

int Combinatorio(int a, int b){

	int factorial_a;
	int factorial_b;
	int factorial_ab;
	int ab;
	ab= a-b;
	
	factorial_a = Factorial(a);
	factorial_b = Factorial(b);
	factorial_ab = Factorial(ab);

	//cout << factorial_a << " , " << factorial_b << " , " << factorial_c << " , " << c << endl;

	int res_combinatorio;
	res_combinatorio = factorial_a/(factorial_b * factorial_ab);

	return res_combinatorio;


}//(1)Fin Funcion Combinatorio.



//Función Principal


int main(){


		//0.Declaración de Variables

		int numero1 = 0;
		int numero2 = 0;
		int resultado_combinatorio;

		//1.Le pedimos al usuario que introduzca dos números para calcular su combinatorio.

		cout << "Introduzca 2 números para calcular su combinatorio:" << endl;
		
		cin >> numero1 >> numero2;

		//2.Ahora invocamos a la funcion Combinatorio() y le pasamos como parametros los datos de las variables numero1 y numero2.

		resultado_combinatorio = Combinatorio(numero1,numero2);


		//3.Por último mostramos el resultado del combinatorio de los dos números.

		cout << "El resultado Combinatorio de los números: " << numero1 << " y " << numero2 << " = " << resultado_combinatorio << endl;



}//Final del Programa.
