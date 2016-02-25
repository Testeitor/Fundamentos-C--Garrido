//
//
//	Mediavector.cpp
//	Calcular la media de las notas de los alumnos empleando vectores.
//


#include <iostream>
using namespace std;

int main(){



	//Declaración de Variables

	const int NUM_NOTAS = 5;
	double notas[NUM_NOTAS], media;


	for(int i=0;i<NUM_NOTAS;i++){

	cout << "Nota del alumno " << i << ": ";
	cin >> notas[i];

	}

	media = 0;

	for(int i=0;i<NUM_NOTAS;i++){

	media+= notas[i];

	}

	media /= NUM_NOTAS;

	cout << "\nMedia = " << media << endl;

}//Final del Programa
