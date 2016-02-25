//
//
//	Implemente una función que reciba una cadena de caracteres, y la modifique como su inversa.
//	cadenaInversa.cpp
//	@Version3.0
//
//

#include <iostream>
using namespace std;


/*
@brief Funcion que imprime el vector con la cadena ya invertida.
@param v_cadena_invertida[] que es quien contendra la cadena invertida.
@param util_cadena_invertida te dice la utiles que tenemos.
@pre
*/
void imprimeCadenaInversa(const char v_cadena_invertida[],int util_v_cadena_invertida){

		for(int i=0;i<=util_v_cadena_invertida;i++){

				cout << v_cadena_invertida[i];
		}

}


/*
@brief Función que invierte la cadena y lo guarda en un vector.
@param v_cadena[] es el vector que tiene la cadena  y la pasaremos invertida a otro vector.
@param util_v_cadena es una variable que indica las utiles que tenemos.
@param v_cadena_invertida[] es un vector que guarda la cadena de caracteres invertida del vector v_cadena[]
@param util_v_cadena_invertida variable que indica las utiles que tenemos. 
@pre 
*/
void invertirCadena(const char v_cadena[],int util_v_cadena,char v_cadena_invertida[],int &util_v_cadena_invertida){

			util_v_cadena_invertida = 0;

			//Empezamos desde el final del vector v_cadena.
			for(int i=util_v_cadena;i>=0;i--){ 

					//Empezamos a guardar los caracteres desde el final del vector en el principio del vector
					v_cadena_invertida[util_v_cadena_invertida] = v_cadena[i];

					util_v_cadena_invertida++;

			}

}

/*
@brief  Nos calcula el número de elementos que tiene el vector v_cadena[].
@param  El vector v_cadena[].
@return La variable i devuelve la longitud de una cadena.
*/

int longitudCadena(const char v_cadena[]){
//Funcion que nos dice la longitud de una cadena.
		int i = 0;
		while(v_cadena[i]!='\0'){

			i++;
		}

		return i;
}

/*
@brief Función para insertar el numero de caracteres a utilizar y guardar la cadena de caracteres.
@param v_cadena[] vector que guarda la cadena de caracteres.
@param util_v_cadena variable que indica las utiles que tenemos.
@param DIM_CADENA variable que indica la dimension del vector v_cadena[].
@pre
*/
void insertarDatos(char v_cadena[],const int DIM_V_CADENA){

		//Pedimos al usuario que introduzca una palabra.

		cout << "Introduzca una palabra: " << endl;

		//Lee hasta que se encuentre un salto de línea o no hay más espacio.
		cin.getline(v_cadena,DIM_V_CADENA);

}


int main(){

			//Declaración de Variables

			const int DIM_V_CADENA = 100;
			char v_cadena[DIM_V_CADENA];
			char v_cadena_invertida[DIM_V_CADENA];
			int util_v_cadena;
			int util_v_cadena_invertida;


			//Ingresamos la cadena de caracteres y la guardamos en el vector.
			insertarDatos(v_cadena,DIM_V_CADENA);

			//Calculamos las utiles del vector v_cadena[]
			util_v_cadena = longitudCadena(v_cadena);

			//Invertimos la cadena de caracteres y lo guardamos en el vector v_cadena_invertida.
			invertirCadena(v_cadena,util_v_cadena,v_cadena_invertida,util_v_cadena_invertida);

			//Imprimimos el vector con la cadena ya invertida.
			imprimeCadenaInversa(v_cadena_invertida,util_v_cadena_invertida);


}//Final del Programa