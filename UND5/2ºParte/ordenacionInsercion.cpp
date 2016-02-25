//
//
//	ordenacionInsercion.cpp
//	@Versión 1.0
//
//

#include <iostream>
using namespace std;

/*
  @brief
  @param
  @pre
 */
void imprimeVector(int v[],int util_v){

		for(int i=0;i<util_v;i++){

			cout << v[i] << " ";
		}

}

/*
  @brief
  @param
  @pre
 */
void ordenacionInsercion(int v[],int util_v){

		int izda, i;
		int valor = v[izda];


		for(izda=1;izda<util_v;izda++){

			valor = v[izda];
		


				for(i=izda;i>0 && valor<v[i-1];i--){

						v[i] = v[i-1];
				}


		v[i] = valor;

		}

}

/*
  @brief
  @param
  @pre
 */
void ingresarDatos(int v[],int &util_v,const int DIM_V){


		//Pedimos que intrduzca el número de números que quiere introducir.

		do{

			cout << "Introduzca el número de primos que quiere introducir (entre 1 y )" << DIM_V << "): ";
			cin >> util_v;

		}while(util_v<1 || util_v>DIM_V);

		//Le pedimos tantos números en funcion a la variable util.

		for(int i=0;i<util_v;i++){

			cin >> v[i];

		}

}


int main(){


			//Declaracion de Variables

			const int DIM_V = 100;
			int v[DIM_V];
			int util_v;


			//Introducimos los datos en el vector y los guardamos.
			ingresarDatos(v,util_v,DIM_V);

			//Imprimimos los componentes del vector deshordenados.
			cout << "Vector Deshordenado: " << endl;
			imprimeVector(v,util_v);

			//Ordenamos los componentes del vector con metodo de inserccion.
			ordenacionInsercion(v,util_v);

			//Imprimimos los componentes del vector ya ordenado.
			cout << "Vector Ordenado: " << endl;
			imprimeVector(v,util_v);

}//Final del Programa