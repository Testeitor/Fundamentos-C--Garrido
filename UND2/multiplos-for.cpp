//
//
// Dado el número (y) hayar multiplos (x) con intervalos [a,b]
//
//

#include <iostream>
using namespace std;

int main(){



		//0.Declaración de Variables

		int y = 0;
		int a,b = 0;
		int i = 0;

		//1.Ahora le pedimos al usuario que introduzca un número entero para hayar sus multiplos
		// y lo guardamos en un espacio de memoria.

		cout << "Introduzca un número entero para hayar sus multiplos" << endl;
		cin >> y;


		//2.Ahora le preguntamos el intervalo para limitar el intervalo de busqueda de multiplos.

		cout << "Introduzca un número para limitar el intervalo para buscar multiplos" << endl;

		cin >> a;

		cout << "Introduzca otro número para limitar el intervalo para buscar multiplos" << endl;

		cin >> b;


		//3.Ahora implementamos un bucle for para que vaya recorriendo el intervalo y despúes vamos comprobando.

		cout << "Estos son los múltiplos del número: " << y << " en el intervalo: [" << a << ","<< b << "]" << endl;

		for(i=a;i<=b;i++){

			//4.Ahora implantamos una estructura de control if()

			if(i%y==0){
			
			cout << "El multiplo de: " << y << " es: " << i << endl;

			}

	
		
		}



} //Final de Programa
