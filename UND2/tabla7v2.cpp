//
//
// Escribir la tabla del 7.
//
//

#include <iostream>
using namespace std;

int main(){


	//0.Declaración de Variables

	const int numero_tabla = 7;
	int contador = 0;


	//1.Ahora creamos una estructura repetitiva empleando while

	cout << "La tabla del 7:" << endl;

	while(contador < 10){

	contador = contador +1;

	cout << numero_tabla << " x " << contador << " = " << 7*contador << endl;

	}


}// Final Programa
