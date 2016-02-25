//
//  
//  tiempo.cpp
//  Versión 1.0
//
//

#include <iostream>
using namespace std;

/**
 * Definición de la Estructura del Tipo de Dato Compuesto TIEMPO
 */
struct Tiempo{
    int hora;
    int minuto;
    int segundo;
    bool am;
};

/**
 * @brief Módulo que imprime por pantalla una variable del Tipo Compuesto TIEMPO
 */
void imprimirTiempo(const Tiempo t){

    /** Imprimirá bonica la variable t de tipo Tiempo, con el siguiente formato: HH:MM:SS [AM|PM] **/

    cout << t.hora << ":";
    cout << t.minuto << ":";
    cout << t.segundo;


    if(t.am){

    	cout << " [AM]" << endl;

    }else{

    	cout << " [PM]" << endl;
    }


}

int main(){

    //Declaración de la Variable de Tipo de Dato Compuesto TIEMPO
    Tiempo ahora;
    
    cout << "Bienvenidos a mi programa de la hora..." << endl;

   // Para saber la Hora.

    do {
        cout << "Introduzca la hora [0-23]: ";
        cin >> ahora.hora;
    } while ((ahora.hora > 23) || (ahora.hora < 0));

    //Para saber si AM o PM.

    if(ahora.hora < 12){

    	ahora.am = true; //Si es TRUE es AM

    }else if(ahora.hora >12){

    	ahora.am = false; //Si es FALSE es PM
    }

    //Para saber los minutos.

     do {
        cout << "Introduzca los minutos [0-59]: ";
        cin >> ahora.minuto;
    } while ((ahora.minuto > 59) || (ahora.minuto < 0));

    //Para saber los segundos.

     do {
        cout << "Introduzca los segundos [0-59]: ";
        cin >> ahora.segundo;
    } while ((ahora.segundo > 59) || (ahora.segundo < 0));
    
    /** ... Llamada a el módulo imprimirTiempo ... **/
    imprimirTiempo(ahora);
}
