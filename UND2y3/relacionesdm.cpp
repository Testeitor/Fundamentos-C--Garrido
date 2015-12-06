//
//
// Implemente una función para calcular el máximo común divisor (MCD) y el mínimo común múltiplo (MCM) de dos enteros.
// Para ello tenga en cuenta la relación: a*b = MCD(a,b) * MCM(a,b)
//
//


#include  <iostream>
using namespace std;

//Funciones


int funcionMcm(int a, int b, int mcd){

	int formula_mcm = 0;

	formula_mcm = a*b/mcd;

	return formula_mcm;

}



int funcionMcd(int num1, int num2){

	int resto = 0;
	resto = num1 % num2;


	while(resto!=0){

	num1 = num2;

	num2 = resto;

	resto = num1 % num2;

	}


	return num2;

}

int relacionesMcdMcm(int a, int b){

	int relaciones = 0;
	int res_mcd = 0;
	int res_mcm = 0;
	
	res_mcd = funcionMcd(a,b);
	res_mcm = funcionMcm(a,b,res_mcd);
	
	relaciones = res_mcd * res_mcm;

	return relaciones;

}



//Función Principal
int main(){


	//0.Declaramos las Variables

	int numero1 = 0;
	int numero2 = 0;
	int resultado = 0;

	//1. Ahora le pedimos al usuario que introduzca dos número para calcular el M.C.D

	cout << "Introduzca dos números para calcular la relación del (MDM) y el (MCM) de dos números enteros" << endl;

	cin >> numero1 >> numero2;

	resultado = relacionesMcdMcm(numero1, numero2);

	cout << "El resultado de la relación del (MDM) y el (MCM) de los números enteros: " << numero1 << " y " << numero2 << " = " << resultado << endl;

}//Fin del Programa
