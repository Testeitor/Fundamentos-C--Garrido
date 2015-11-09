//
//
// Un satélite realiza una transmisión de un número indefinido de datos enteros que terminan con número negativo.
// Empleando for.
//


#include <iostream>
using namespace std;

int main(){



		//0.Declaración de Variables

		int contador = 0;
		int dato = 0;

		//1. Empleamos un bucle for para la transmisión de datos.

		for(contador=1;dato>=0;contador++){

		cout << "Introduzca un número entero que no sea negativo" << endl;

		cin >> dato;
		
		}

		cout << "Final de la transmisión porque ha introducido: " << dato << endl;  




}//Final de programa.
