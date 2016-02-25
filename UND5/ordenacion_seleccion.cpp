//
//
// Nos muestra los elementos de un vector ordenados.
// OrdenSeleccion.cpp
// Ejemplo de números: 100,5 Resultado del vector ordenado: 5,100
// @Versión 1.0
//
//

#include <iostream>
using namespace std;


void imprimirElementosVector(const double v_numeros_Entrada[],int util_numeros_Entrada){

		for(int i=0;i<util_numeros_Entrada;i++){

			cout << v_numeros_Entrada[i] << " ";
		}
}


void OrdenSeleccion(double v_numeros_Entrada[],int util_numeros_Entrada){

	int pos_min;
	double aux;

	for(int i=0;i<util_numeros_Entrada-1;i++){

			pos_min = i;

			for(int j=i+1;j<util_numeros_Entrada;j++){

				if(v_numeros_Entrada[j] < v_numeros_Entrada[pos_min]){

					pos_min=j;
				}
			}



		aux = v_numeros_Entrada[i];
		v_numeros_Entrada[i] = v_numeros_Entrada[pos_min];
		v_numeros_Entrada[pos_min] = aux;
	}




}


void ingresarDatos(double v_numeros_Entrada[],int &util_numeros_Entrada,const int DIM_NUMEROS){

			do{

			cout << "Introduzca el número de números (entre 1 y )" << DIM_NUMEROS << "): ";
			cin >> util_numeros_Entrada;

			}while(util_numeros_Entrada<1 || util_numeros_Entrada>DIM_NUMEROS);

			for(int i=0;i<util_numeros_Entrada;i++){

			cin >> v_numeros_Entrada[i];

			}

}

int main(){


			//Declaración de Variables

			const int DIM_NUMEROS = 100;
			double v_numeros_Entrada[DIM_NUMEROS];
			int util_numeros_Entrada = 0;
			

			//Le pedimos al usuario que introduzca numeros y los guardamos en el vector
			ingresarDatos(v_numeros_Entrada,util_numeros_Entrada,DIM_NUMEROS);


			//Imprimimos por pantalla el contenido del vector sin ordenar
			cout << "Mi vector Principal es: ";
			imprimirElementosVector(v_numeros_Entrada,util_numeros_Entrada);

			//Ordenamos los numeros del vector desde el menor
			OrdenSeleccion(v_numeros_Entrada,util_numeros_Entrada);

			//Imprimimos por pantalla el contenido del vector ya ordenado
			cout << endl << "Mi Vector Ordenado es: ";
			imprimirElementosVector(v_numeros_Entrada,util_numeros_Entrada);
			

}//Final del Programa

 

