//
//
// Tabla de Multiplicar del 7
//
//


#include <iostream>
using namespace std;

int main(){


	//0.Declaración de Variables

	int contador = 1;
	const int numero_tabla = 7;
	
	
	//1.Ahora creamos la estructura repetitiva empleando do while.

	do{

	cout << numero_tabla << " x " << contador << " = " << contador * 7 << endl;

	contador = contador + 1;

	}while(contador<=10);


}
