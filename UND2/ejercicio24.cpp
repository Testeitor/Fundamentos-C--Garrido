//
//
// Escriba un programa que lea un número real, correspondiente al radio de un círculo.
// Como resultado, escribirá el radio introducido, el área del círculo, y la longuitud de su perímetro
// Además, comprobará si el radio no es positivo, en cuyo caso se obtendrá un mensaje sobre ello.
//
//


#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	//0.Declaración de Variables

	double radio_circulo = 0.0;
	double area_circulo = 0.0;
	double perimetro_circulo = 0.0;
	

	//1.Le pedimos al usuario que introduzca un número real y lo guardamos en un espacio de memoria.

	cout << "Introduzca un número real: " << endl;

	cin >> radio_circulo;

	//2.Calculamos el area del circulo y después la del perimetro.

	area_circulo = 3.1415 * pow(radio_circulo, 2); //Para calcular el Area Circulo A=pi * pow(r,2)
	perimetro_circulo = 2 * 3.1415 * radio_circulo; //Para calcular el Perimetro Circulo P=2 * 3.1415 * r
	
	//3. Ahora comprobaremos si el radio es positivo o negativo.

	if(radio_circulo <= 0){
	
		cout << "El radio introducido no es positivo" << endl;

	}
	else{


		cout << "-El radio introducido es: " << radio_circulo << "cm" << endl;
		cout << "-El área del circulo es: " << area_circulo << "cm" << endl;
		cout << "-El perímetro del circulo es: " << perimetro_circulo << "cm" << endl;


	}





}
