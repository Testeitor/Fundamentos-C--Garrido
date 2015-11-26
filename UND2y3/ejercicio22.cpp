//
//
// Escribir un programa que lea un valor entero, y escriba en la salida estándar un mensaje
// indicando si es par o impar.
//
//


#include <iostream>
using namespace std;

int main()
{
	
	//0.Declaración de Variables

	int numero_usuario = 0;

	//1.0 Le pedimos al usuario que introduzca un número entero y lo guardamos en un espacio de memoria.

	cout << "Introduzca un número entero: "	<< endl;

	cin >> numero_usuario;
		
	//2.0 Ahora comprobamos si ese número es "par" o "impar".


	if(numero_usuario%2==0){ //Si el número_ usuario dividido entre 2 el resto es 0, entonces es par, sino es impar.

		cout << "El número " << numero_usuario << " es par" << endl;
	
	
	}
	else{

		cout << "El número " << numero_usuario << " es impar" << endl;


	     }
	
	
	
	
	
	
	
} // Fin de programa
