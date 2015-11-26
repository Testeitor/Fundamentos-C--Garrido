//
//
// Escriba un programa que después de pedir dos números, presente al usuario
// un conjunto de 4 opciones: "Suma" "Resta" "Producto" "División". Una vez
// que el usuario seleccione la deseada, el programa presentará el resultado
// de la operación correspondiente.
//
//


#include <iostream>
using namespace std;

int main()
{

	//0.Declaramos las Variables

	double numero1 = 0.0;
	double numero2 = 0.0;

	char operador;
	
	double suma = 0.0;
	double resta = 0.0;
	double multiplicacion = 0.0;
	double division = 0.0;
	
	//1.Pedimos al usuario que introduzca dos numeros y lo almacenamos en un espacio de memoria.

	cout << "Introduzca un número: " << endl;

	cin >> numero1;

	cout << "Introduzca otro número: " << endl;

	cin >> numero2;

	//2.Ahora le pedimos al usuario que operación quiere realizar con los dos números obtenidos y lo guardamos en memoria.

	cout << "Pulse [S]uma/[R]esta/[P]roducto/[D]ivisión" << endl;
	
	cin >> operador;

	//3.0.Declaramos las operaciones a implementar en el apartado 3.1

	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;

	//3.1.Ahora implementamos la estructura condicional múltiple (Switch) para elegir que operación usar.

	switch (operador){

	case 'S':
	case 's':
		cout << "La suma de: " << numero1 << " + " << numero2 << " = " << suma << endl;
		break;

	case 'R':
	case 'r':
		cout << "La resta de: " << numero1 << " - " << numero2 << " = " << resta << endl;
		break;

	case 'P':
	case 'p':
		cout << "La Multiplicación de: " << numero1 << " * " << numero2 << " = " << multiplicacion << endl;
		break;

	case 'D':
	case 'd':
		cout << "La división de: " << numero1 << " / " << numero2 << " = " << division << endl;
		break;

	default:
		cout << "No ha pulsado la letra correcta" << endl;


	}//Final del Swicth



}//Fin del programa.
