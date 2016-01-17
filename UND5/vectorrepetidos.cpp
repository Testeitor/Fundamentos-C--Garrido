//
//
//	Elimina los elementos repetidos contiguos de un vector de entrada de tipo const y lo guardamos en otro vector.
//	VectorRepetidos.cpp
//	Ejemplo de letras: b,b,i,e,n,n,n
//	@Versión 1.0 
//
//

#include <iostream>
using namespace std;

void imprimirElementosVector(char v_letras_Salida[],int util_letras_Salida){


			for(int i=0;i<util_letras_Salida;i++){


				cout << v_letras_Salida[i] << "  ";

			}

}


void quitarElementosRepeVector(const char v_letras_Entrada[],int util_letras_Entrada,char v_letras_Salida[],int &util_letras_Salida){


			v_letras_Salida[0] = v_letras_Entrada[0];
			util_letras_Salida = 1;

			for(int i=1;i<util_letras_Entrada;i++){


					if(v_letras_Entrada[i] != v_letras_Entrada[i-1]){


						v_letras_Salida[util_letras_Salida] = v_letras_Entrada[i];

						util_letras_Salida++;

					}


			}

}


int main(){


			//Declaración de Variables

			const int DIM_LETRAS = 100;
			char v_letras_Entrada[DIM_LETRAS];
			char v_letras_Salida[DIM_LETRAS];
			int util_letras_Entrada = 0;
			int util_letras_Salida = 0;


			do{

				cout << "Introduzca el número de letras (entre 1 y )" << DIM_LETRAS << "):  ";

				cin >> util_letras_Entrada;

			}while(util_letras_Entrada<1 || util_letras_Entrada>DIM_LETRAS);


			for(int i=0;i<util_letras_Entrada;i++){

				cin >> v_letras_Entrada[i];

			}

			quitarElementosRepeVector(v_letras_Entrada,util_letras_Entrada,v_letras_Salida,util_letras_Salida);
			imprimirElementosVector(v_letras_Salida,util_letras_Salida);



}//Final del Programa