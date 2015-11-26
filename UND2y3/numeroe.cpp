//
//
// Elaborar un programa que compruebe si la expresión obtiene con pocos sumandos una
// aproximación aceptable(Por ejemplo: 4 decimales del valor de e). e= 2,7182
//	1 	1	1	1
// e= ---- + ----- + ------ + -----
//	0!	1!	2!	3!
//
//


#include <iostream>
using namespace std;

int main(){


		//0.Declaración de Variables

		double e;
		double n = 0;
		int factorial = 1;
		int i = 0;
		int j = 0;
		
		

		//1.Le pedimos al usuario que introduzca los sumandos.

		cout << "Introduzca el sumando para calcular el número e" << endl;
		
		cin >> n;

		//2.Ahora iniciamos un bucle for.

		for(i=1;i<=n;i++){

	

			for(j=1;j<=i;j++){

			factorial *=j; 

			}

		
		e+= 1.0/factorial;

		}


		//3.Ahora mostramos cuanto vale e.

		cout << "Metiendo " << n << " sumandos, el valor de e= " << e << endl;

		

}//Final del Programa
