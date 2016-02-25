//
//
//	MediavectorV2.cpp
//	Calcular la media empleando la variable "util" para controlar el vector.
//	@Versión 2.0 
//


#include <iostream>
using namespace std;

int main(){

		//Declaración de Variables

		const int DIM_NOTAS = 100;
		double notas[DIM_NOTAS];
		int util_notas;
		double media = 0.0;

		do{


		cout << "Introduzca el número de alumnos (entre 1 y )" << DIM_NOTAS << "):  ";

		cin >> util_notas; 


		}while(util_notas<1 || util_notas>DIM_NOTAS);



		for(int i=0; i<util_notas; i++){

		cout << "nota[" << i << "]:  ";

		cin >> notas[i];

		media += notas[i];

		}

		media /= util_notas;

		cout << "La Media = " << media << endl;

}//Final del Programa
