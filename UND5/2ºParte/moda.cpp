//
//
//	moda.cpp
//	@Versión 1.0
//
//

#include <iostream>
using namespace std;


void imprimeVector(int v[],int util_v){


		for(int i=0;i<util_v;i++){

			cout << v[i] << " ";

		}

}


void calcularModa(int v[],int util_v,const int DIM_N,int valor[],int &moda,int nada){

		bool repetido;
		int contador;
		int contador_repe;

		int max = 1;
		int min = 1;

		for(int i=0;i<util_v;i++){

			contador_repe = 1;
			repetido = true;

				for(int j=i+1; j>i && repetido;j++){

					if(v[i] == v[j]){

						valor[0] = v[i];
						contador_repe += contador++;

					}else{
							repetido = false;
						}

				}

			
			if(contador_repe > max){

				max = contador_repe;
				moda = valor[0];

			}else{

				min = contador_repe;
				nada = valor[0];

				}


		}

}


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

			const int DIM_N = 1;
			int valor[DIM_N];
			int moda;
			int nada;
			

			//Introducimos los datos en el vector y los guardamos.
			ingresarDatos(v,util_v,DIM_V);

			//Imprimimos los componentes del vector deshordenados.
			cout << "Vector Deshordenado: ";
			imprimeVector(v,util_v);

			cout << endl;
			//Ordenamos los componentes del vector con metodo de burbuja.
			ordenacionBurbuja(v,util_v);

			//Imprimimos los componentes del vector ya ordenado.
			cout << "Vector Ordenado: ";
			imprimeVector(v,util_v);

			cout << endl;
			//Veremos que elementos del vector se repiten.
			calcularModa(v,util_v,DIM_N,valor,moda,nada);

			cout << "La Moda del vector es: " << moda << endl;

}//Final del Programa