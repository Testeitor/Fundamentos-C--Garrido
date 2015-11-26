//
//
// Un satelite realiza una transmisión de un número indefinido de datos enteros 
// que terminan con un número negativo. Ejemplo: 10, 20, 30, 40, 50, -1
//
//


#include <iostream>
using namespace std;

int main(){


	//0.Declaración de las Variables

	int dato = 0;

	//1.Ahora realizamos una estructura repetitiva empleando do while para que envie datos hasta que este sea negativo.

	do{

	cin >> dato;
	cout << "Recibido: " << dato << endl;


	}while(dato>=0);

	cout << "Fin de la transmisión" << endl;




}
