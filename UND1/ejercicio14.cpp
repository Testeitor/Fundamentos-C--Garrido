//
//
// Escriba un programa que lea 3 valores reales (x1,x2,x3)
// y escriba en la salida estándar la media y la desviación tipica de esos valores.
//
//

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

	//0.Declaramos las variables para calcular la media y la desviación típica.

	int m; // Media
	int d; // Desviación Típica

	int x1,x2,x3; // Valores que introduce el usuario.

	//1.Pedimos al usuario que introduzca 3 valores reales.

	cout << "Introduzca 3 valores reales para x1,x2,x3 separados por un espacio: ";

	//2.Recogemos los 3 valores y los guardamos en las variables x1,x2,x3.

	cin >> x1 >> x2 >> x3;

	//3.Ahora calculamos la Media y la Desviación Típica.

		//3.1 Calculamos la Media:

		m = x1+x2+x3/3;

		//3.2 Calculamos la Desviación Típica:

		d = sqrt(pow((x1-m),2) + pow((x2-m),2) + pow((x3-m),2)/3);

	//4.Ahora mostramos el resultado de la Media y la Desviación Típica.


		//4.1 Mostramos la Media:

		cout << "La media es: " << m << endl;
	
		//4.2 Mostramos la Desviación Típica:
	
		cout << "La Desviación Típica es: " << d << endl;

	
}
