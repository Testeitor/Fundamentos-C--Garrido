//
//
//	DesviacionTipica.cpp
//	Calcular la desviación típica en base a la media que habiamos calculado en mediavectorV3.cpp
//	Ejemplo a usar: 12,6,7,3,15,10,18,5. Media = 9,5 Varianza = 23,75 Desviación Tipica = 4,87
//	@Versión 1.0 
//
//


#include <iostream>
#include <cmath>
using namespace std;

double calcularDesviacionTipica(double varianza){

		double desviacion_tipica = 0.0;

		desviacion_tipica = sqrt(varianza);
	
		return desviacion_tipica;
}

double calcularVarianza(double v_notas[], int util_notas, double media){

		double varianza = 0.0;

		for(int i=0;i<util_notas;i++){

			varianza += pow(v_notas[i] - media,2);
		}

		varianza /= util_notas; 

		return varianza;
} 


double calcularMediaNotas(double v_notas[], int util_notas){

		double media = 0.0;

		for(int i=0;i<util_notas;i++){

			media+= v_notas[i];
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
		double varianza = 0.0;
		double desviacion_tipica = 0.0;

		do{

		cout << "Introduzca el número de alumnos (entre 1 y )" << DIM_NOTAS << "):  ";

		cin >> util_notas; 


		}while(util_notas<1 || util_notas>DIM_NOTAS);

		for(int i=0;i<util_notas;i++){

			cin >> v_notas[i];
		}

	
		media = calcularMediaNotas(v_notas,util_notas);

		cout << "La media de notas es = " << media << endl;

		varianza = calcularVarianza(v_notas,util_notas,media);

		cout << "La Varianza es = " << varianza << endl;

		desviacion_tipica = calcularDesviacionTipica(varianza);

		cout << "La Desviación Tipica es = " << desviacion_tipica << endl;
		
}//Final del Programa
