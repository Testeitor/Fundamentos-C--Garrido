//
//
// Desarrolle un programa para que escriba en la salida estándar la configuración
// de todas las fichas del dominó. Para ello escribirá todos los pares (i,j)
// que corresponden a una ficha, sin repetirlos, y suponiendo que el valor cero corresponde a blanco.
//
//

#include <iostream>
using namespace std;

int main(){



		//0.Declaramos las Variables

		int i = 0;
		int j = 0;

		//1.Empleamos bucles anidados for para escribir las fichas de dominó.

		for(i=0;i<=6;i++){
			
			cout << "Fichas del: " << i << endl;
			
			for(j=0;j<=6 && j<=i;j++){

			cout  << i << "  " << j << endl;		

			}




		}




}// Final del Programa
