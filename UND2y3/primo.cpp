//
//
// Elaborar un programa que te diga si un numero es primo o no.
// 
//


#include <iostream>
using namespace std;

int main(){


	int numero = 0;
	int i = 0;
	bool esprimo;

	cout << "Introduzca un número entero" << endl;

	cin >> numero;
	esprimo = true;

	for(i=2;i<numero;i++){


		if(numero%i==0){

		esprimo=false;

		}

	}


	if(esprimo){


	cout << "El número: "<< numero << " es primo" << endl;

	}
	else{

	cout << "El número: "<< numero << " no es primo" << endl;


	}





}//Fin del Programa
  
