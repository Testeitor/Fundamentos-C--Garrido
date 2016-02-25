//
//
//	Introduce una serie de números enteros y muestra los pares empleando vectores.
//	RecogePares.cpp
//	Ejemplo de serie de [10] números: 1,2,5,12,17,25,36,8,4,3. Pares que mostraria [5]: 2,12,36,8,4.
//	@Versión 1.0 
//
//

#include <iostream>
using namespace std;

void mostrarPares(int v_pares[],int util_pares){


			for(int i=0;i<util_pares;i++){

				cout << v_pares[i] << " " << endl;

			}

}


void calcularPares(const int v_numeros[],int util_numeros, int v_pares[], int &util_pares){


			util_pares = 0;

			for(int i=0;i<util_numeros;i++){


					if(v_numeros[i]%2==0){

						v_pares[util_pares] = v_numeros[i];

						util_pares++;
					}

			}

}


int main(){



			//Declaración de Variables

			const int DIM_NUMEROS = 100;
			int v_numeros[DIM_NUMEROS];
			int v_pares[DIM_NUMEROS];
			int util_numeros;
			int util_pares;

			do{

				cout << "Introduzca el número de numeros (entre 1 y )" << DIM_NUMEROS << "):  ";

				cin >> util_numeros;

			}while(util_numeros<1 || util_numeros>DIM_NUMEROS);

			for(int i=0;i<util_numeros;i++){

				cin >> v_numeros[i];

			}

			calcularPares(v_numeros,util_numeros,v_pares,util_pares);
			mostrarPares(v_pares,util_pares);



}//Final del Programa