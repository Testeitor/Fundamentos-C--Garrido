//
//
// Escriba un programa para determinar si un número entero es un cuadrado perfecto.
// Recuerde que estos números son de la forma n^2, es decir los números 1,4,9,16, ect.
// Para ello, no podrá hacer uso de la función sqrt, sino que tendrá que ir calculando
// los cuadrados de los números desde el 1 en adelante.
//
//


#include <iostream>
using namespace std;

int main(){



		//0.Declaramos las Variables.

		int cuadrado = 0;
		int perfecto = 0;
		int i = 0;

		//1.Ahora le pedimos al usuario que introduzca un número entero para comprobar si es
		// cuadrado perfecto.

		cout << "Introduzca un número entero para saber si es cuadrado perfecto." << endl;

		cin >> cuadrado;

		//2.Ahora comprobamos mediante un for si es o no un cuadrado perfecto.

		for(i=1;i*i<=cuadrado;i++){

		perfecto = i*i;
		
		cout << perfecto << endl;

		}

		
		if(perfecto==cuadrado){

			cout << "El número: " << cuadrado << " es un cuadrado perfecto" << endl;
			
		}
		else{

			cout << "El número: " << cuadrado << " no es un cuadrado perfecto" << endl;

		}


		

}//Final del Programa


