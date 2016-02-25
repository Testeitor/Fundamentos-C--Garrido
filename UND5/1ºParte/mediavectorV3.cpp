//
//
//	MediavectorV3.cpp
//	Calcular la media empleando la variable "util" y modular.
//	@Versión 3.0 
//
//


#include <iostream>
using namespace std;


double calcularMediaNotas(double notas[], int util_notas){

		double media = 0.0;
		
		for(int i=0; i<util_notas; i++){

		cout << "nota[" << i << "]:  ";

		cin >> notas[i];

		media += notas[i];

		}

		media /= util_notas;

		return media;
}


int main(){

		//Declaración de Variables
		
		const int DIM_NOTAS = 100;
		double v_notas[DIM_NOTAS];
		int util_notas;
		double media = 0.0;

		do{

		cout << "Introduzca el número de alumnos (entre 1 y )" << DIM_NOTAS << "):  ";

		cin >> util_notas; 


		}while(util_notas<1 || util_notas>DIM_NOTAS);


		media = calcularMediaNotas(v_notas, util_notas);


		cout << "La Media = " << media << endl;

}//Final del Programa
