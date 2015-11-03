//
//
//
//Escribir un programa que lea un número de tipo entero desde la entrada estándar y en la salida estándar
//su tabla de multiplicar.
//


#include <iostream>

using namespace std;

int main(){

	
	//Declaración de variables
	
	int num_tabla_multiplicar; //Número introducido por el usuario
	int resul_num1;
	int resul_num2;
	int resul_num3;
	int resul_num4;
	int resul_num5;  //En resul_num(n) guardamos el resultado de multiplicar. Ej: 1x1=1
	int resul_num6;
	int resul_num7;
	int resul_num8;
	int resul_num9;
	int resul_num10;
	

	//1.Pedimos al usuario que introduzca un número entero

	cout << "Introduzca un número para que te muestre su tabla de multiplicar:  ";
	
	//2.Recogemos el número entero y lo guardamos en un espacio de memoria

	cin >> num_tabla_multiplicar;
	
	//3.Ahora realizamos la operaciones de la tabla de multiplicar con el número que hemos recogido antes

	
	resul_num1 = num_tabla_multiplicar * 1;
	resul_num2 = num_tabla_multiplicar * 2;
	resul_num3 = num_tabla_multiplicar * 3;
	resul_num4 = num_tabla_multiplicar * 4;
	resul_num5 = num_tabla_multiplicar * 5;
	resul_num6 = num_tabla_multiplicar * 6;
	resul_num7 = num_tabla_multiplicar * 7;
	resul_num8 = num_tabla_multiplicar * 8;
	resul_num9 = num_tabla_multiplicar * 9;
	resul_num10 = num_tabla_multiplicar * 10;

	//4.Por último mostramos la tabla de multiplicar en base al número entregado por el usuario
	
	cout << "La tabla de Multiplicar del número: " << num_tabla_multiplicar << endl;
	cout << num_tabla_multiplicar << " x 1 = " << resul_num1 << endl;
	cout << num_tabla_multiplicar << " x 2 = " << resul_num2 << endl;
	cout << num_tabla_multiplicar << " x 3 = " << resul_num3 << endl;
	cout << num_tabla_multiplicar << " x 4 = " << resul_num4 << endl;
	cout << num_tabla_multiplicar << " x 5 = " << resul_num5 << endl;
	cout << num_tabla_multiplicar << " x 6 = " << resul_num6 << endl;
	cout << num_tabla_multiplicar << " x 7 = " << resul_num7 << endl;
	cout << num_tabla_multiplicar << " x 8 = " << resul_num8 << endl;
	cout << num_tabla_multiplicar << " x 9 = " << resul_num9 << endl;
	cout << num_tabla_multiplicar << " x 10 = " << resul_num10 << endl;

}
