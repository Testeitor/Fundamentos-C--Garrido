//
//
//	Fibonaccivs.cpp
//	Calcular la sucesión de Fibonacci a partir de un número entero. Realizarlo de 2 formas (Recursivo e Iterativo)
//	0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597 ...
//

#include <iostream>
using namespace std;


int calcularFibonacciIterativo(int n){

	int numero_anterior2 = 0; //f(0) = 0
	int numero_anterior1 = 1; //f(1) = 1
	int numero_actual;
	int i;

	//Casos básicos

    	if (n >= 0){

          cout << "0 ";
        
    	}else if (n >= 1){

	        cout << "1 ";
        
	       }

	
	for(i=2;i<=n;i++){

	numero_actual = numero_anterior1 + numero_anterior2;

	cout << numero_actual << " ";

	numero_anterior2 = numero_anterior1;

	numero_anterior1 = numero_actual;
		
	}

	return numero_actual;
}


int calcularFibonacciRecursivo(int n){

	// 0 Si f(0) = 0 ----CASO BASE 1------
	// 1 Si f(1) = 1 ----CASO BASE 2------
	// n = (n-1) + (n-2) Si f(n) >=1
		
	int f = 0;

	if(n == 0){

	f = 0;

	}else if(n == 1){

		f = 1;

		}else if(n > 1){

			f = calcularFibonacciRecursivo(n-1) + calcularFibonacciRecursivo(n-2);

		}

		return f;
}


int main(){


		//Declaración de Variables

		int numero = 0; //Número a calcular la sucesión de Fibonacci
		int resultado_recursiva = 0;
		int resultado_iterativo = 0;

		
		cout << "Introduzca un número para calcular la sucesión de Fibonacci:" << endl;
		cin >> numero;

		
		resultado_recursiva = calcularFibonacciRecursivo(numero);
		resultado_iterativo = calcularFibonacciIterativo(numero);

		
		cout << "El resultado es: " << resultado_iterativo << " Calculado de Forma Iterativa" << endl;
		cout << "El resultado es: " << resultado_recursiva << " Calculado de Forma Recursiva" << endl;
		
}//Final del Programa
