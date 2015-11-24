//
//
// La localización de un rectangulo se pude determinar con 4 valores, que
// corresponden a los puntos de la esquina superior izquierda y esquina inferior
// derecha. Escriba un programa que lea la posición de un rectángulo y de un
// punto cualquiera. Como resultado, escriba en la salida estándar si el punto
// se encuentra dentro del rectángulo.
// Vamos a usar x1,y1 = 1,5
//		x2,y2 = 6,0

#include <iostream>
using namespace std;

int main(){

		//0.Declaramos las Variables

		int x1,x2,x3,y1,y2,y3; //Coordenadas

		//1.Ahora le pedimos al usuario que introduzca las coordenadas para crear la porteria (Rectángulo).

		cout << "Introduzca las coordenadas para crear la porteria (Rectángulo)" << endl;

		cout << "Introduzca la primera coordenada para (x1,y1): " << endl;

		cin >> x1 >> y1; 

		cout << "Introduzca la segunda coordenada para (x2,y2): " << endl;

		cin >> x2 >> y2;

		//2.Ahora tenemos que solicitar las coordenadas de la trayectoria de la pelota.

		cout << "Ahora introduzca la coordenada de (x3,y3) para la trayectoria de la pelota: " << endl;

		cin >> x3 >> y3;

		//3.Por último tenemos que controlar 5 escenarios para saber si la trayectoria del balón:
		// 1-> Escuadra ((y3==y1) && (x3==x1)) || ((x3==x2) && (y3==y1))
		// 2-> Largero	((x3>x1) && (x3<x2)) && ((y3==y1))
		// 3-> Palo	((x3==x1) && (y3<y1)) || ((x3==x2) && (y3<y1))
		// 4-> Gol	((x3>x1) && (x3<x2)) && ((y3<y1))
		// 5-> Fuera


		if( ((y3==y1) && (x3==x1)) || ((x3==x2) && (y3==y1)) ){

		cout << "Le has dado a la escuadra" << endl;

		}else if( ((x3>x1) && (x3<x2)) && ((y3==y1))  ){

		cout << "Le has dado en el largero" << endl;

		}else if ( ((x3==x1) && (y3<y1)) || ((x3==x2) && (y3<y1)) ){

		cout << "Le has dado al palo" << endl;

		}else if(  ((x3>x1) && (x3<x2)) && ((y3<y1))  ){

		cout << "Has marcado 1 GOLL!!" << endl;

		}else{

		cout << "El balón no ha tocado la porteria" << endl;

		}




}//Final del Programa
