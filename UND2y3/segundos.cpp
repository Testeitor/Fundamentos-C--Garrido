//
//
// Implemente una función que recibe como entrada un número de segundos, y obtiene como salida el número de:
// días, horas, minutos y segundos. Tenga en cuenta que el número de horas debe ser menor que 24,
// y el de minútos y segundos, menor que 60.
//
//

#include <iostream>
using namespace std;

//Funciones


void funcionTransformarSegundos(int numeros){

		
		int segundos_finales;
		segundos_finales = numeros % 60; //SegundosFinales

		int min_sueltos;
		min_sueltos = numeros/60;

		int min_finales;
		min_finales = min_sueltos%60; //Minutos Finales

		int horas_sueltas;
		horas_sueltas = min_sueltos/60;

		int horas_finales;
		horas_finales = horas_sueltas%24; //Horas Finales

		int dias_finales;
		dias_finales = horas_sueltas/24; //Dias Finales


		cout << dias_finales << " Días " << horas_finales << " Horas " << min_finales << " Minutos " << segundos_finales << " Segundos " << endl;

}



//Función Principal
int main(){


	int segundos = 0;
	

	cout << "Introduzca un número de segundos para saber cuantos Dias, Horas, Minutos y Segundos son." << endl;

	cin >> segundos;

	funcionTransformarSegundos(segundos);
	

}//Final Programa
