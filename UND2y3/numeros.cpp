//
//
// Ejercicio de los dos números necesariamente distintos de 0.
// (Introduzca dos números, asegurar que introduzca dos números que no sean 0.)
//
//


#include <iostream>
using namespace std;

int main(){


	//0.Declaración de Variables

	double numero1 = 0.0;
	double numero2 = 0.0;


	//1.Ahora usamos do while para controlar que los dos números sean distintos de 0.


	do{

	cout << "1. Introduzca un número distinto de 0" << endl;

	cin >> numero1;

	}while(numero1 == 0);

	do{

	cout << "2. Introduzca otro número distinto de 0" << endl;

	cin >> numero2;

	}while(numero2 == 0);


	cout << "Muy bien has introducido dos números distinto de 0: " << numero1 << " y " << numero2 << endl;


}
