//
//
//	Ackerman.cpp
//	Obtener el resultado en un entero mediante la función Ackerman mediante dos argumentos: m y n
//	
//

#include <iostream>
using namespace std;


int calcularAckerman(int m, int n){


	//n+1 	   	  Si m=0
	//A(m-1,1) 	  Si m>0 y n=0
	//A(m-1,A(m,n-1)) Si m>0 y n>0

	int resultado_acker = 0;

	if(m==0){

	resultado_acker = n+1;

	}else if(m>0 && n==0){

		resultado_acker = calcularAckerman(m-1,1);

		}else if(m>0 && n>0){

			resultado_acker = calcularAckerman(m-1,calcularAckerman(m,n-1));

			}


		return resultado_acker;
}


int main(){


		//Declaración de Variables

		int m = 0;
		int n = 0;
		int resultado_ackerman = 0;

		cout << "Introduzca el valor de [m] y el valor de [n] para calcular A(m,n)" << endl;

		cin >> m >> n;

		resultado_ackerman = calcularAckerman(m,n);

		cout << "El resultado de A(" << m <<"," << n << ")" << " = " << resultado_ackerman << endl;

}//Final del Programa
