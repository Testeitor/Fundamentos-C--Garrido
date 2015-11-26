//
//
// Elaborar un programa que calcule la media de 3 números
//
//

#include <iostream>
using namespace std;

//Funciones.Función para calcular la media

double Media(double n1,double n2,double n3){

	double media;
	media = (n1+n2+n3)/3;

	return media;
}



//Funcion Principal

int main(){

	//0.Declaración de Variables

	double numero1,numero2,numero3 = 0.0;
	double resultado_media = 0.0;


	//1.Le pedimos al usuario que introduzca los 3 números para calcular la media.

	cout << "Introduzca 3 número para calcular su media: " << endl;

	cin >> numero1 >> numero2 >> numero3;

	//2.Invocamos a la función Media para que le pase los parámetros (números) y calcule su media.
	// Y el resultado de la función se nos guarda en resultado_media. 

	resultado_media = Media(numero1,numero2,numero3);

	//3.Ahora mostramos el resultado por pantalla.

	cout << "La media de los números: " << numero1 << "," << numero2 << "," << numero3 << " es: " << resultado_media << endl;



}//Final del Programa
