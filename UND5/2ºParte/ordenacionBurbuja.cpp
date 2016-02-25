//
//
//	ordenacionBurbuja.cpp
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
void ordenacionBurbuja(int v[],int util_v){

		bool cambio = true; //Variable que nos indica si es necesario cambiar

		for(int izda=0; izda<util_v && cambio; izda++){

			cambio = false;

			for(int i=util_v-1 ; i>izda; i--){

					if(v[i] < v[i-1]){ 

						cambio = true;
				
						int aux = v[i]; //Intercambia las posciones contiguas.
						v[i] =v[i-1];
						v[i-1] = aux;
					}

			}

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


			//Declaración de Variables

			const int DIM_V = 100;
			int v[DIM_V];
			int util_v;


			//Introducimos los datos en el vector y los guardamos.
			ingresarDatos(v,util_v,DIM_V);

			//Imprimimos los componentes del vector deshordenados.
			cout << "Vector Deshordenado: " << endl;
			imprimeVector(v,util_v);

			//Ordenamos los componentes del vector con metodo de burbuja.
			ordenacionBurbuja(v,util_v);

			//Imprimimos los componentes del vector ya ordenado.
			cout << "Vector Ordenado: " << endl;
			imprimeVector(v,util_v);

}//Final del Programa