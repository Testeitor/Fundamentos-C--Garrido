//
//
//	copiarVector.cpp
//	Copiar componentes de un vector a otro vector.
//	@Versión 1.0 
//
//


#include <iostream>
using namespace std;


/*
*@brief
*
*
*/

void mostrarVectorCopiado(const int vector_salida[],int util_v_salida){

			for (int i = 0;i<util_v_salida; ++i){
		
				cout << vector_salida[i] << " ";
			}

}


/*
*@brief
*
*
*/

void copiarVector(const int vector_entrada[],int util_v_entrada, int vector_salida[], int &util_v_salida){



			for(int i=0;i<util_v_entrada;i++){

				vector_salida[util_v_salida] = vector_entrada[i];

				util_v_salida++;
			}

}


/*
*@brief
*
*
*/

void pedirDatosVector(int vector_entrada[],int &util_v_entrada, const int DIM_VECTOR){

			do{

				cout << "Introduzca el número de numeros (entre 1 y )" << DIM_VECTOR << "): ";
				cin >> util_v_entrada;

			}while(util_v_entrada<1 || util_v_entrada>DIM_VECTOR);


			for(int i=0;i<util_v_entrada;i++){

				cout << "V[" << i << "]";
				cin >> vector_entrada[i];

			}

} 

int main(){



			//Declaración de Variables

			const int DIM_VECTOR = 100;
			int vector_entrada[DIM_VECTOR];
			int vector_salida[DIM_VECTOR];
			int util_v_entrada = 0.0;
			int util_v_salida = 0.0;


			pedirDatosVector(vector_entrada,util_v_entrada,DIM_VECTOR);
			copiarVector(vector_entrada,util_v_entrada,vector_salida,util_v_salida);
			mostrarVectorCopiado(vector_salida,util_v_salida);		



}