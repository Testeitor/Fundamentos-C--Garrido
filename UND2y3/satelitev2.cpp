//
//
// Un satélite realiza una transmisión de un número indefinido de datos enteros que terminan
// con un número negativo. Ejemplo: 10, 20, 30, 40, 50, -1
//
//

#include <iostream>
using namespace std;

int main(){


	//0.Declaración de variables

	int dato = 0;

	//1.Le pedimos al usuario que introduzca un número y lo guardamos en un espacio de memoria

	cout << "Introduzca un número que no sea negativo" << endl;

	cin >> dato;

	//2.Ahora creamos la estructura de control emplando un while.

	while(dato >=0 ){

	cout << "Introduzca un número" << endl;

	cin >> dato;	

	}

	//3.Si introduce un número negativo decimos que ha finalizado la transmisión.

	cout << "Final de la transmisión debido al introducir un número negativo: " << dato << endl;



}

