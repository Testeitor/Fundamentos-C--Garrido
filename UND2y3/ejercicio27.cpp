//
//
// Escriba un programa que lea tres números reales, calcule el máximo, y finalmente lo escriba
// en la sálida estándar.
//
//

#include <iostream>
using namespace std;

int main()
{

	//0.Declaración de Variables

	double numero1 = 0.0;
	double numero2 = 0.0;
	double numero3 = 0.0;


	//1.Le pedimos al usuario que introduzca 3 números reales y lo guardamos en un espacio de memoria


	cout << "Introduzca un número real: " << endl;

	cin >> numero1;

	cout << "Introduzca el segundo número real: " << endl;

	cin >> numero2;

	cout << "Introduzca el útimo número real: " << endl;

	cin >> numero3;

	//2. Ahora comprobamos cuál es el valor máximo de los tres valores numéricos.

	
	if(numero1 > numero2){


		if(numero1 > numero3){

		cout << "El valor máximo es: " << numero1 << endl;

		}
		else{

		cout << "El valor máximo es: " << numero3 << endl;
			
		}


	}
	else if(numero2 > numero3){

		cout << "El valor máximo es: " << numero2 << endl;

		}
		else{
		
		cout << "El valor máximo es: " << numero3 << endl;

		}


	}


	


	



