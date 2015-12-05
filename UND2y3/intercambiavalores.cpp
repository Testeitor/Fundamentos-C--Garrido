//
//
// Elaborar un programa que intercambie valores
//
//


#include <iostream>
using namespace std;

//Funciones


void intercambio_valores(int &a, int &b){

    int aux;
    aux = a;
    a = b;
    b = aux;
    
}

//Función Principal

int main(){

	
		//0.Declaramos las Variables

    		int num1 = 0;
		int num2 = 0;

		//1.Introducimos los datos e invocamos la función.

		cout << "Introduzca dos números:" << endl;

		cin >> num1 >> num2;

    		intercambio_valores(num1,num2);

    		cout << num1 << " y " << num2 << endl;

}
