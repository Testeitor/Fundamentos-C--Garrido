//
//
// Programa que pregunte 2 números reales y escriba el resultado de: + - * /
//
//

#include <iostream>
using namespace std;

int main(){

    //0.Declaracion de las Variables
	double a=0.0;
	double b=0.0;
	double resultado_suma=0.0;
	double resultado_resta=0.0;
	double resultado_multiplicacion=0.0;
	double resultado_division=0.0;


     //1.Que el usuario introduzca el primer número real
	
	cout << "Introduzca un número real: ";

     //2.Recogemos el primer número real y lo almacenamos en memoria

	cin >> a;// Primer número real


     //3.El usuario introduce el segundo número real

	cout << "Introduzca el segundo número real: ";

     //4.Recogemos el segundo número real y lo almacenamos en memoria

	cin >> b;// Segundo número real

	
     //5.Realizamos la operaciones de: + - * / con los dos número reales recogidos

	resultado_suma= a+b;
	resultado_resta= a-b;
	resultado_multiplicacion= a*b;
	resultado_division=a/b;

     //6.Por último mostramos por pantalla el resultado de las operaciones realizadas

	cout << "-El resultado de la suma entre a + b =  " << resultado_suma << endl;
	cout << "-El resultado de la resta entre a - b =  " << resultado_resta << endl;
	cout << "-El resultado de la multiplicacion entre a * b =  " << resultado_multiplicacion << endl;
	cout << "-El resultado de la division entre a / b =  " << resultado_division << endl;

}

