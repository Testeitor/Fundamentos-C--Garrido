//
//
// Escriba un programa que lea tres números reales correspondientes a una nota y escriba
// en la salida estándar el mensaje "Suspenso" (Menor que 5). "Apobado" (de 5 a 7). 
// "Notable" (de 7 a 9) o "Sobresaliente" (9 o más) dependiendo del valor de la nota.
//
//


#include <iostream>
using namespace std;

int main()
{

	//0.Declaración de Variables.

	double nota = 0.0;


	//1.Le pedimos al usuario que introduzca la nota de su examen y lo guardamos en un espacio de memoria.


	cout << "Introduzca su nota de examen: " << endl;

	cin >> nota;


	//2.Comprobamos si con el valor de su nota está: "Suspenso" "Aprobado" "Notable" "Sobresaliente".

	if (nota < 5){

	    cout << "Usted está Suspenso" << endl;	

	}
	else{ if (nota >=5 && nota <7){  //else1

		 cout << "Usted está Aprobado" << endl;

	       }
	      else{ if (nota >=7 && nota <9){  //else2

		      cout << "Usted tiene un Notable" << endl;

		     }
		   else{ if (nota >=9 && nota <=10){  //else3

			    cout << "Usted tiene un Sobresaliente" << endl; 

			  }
			 
		   }//Final else3


		}//Final else2


	}//Final else1
	
	

}//Final del Programa
