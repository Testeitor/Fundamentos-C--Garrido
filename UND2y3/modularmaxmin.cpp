//
//
// Escriba un programa que lea 100 valores e imprima el máximo y el mínimo en la salida estandar.
//
//



#include <iostream>
using namespace std;

//Funciones

void maxmin(int &maximo, int &minimo, int valor){

	

	if(valor>maximo){

	maximo = valor;

	}		
	else if(valor<minimo){

	minimo = valor;
	
	}


}

//Funcion Principal

int main(){


		//0.Declaración de las Variables

		int numero = 0;
		int i = 0;
		int max = 5;
		int min = 5;
		

		//1.Creamos un bucle for para que pida 100 números, nosotros haremos 10 para no tener que ecribir los 100.
		// y comprobaremos si es mayor o menor y lo almacenaremos en las variables "maximo" o "minimo".

		for(i=1;i<=10;i++){

		cout << "Introduzca un número: " << endl;

		cin >> numero;

		maxmin(max, min, numero);

		}

		cout << "El número máximo es: " << max << endl;
		cout << "El número mínimo es: " << min << endl;


} //Fin del Programa
