//
//
// Tabla de Multiplicar de cualquier número.
//
//


#include <iostream>
using namespace std;

int main(){


	//0.Declaración de Variables

	int numero_tabla = 0;
	int contador = 1;
	
	//1.Le pedimos al usuario que intriduzca un número entero y lo guardamos en un espacio de memoria.

	cout << "Introduzca un número entero: " << endl;

	cin >> numero_tabla;
	
	
	//2.Ahora creamos la estructura repetitiva empleando do while.

	do{

	cout << numero_tabla << " x " << contador << " = " << contador * numero_tabla << endl;

	contador = contador + 1;

	}while(contador<=10);


}
