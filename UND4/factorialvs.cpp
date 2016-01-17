//
//
//	Factorialvs.cpp
//	Calcular el Factorial de un número entero. Realizarlo de 2 formas (Recursivo e Iterativo)
//
//

#include <iostream>
using namespace std;

int calcularFactorialIterativo(int n_factorial){

	int factorial = 1;
	int i = 0;
	
	for(i=1;i<=n_factorial;i++){
	factorial *=i;
	}

	return factorial;
}

int calcularFactorialRecursivo(int n){

	// 1 si n=0 ---- CASO BASE ----
	// n* (n-1)! si n>0 

	int f = 0;
	
	if (n==0){

	f = 1;

	}else{
		f = n*calcularFactorialRecursivo(n-1);
	}

	return f;
}


int main(){


		//Declarar Variables

		int numeroFactorial; //Número al que calcular su factorial
		int resul_recursivo = 0;
		int resul_iterativo = 0;

		cout << "Introduzca un número para calcular su factorial" << endl;
		cin >> numeroFactorial;

		
		resul_recursivo = calcularFactorialRecursivo(numeroFactorial);
		resul_iterativo = calcularFactorialIterativo(numeroFactorial);

		cout << "El factorial de: " << numeroFactorial << " es: " << resul_recursivo << " Calculado de Forma Recursiva" << endl;
		cout << "El factorial de: " << numeroFactorial << " es: " << resul_iterativo << " Calculado de Forma Iterativa" << endl;



}//Final del Programa
