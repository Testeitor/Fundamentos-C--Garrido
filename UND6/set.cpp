//
//
//  tiempo.cpp
//	@Versión1
//	@autor: Angel Ruiz
//	Refactorización de código.
//
//

#include <iostream>
using namespace std;

/**
 * Definición de la Estructura del Tipo de Dato Compuesto TIEMPO
 */
struct Tiempo{
    int hora;
    int minutos;
    int segundos;
    bool am;
};

///////////////////////////////////////////////////////////////////////////
//   Métodos Básicos de Actualización de los campos de una Estructura    //
///////////////////////////////////////////////////////////////////////////

/**
 * @brief Módulo que actualiza el campo hora en una variable del Tipo de Dato Compuesto Tiempo.
 * @param Tiempo t Variable de tipo Tiempo a la que se le quiere actualizar el campo hora.
 * @param int nueva_hora Valor entero que contiene la nueva hora que se le asignará a la variable de tipo Tiempo.
 * @post La nueva hora estará actualizada tras la ejecución del módulo.
 */
void setHora(Tiempo &t, int nueva_hora){
    t.hora = nueva_hora;
}

/**
 * @brief Módulo que actualiza el campo minuto en una variable del Tipo de Dato Compuesto Tiempo.
 * @param Tiempo t Variable de tipo Tiempo a la que se le quiere actualizar el campo minutos.
 * @param int nuevos_minutos Valor entero que contiene los nuevos minutos que se le asignarán a la variable de tipo Tiempo.
 * @post Los nuevos minutos estarán actualizados tras la ejecución del módulo.
 */
void setMinutos(Tiempo &t, int nuevos_minutos){
    t.minutos = nuevos_minutos;
}

/**
 * @brief Módulo que actualiza el campo segundo en una variable del Tipo de Dato Compuesto Tiempo.
 * @param Tiempo t Variable de tipo Tiempo a la que se le quiere actualizar el campo segundo.
 * @param int nuevos_segundos Valor entero que contiene los nuevos segundos que se le asignarán a la variable de tipo Tiempo.
 * @post Los nuevos segundos estarán actualizados tras la ejecución del módulo.
 */
void setSegundos(Tiempo &t, int nuevos_segundos){
    t.segundos = nuevos_segundos;
}

/**
 * @brief Módulo que actualiza el campo am en una variable del Tipo de Dato Compuesto Tiempo.
 * @param Tiempo t Variable de tipo Tiempo a la que se le quiere actualizar el campo am.
 * @param bool nuevos_am Valor boleano que contiene los nuevos am que se le asignarán a la variable de tipo Tiempo.
 * @post Los nuevos am estarán actualizados tras la ejecución del módulo.
 */
void setAm(Tiempo &t, bool nuevos_am){
    t.am = nuevos_am;
}

///////////////////////////////////////////////////////////////////////////
//     Métodos Básicos de Obtención de los campos de una Estructura      //
///////////////////////////////////////////////////////////////////////////

/**
 * @brief Módulo que consulta el campo hora en una variable del Tipo de Dato Compuesto Tiempo.
 * @param Tiempo t Variable de tipo Tiempo de la que se le quiere obtener el valor del campo hora.
 * @pre Los datos de la variable t, deberían estar inicializados para no obtener basura.
 * @return Devuelve un número entero con el valor del campo hora, de la variable t de tipo Tiempo.
 */
int getHora(const Tiempo &t){
    return t.hora;
}

/**
 * @brief Módulo que consulta el campo minutos en una variable del Tipo de Dato Compuesto Tiempo.
 * @param Tiempo t Variable de tipo Tiempo de la que se le quiere obtener el valor del campo minutos.
 * @pre Los datos de la variable t, deberían estar inicializados para no obtener basura.
 * @return Devuelve un número entero con el valor del campo minutos, de la variable t de tipo Tiempo.
 */
int getMinutos(const Tiempo &t){
    return t.minutos;
}
/**
 * @brief Módulo que consulta el campo segundos en una variable del Tipo de Dato Compuesto Tiempo.
 * @param Tiempo t Variable de tipo Tiempo de la que se le quiere obtener el valor del campo segundos.
 * @pre Los datos de la variable t, deberían estar inicializados para no obtener basura.
 * @return Devuelve un número entero con el valor del campo segundos, de la variable t de tipo Tiempo.
 */
int getSegundos(const Tiempo &t){
    return t.segundos;
}
/**
 * @brief Módulo que consulta el campo Am en una variable del Tipo de Dato Compuesto Tiempo.
 * @param Tiempo t Variable de tipo Tiempo de la que se le quiere obtener el valor del campo Am.
 * @pre Los datos de la variable t, deberían estar inicializados para no obtener basura.
 * @return Devuelve una variable bool con el valor del campo am, de la variable t de tipo Tiempo.
 */
bool getAm(const Tiempo &t){
    return t.am;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void diferenciaTiemposEficiente(const Tiempo &salida, const Tiempo &llegada, Tiempo &crono){
    
    /* NO ME IMPORTA EL ALGORITMO LO IMPORTANTE ES EL FUNCIONAMIENTO DEL STRUCT */

    setHora(crono, getHora(llegada) - getHora(salida)); //crono.hora = llegada.hora - salida.hora;
    setMinutos(crono, getMinutos(llegada) - getMinutos(salida)); //crono.minutos = llegada.minutos - salida.minutos;
    setSegundos(crono, getSegundos(llegada) - getSegundos(salida)); //crono.segundos = llegada.segundos - salida.segundos; 
}

Tiempo diferenciaTiempos(const Tiempo salida, const Tiempo llegada){
    Tiempo crono;
    
    /* NO ME IMPORTA EL ALGORITMO LO IMPORTANTE ES EL FUNCIONAMIENTO DEL STRUCT */
    crono.hora = llegada.hora - salida.hora;
    crono.minutos = llegada.minutos - salida.minutos;
    crono.segundos = llegada.segundos - salida.segundos;
    
    return crono;
}


/**
 * @brief Módulo que imprime por pantalla una variable del Tipo Compuesto TIEMPO
 */
void imprimirCrono(const Tiempo t){

	int res1H = 0;
	int res2M = 0;
	int res3S = 0;

	
	res1H = getHora(t);
	res2M = getMinutos(t);
	res3S = getSegundos(t);
	

    /** Imprimirá bonica la variable t de tipo Tiempo, con el siguiente formato: HH:MM:SS [AM|PM] **/

    cout << "El corredor tardó un total de: ";

    if (res1H < 10){
        cout << "0" << res1H << ":";
    }
    else{
        cout << res1H << ":";
    }
    
    if(res2M < 10){
        cout << "0" << res2M << ":";
    }
    else{
        cout << res2M << ":";
    }
    
    if (res3S < 10){
        cout << "0" << res3S;
    }
    else{
        cout << res3S;
    }
}

/**
 * @brief Módulo que imprime por pantalla una variable del Tipo Compuesto TIEMPO
 */
void imprimirTiempo(const Tiempo t){

	int res1H = 0;
	int res2M = 0;
	int res3S = 0;
	bool res4A = 0;
	
	
	res1H = getHora(t);
	res2M = getMinutos(t);
	res3S = getSegundos(t);
	res4A = getAm(t);
	

    /** Imprimirá bonica la variable t de tipo Tiempo, con el siguiente formato: HH:MM:SS [AM|PM] **/
    if (res1H < 10){
        cout << " 0" << res1H << ":";
    }
    else{
        cout << res1H << ":";
    }
    
    if(res2M < 10){
        cout << "0" << res2M << ":";
    }
    else{
        cout << res2M << ":";
    }
    
    if (res3S < 10){
        cout << "0" << res3S;
    }
    else{
        cout << res3S;
    }
    
    if (res4A == true){
        cout << " AM" << endl;
    }
    else{
        cout << " PM" << endl;
    }
}

int main(){

    //Declaración de la Variable de Tipo de Dato Compuesto TIEMPO

    Tiempo ahora;
    Tiempo salida;
    Tiempo cronofinal;
    Tiempo cronofinaleficiente;

    //Declaramos variables para usarlas con la función SET
    char tecla;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    
    setHora(salida, 8); 		//equivalente a salida.hora = 8;
    setMinutos(salida, 0); 		//salida.minutos = 0;
    setSegundos(salida, 0); 	//salida.segundos = 0;
    setAm(salida, true); 		//salida.am = true;

  
	//Introducimos la hora de llegada del corredor   
    cout << "Bienvenidos a mi programa que calcula el tiempo total de carrera..." << endl;
    do {
        cout << "Introduzca la hora de llegada del corredor [0-12]: ";
        cin >> horas;
    } while (horas > 12 || horas < 0);

    setHora(ahora,horas);
    

    //Preguntamos si es por la mañana
    cout << "¿Es por la mañana?[S/N]" << endl;
    cin >> tecla;

    if (tecla == 's'){

        setAm(ahora, false);
    }
    else{

        setAm(ahora, true);
    }
    
    //Preguntamos los minutos del corredor
    do {
        cout << "Introduzca los minutos de llegada del corredor [0-59]: ";
        cin >> minutos;   
    } while (minutos > 59 || minutos < 0);

    setMinutos(ahora, minutos);
    
    //Preguntamos los segundos del corredor
    do {
        cout << "Introduzca los segundos de llegada del corredor[0-59]: ";
        cin >> segundos;
    } while (segundos > 59 || segundos < 0);
	
    setSegundos(ahora, segundos);

    /////////////////////////IMPRIMIMOS POR PANTALLA///////////////////////
    
    cout << "La carrera comenzó a las: ";
    imprimirTiempo(salida);
    
    //// Llamada a el módulo imprimirTiempo 
    
    cout << "El corredor llegó a meta a las: ";
    imprimirTiempo(ahora);
    
    //// Llamada al módulo diferencia de tiempos
    
    cronofinal = diferenciaTiempos(salida, ahora);
    imprimirCrono(cronofinal);
    cout << endl;
    
    ////Llamada al módulo diferencia de tiempos pero usando el paso por REFERENCIA 
    
    diferenciaTiemposEficiente(salida, ahora, cronofinaleficiente);
    imprimirCrono(cronofinaleficiente);
    cout << endl;
	
}//Final del programa
