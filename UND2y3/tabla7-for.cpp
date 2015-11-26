//
//
// Elaborar un programa que muestre la tabla del 7.
// Empleando un bucle for.
//
//


#include <iostream>
using namespace std;

int main(){



		//0.Declaración de Variables

		int contador = 0;
		const int numero_tabla_multiplicar = 7;

		//1.Empleamos un bucle for para crear la tabla de multiplicar del 7.

		cout << "La tabla de multiplicar del 7" << endl;

		for(contador=0;contador<=10;contador++){

		cout << numero_tabla_multiplicar << " x " << contador << " = " << 7*contador << endl;

		}




}//Final de programa.
