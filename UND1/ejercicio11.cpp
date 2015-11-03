//
//
// Se requiere un programa que calcule la nota final de la asignatura de Programación.
// (Se pedirán 3 números, separados por espacios)
// La calificación final se obtiene sobre 3 notas: 70% teoría, 20% prácticas y un 10% la de problemas.
//
//


#include <iostream>
using namespace std;

int main()
{

	//0.Definimos las variables y las constantes
	
	double nota_sacada_teoria;
	double nota_sacada_practica; //Nos las da el usuario (Alumno)
	double nota_sacada_problemas;
	
	//0.Notas que tiene que calcular el programa
	double nota_final_teoria;    
	double nota_final_practica;  
	double nota_final_problemas; 
	double nota_final_programacion;

	//0.Constantes para calcular las notas
	const  double calificacion_teoria = 0.70;
	const  double calificacion_practica = 0.20;
	const  double calificacion_problemas = 0.10;

	//1.Pedimos que el usuario introduzca 3 números en la misma línea separados por espacios.

	cout << "Introduzca su nota de teoría, práctica y de problemas separados por espacios: ";

	//2.Recogemos los datos introducidos por el usuario y los guardamos en las variables de notas_sacadas referente
	// al apartado 0.

	cin >> nota_sacada_teoria >> nota_sacada_practica >> nota_sacada_problemas;

	//3.Ahora realizamos las operaciones de cálculo para obtener la nota final de la asignatura programación.

	//3.1 Calculamos las notas (Teoría, Prácticas y Problemas)

	nota_final_teoria = calificacion_teoria * nota_sacada_teoria;
	nota_final_practica = calificacion_practica * nota_sacada_practica;
	nota_final_problemas = calificacion_problemas * nota_sacada_problemas;

	//3.2 Calculamos la nota final de programación en base a las notas calculadas anteriormente paso 3.1

	nota_final_programacion = nota_final_teoria + nota_final_practica + nota_final_problemas;

	//4.Ahora mostramos el resultado de la nota final de programación.

	cout << "La nota final de Programación en base a 3 notas:\n";
	cout << "Nota Final De Teoría: " << nota_final_teoria << endl;
	cout << "Nota Final De Práctica: " << nota_final_practica << endl;
	cout << "Nota Final De Problemas: " << nota_final_problemas << endl;
	cout << "Nota Final De Programación: " << nota_final_programacion << endl;


}

