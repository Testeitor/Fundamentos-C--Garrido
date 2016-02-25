//
//
// Nos busca la posicion de los componentes de un vector de forma secuencial.
// busquedaSecuencial.cpp
// Ejemplo de números: 1,2,3,4,5,6. Numero a buscar su posicion: 4. Ejemplo de Salida: v_numeros_Entrada[3]
// @Versión 1.0
//
//

#include <iostream>
using namespace std;

 /*
  @brief
  @param
  @pre
  @post
  @return
 */
int busquedaSecuencial(const int v_numeros_Entrada[],int util_numeros_Entrada,int buscado){
	
	int i = 0; 
	int posicion = 0;
	bool encontrado = false;

	while((i<util_numeros_Entrada) && !encontrado){

			if(v_numeros_Entrada[i]== buscado){


				posicion=i;
				encontrado = true;
			}else{

				i++;

				}

	}


	if(encontrado == true){

			return posicion;

	}else{

		return -1;
		}

}

/*
  @brief
  @param
  @pre
 */
void ingresarDatos(int v_numeros_Entrada[],int &util_numeros_Entrada,const int DIM_NUMEROS, int &num_buscar){


			//Pedimos que intrduzca el numero de numeros enteros que quiere introducir

			do{

				cout << "Introduzca el número de números (entre 1 y )" << DIM_NUMEROS << "): ";
				cin >> util_numeros_Entrada;

			}while(util_numeros_Entrada<1 || util_numeros_Entrada>DIM_NUMEROS);


			//Le pedimos tantos números en funcion a la variable util.
			for(int i=0;i<util_numeros_Entrada;i++){

			cin >> v_numeros_Entrada[i];

			}


			//Le preguntamos al usuario el número que quiere buscar

			do{

				cout << "Introduzca el número que quiera buscar (entre 1 y )" << DIM_NUMEROS << "): ";
				cin >> num_buscar;

			}while(util_numeros_Entrada<1 || util_numeros_Entrada>DIM_NUMEROS);

}

int main(){


			//Declaración de Variables

			const int DIM_NUMEROS = 100;
			int v_numeros_Entrada[DIM_NUMEROS];
			int util_numeros_Entrada = 0;
			int num_buscar = 0.0;
			int resultado = 0.0;
			

			//Le pedimos al usuario que introduzca numeros y los guardamos en el vector
			ingresarDatos(v_numeros_Entrada,util_numeros_Entrada,DIM_NUMEROS,num_buscar);

			//Busca la posicion del componente del vector de forma secuencial
			resultado = busquedaSecuencial(v_numeros_Entrada,util_numeros_Entrada,num_buscar);

			cout << "La posicion del número [" << num_buscar << "] en el vector es : v[" << resultado << "]" << endl;

					
}//Final del Programa