//
// Calcular la sumatoria de un número (n). 
// -Ejemplo: Si se quiere saber la sumatoria de los 5 primeros numeros: i= 1+2+3+4+5=15
// -Por ejemplo, para sumar los primeros 100 números naturales: i= n(n+1)/2 ; i=100(100+1)/2;
// 50(101)=5050.
//


#include <iostream>
using namespace std;

int main(){



		//0.Declaramos las Variables

		int numero_sumatoria = 0;
		int i = 0; //Variable contadora del Bucle for.
		int sumatoria = 0;

		
		//1. Ahora le pedimos al usuario que introduzca un número para hayar la sumatoria.

		cout << "Introduzca un número entero para hayar la sumatoria" << endl;

		cin >> numero_sumatoria;

		//2.Ahora vamos a emplear un bucle for para que vaya recorriendo y sumando la sucesion de números.

		for(i=1;i<=numero_sumatoria;i++){


		sumatoria += i;


		}

		cout << "La sumatoria del número: " << numero_sumatoria << " = " << sumatoria << endl;

} //Final del Programa
