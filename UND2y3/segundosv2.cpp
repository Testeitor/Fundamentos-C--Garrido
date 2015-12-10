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

int funcionSegundosFinales(int segundos){

	int segundos_finales = 0;
	segundos_finales = segundos % 60; //Segundos Finales

	return segundos_finales;
}

int funcionMinutosSueltos(int segundos){

	int min_sueltos = 0;
	min_sueltos = segundos/60; //Minutos Sueltos (Resto de la división)

	return min_sueltos;
}

int funcionMinutosFinales(int min_sueltos){
	
	int min_finales = 0;
	min_finales = min_sueltos%60; //Minutos Finales

	return min_finales;
}

int funcionHorasSueltas(int min_sueltos){

	int horas_sueltas = 0;
	horas_sueltas = min_sueltos/60; //Horas Sueltas (Resto de la división)

	return horas_sueltas;
}

int funcionHorasFinales(int horas_sueltas){

	int horas_finales;
	horas_finales = horas_sueltas%24; //Horas Finales

	return horas_finales;
}

int funcionDiasFinales(int horas_sueltas){

	int dias_finales = 0;
	dias_finales = horas_sueltas/24; //Dias Finales

	return dias_finales;
}



void funcionMostrarSegundosTransformados(int segundos){

		int segundos_finales = 0;
		segundos_finales = funcionSegundosFinales(segundos);

		int min_sueltos = 0;
		min_sueltos = funcionMinutosSueltos(segundos);

		int min_finales = 0;
		min_finales = funcionMinutosFinales(min_sueltos);
		
		int horas_sueltas = 0;
		horas_sueltas = funcionHorasSueltas(min_sueltos);
		
		int horas_finales = 0;
		horas_finales = funcionHorasFinales(horas_sueltas);

		int dias_finales = 0;
		dias_finales = funcionDiasFinales(horas_sueltas);


		cout << dias_finales << " Días " << horas_finales << " Horas " << min_finales << " Minutos " << segundos_finales << " Segundos " << endl;

}



//Función Principal
int main(){


	int segundos = 0;
	

	cout << "Introduzca un número de segundos para saber cuantos Dias, Horas, Minutos y Segundos son." << endl;

	cin >> segundos;

	funcionMostrarSegundosTransformados(segundos);
	

}//Final Programa
