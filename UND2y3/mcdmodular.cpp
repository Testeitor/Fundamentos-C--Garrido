//
//
// Se desea calcular el máximo común divisor (mdc) de dos números enteros. Para ello
// utilizamos el algoritmo de Euclides.Ejemplo:
// Si se divide 60 entre 48 dando un cociente de 1 y un resto de 12, el MCD será por tanto divisor de 12. 
// Después se divide 48 entre 12 dando un resto de 0, lo que significa que 12 es el MCD. 
//
//


#include  <iostream>
using namespace std;

//Funciones


int mcd(int num1, int num2){

	int resto = 0;
	resto = num1 % num2;


	while(resto!=0){

	num1 = num2;

	num2 = resto;

	resto = num1 % num2;

	}


	return num2;


}



//Función Principal
int main(){


	//0.Declaramos las Variables

	int numero1 = 0;
	int numero2 = 0;
	int resultado = 0;

	//1. Ahora le pedimos al usuario que introduzca dos número para calcular el M.C.D

	cout << "Introduzca dos números para calcular el M.C.D" << endl;

	cin >> numero1 >> numero2;

	resultado = mcd(numero1, numero2);

	cout << "El M.C.D es: " << resultado << endl;

}//Fin del Programa
