//
//  
//  Calcular los cubos de los números naturales, sumando números impares. Por ejemplo el cubo de 1 es la suma del primer impar(1),
//  el cubo de 2, es la suma de los dos siguientes (3+5), el cubo de 3 es la suma de los tres siguientes (7+9+11).
//  Desarrolle un programa que escriba en pantalla los 100 primeros cubos usando esta propiedad.
//
//  

#include <iostream>
using namespace std;

int main(){

		//Declaracion de Variables

		int x = 0;
		int cubo = 0; 
		int impar_actual = 0;
    
		cout << "Introduce un número para calcular su cubo: ";
		cin >> x;
    
		impar_actual = ((x - 1) * x + 1); //fórmula que me indica el impar por el que empezar

		//Bucle para sumarle los "x-1" impares siguientes

		cubo = impar_actual;
		cout << "El cubo de " << x << " = " << impar_actual;
		
		for(int i = 1; i < x; i++){

		impar_actual = impar_actual + 2; //calculo el nuevo impar y lo guardo para acumular
		cubo +=impar_actual;
		cout <<  " + " << impar_actual; //imprimo el nuevo impar que he acumulado
	
		}

		//Al salir del bucle, en la variable cubo, tendré acumulado la suma de los impares correspondientes para lograr el cálculo
		cout << " = " << cubo << endl;


}//Final Programa
