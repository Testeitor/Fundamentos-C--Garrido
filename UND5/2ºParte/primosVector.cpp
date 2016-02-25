//
//	
//	PrimosVectores.cpp
//	Saber cual de los numeros guardados en el vector son primos e imprimirlos por pantalla.
//	Ejemplo de ingreso de Entrada: 3,4,5,6. Salida: Los numeros Primos son: 3 y 5. Los numeros que no son primos son: 4 y 6.
//	@Versión 1.0
//

#include <iostream>
using namespace std;

/*
  @brief
  @param
  @pre
 */
void imprimePrimosVector(const int v_primos_Primos[],int util_v_primos_Primos,const int v_primos_No_Primos[],int util_v_primos_No_Primos){

			//Muestra los números primos por pantalla.
			cout << "Los numeros primos son: ";

			for(int i=0;i<util_v_primos_Primos;i++){

				cout << v_primos_Primos[i] << " ";

			}

			cout << endl;

			cout << "Los numeros que no son primos son: ";

			//Muestra los números no primos por pantalla.
			for(int j=0;j<util_v_primos_No_Primos;j++){


				cout << v_primos_No_Primos[j] << " ";


			}

}

/*
  @brief
  @param
  @pre
 */
void somosPrimos(const int v_primos[],int util_v_primos,int v_primos_Primos[],int &util_v_primos_Primos,int v_primos_No_Primos[],int &util_v_primos_No_Primos){

		int i = 0;
		bool esprimo;

		util_v_primos_Primos = 0;
		util_v_primos_No_Primos = 0;

		//Nos dice si el componente del vector es primo o no.
		for(int j=0;j<util_v_primos;j++){

			esprimo = true;

			for(i=2;i<v_primos[j];i++){


					if(v_primos[j]%i==0){

						esprimo=false;
					}

			}

			if(esprimo == true){

				//Aquí guardamos los numeros que son primos.
						v_primos_Primos[util_v_primos_Primos] = v_primos[j];

						util_v_primos_Primos++;
			}
			else{

				//Aquí guardamos los numeros que no sean primos.
						v_primos_No_Primos[util_v_primos_No_Primos] = v_primos[j];

						util_v_primos_No_Primos++;
				}

		}
	
}


/*
  @brief
  @param
  @pre
 */
void ingresarDatos(int v_primos[],int &util_v_primos,const int DIM_PRIMOS){


		//Pedimos que intrduzca el numero de primos que quiere introducir.

		do{

			cout << "Introduzca el número de primos que quiere introducir (entre 1 y )" << DIM_PRIMOS << "): ";
			cin >> util_v_primos;

		}while(util_v_primos<1 || util_v_primos>DIM_PRIMOS);

		//Le pedimos tantos números en funcion a la variable util.

		for(int i=0;i<util_v_primos;i++){

			cin >> v_primos[i];

		}

}


int main(){



		//Declaracion de Variables

		const int DIM_PRIMOS = 100;
		int v_primos[DIM_PRIMOS];
		int util_v_primos = 0;

		int v_primos_Primos[DIM_PRIMOS]; 	//Aquí guardaremos los numeros que son primos.
		int v_primos_No_Primos[DIM_PRIMOS]; //Aquí guardaremos los números que no son primos.

		int util_v_primos_Primos = 0;
		int util_v_primos_No_Primos = 0;

		//Ingresamos el numero de primos que queramos introducir, después introducimos los primos y lo guardamos en el vector.
		ingresarDatos(v_primos,util_v_primos,DIM_PRIMOS);

		//Comprobamos que numero es primo o no y después lo guardamos en el vector Primo o No es primo.
		somosPrimos(v_primos,util_v_primos,v_primos_Primos,util_v_primos_Primos,v_primos_No_Primos,util_v_primos_No_Primos);

		//Imprimimos por pantalla los numeros que son primos y los que no lo son.
		imprimePrimosVector(v_primos_Primos,util_v_primos_Primos,v_primos_No_Primos,util_v_primos_No_Primos);


}//Final del Programa