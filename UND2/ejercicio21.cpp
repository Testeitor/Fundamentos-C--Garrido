//
//
//	Escribir un programa que lea dos valores reales, y escriba en la salida estándar un mensaje
//	indicando cual es mayor.
//
//


#include <iostream>
using namespace std;

int main()
{
	
	//0.Declaramos las variables y las inicializamos
	double a=0.0;
	double b=0.0;
	
	//1.Pedimos al usuario por pantalla que ingrese dos número reales y los recogemos y guardamos en un espacio de memoria.
	
		cout << "Introduzca el primer número" << endl;
		
		cin >> a;
		
		cout << "Introduzca el segundo número" << endl;
		
		cin >> b;
	
	//2.0 Ahora comparamos cual de los dos números es mayor. Tenemos dos casos: a) Que a > b
	//																		    b) Que b > a
	
	
		// 2.1 Inicio del primer condicional
		if(a > b){
			
			cout << "El número: " << a << "Es mayor que el número: " << b << endl;
			
		}else
		{
			// 2.2 Inicio del segundo condicional
			if(b > a){
				
				
				cout << "El número: " << b << "Es mayor que el número: " << a << endl;
				
			}//Final 2.2
			
			
			
		}//Final 2.1
	
	
	
	
	
	
	
	
}

