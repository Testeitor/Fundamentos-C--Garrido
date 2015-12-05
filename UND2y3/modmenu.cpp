
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

//Funciones

double funcionSuma(double a, double b){

	double suma = 0.0;
	suma = a + b;
	
	return suma;

}
double funcionResta(double a, double b){

	double resta = 0.0;
	resta = a - b;
	return resta;

}
double funcionMultiplicacion(double a, double b){

	double multiplicacion = 0.0;
	multiplicacion = a * b;
	return multiplicacion;


}
double funcionDivision(double a, double b){

	double division = 0.0;
	division = a / b;
	return division;

}



void calculadora(double numero1, double numero2, char operador){

	double res_suma =  0.0;
	double res_resta =  0.0;
	double res_multiplicacion =  0.0;
	double res_division =  0.0;
	
	switch (operador){

	case 'S':
	case 's':
			res_suma = funcionSuma(numero1, numero2);
		cout << "La suma de: " << numero1 << " + " << numero2 << " = " << res_suma << endl;
		break;

	case 'R':
	case 'r':
			res_resta = funcionResta(numero1, numero2);
		cout << "La resta de: " << numero1 << " - " << numero2 << " = " << res_resta << endl;
		break;

	case 'P':
	case 'p':
			res_multiplicacion = funcionMultiplicacion(numero1, numero2);
		cout << "La Multiplicación de: " << numero1 << " * " << numero2 << " = " << res_multiplicacion << endl;
		break;

	case 'D':
	case 'd':
			res_division = funcionDivision(numero1, numero2);
		cout << "La división de: " << numero1 << " / " << numero2 << " = " << res_division << endl;
		break;

	default:
		cout << "No ha pulsado la letra correcta" << endl;

	}

	

}


//Función Principal
int main(){

	//0.Declaramos las Variables

	double num1 = 0.0;
	double num2 = 0.0;
	double resultado = 0.0;

	char letra;
	
	//1.Pedimos al usuario que introduzca dos numeros y lo almacenamos en un espacio de memoria.

	cout << "Introduzca un número: " << endl;

	cin >> num1;

	cout << "Introduzca otro número: " << endl;

	cin >> num2;

	//2.Ahora le pedimos al usuario que operación quiere realizar con los dos números obtenidos y lo guardamos en memoria.

	cout << "Pulse [S]uma/[R]esta/[P]roducto/[D]ivisión" << endl;
	
	cin >> letra;

	calculadora(num1, num2, letra);

	

}//Fin del programa.
