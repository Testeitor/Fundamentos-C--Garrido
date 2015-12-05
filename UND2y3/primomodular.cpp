//
//
// Elaborar un programa que te diga si un numero es primo o no.
// 
//


#include <iostream>
using namespace std;

//Funciones


bool somosPrimos(int num1){

	bool primos;
	int i = 0;

	primos = true;

	for(i=2;i<num1;i++){


		if(num1%i==0){

		primos=false;

		}

	}


	
	return primos;


}



//Función Principal
int main(){


	int numero = 0;
	bool esprimo;
	

	cout << "Introduzca un número entero" << endl;

	cin >> numero;

	esprimo = somosPrimos(numero);
	


	if(esprimo){


	cout << "El número: "<< numero << " es primo" << endl;


	}
	else{

	cout << "El número: "<< numero << " no es primo" << endl;


	}

	


}//Fin del Programa
  
