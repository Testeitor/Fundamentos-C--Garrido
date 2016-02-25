//
//  alumno.cpp
//  
//
//  Created by Jaime Matas Bustos on 17/02/16.
//
//

#include <iostream>
#include <string>
using namespace std;

const int DIM = 6;

//DEFINO LA ESTRUCTURA QUE TENDRÁN MIS VARIABLES
struct Alumno1DAM{
    string nombre;
    string apellido1;
    string apellido2;
    int edad;
    string asignaturas[DIM];
    double notas[DIM];
    int utiles;
    double media_expediente; //almacenará la media actual del expediente de ese alumno en base a sus asignaturas.
};

void setNombre(Alumno1DAM &a, string nuevo_nombre){
    a.nombre = nuevo_nombre;
}

string getNombre(const Alumno1DAM &a){
    return a.nombre;
}

void setApellido1(Alumno1DAM &a, string nuevo_apellido1){
    a.apellido1 = nuevo_apellido1;
}

string getApellido1(const Alumno1DAM &a){
    return a.apellido1;
}

/*
setApellido1
getApellido1

setApellido2
getApellido2

setEdad
getEdad
*/

void setUtiles(Alumno1DAM &a, int nuevas_utiles){
    a.utiles = nuevas_utiles;
}

int getUtiles(const Alumno1DAM &a){
    return a.utiles;
}


/**
 * @brief Devolverá la calificación de un alumno que esté guardada en la posición que le indiquemos.
 * @param Alumno1DAM a El alumno del que se que se quiere obtener la calificación concreta.
 * @param int posicion Posicion del Vector de Notas del alumno donde se encuentra la calificación que queremos.
 * @pre La posición debe estar comprendida entre 0 y las utiles del alumno.
 * @return La calificación que queríamos. En caso de que no exista calificación se devolverá -1.
 */
double getNotas(const Alumno1DAM &a, int posicion){
    double nota = 0.0;
    
    if ((posicion >= 0) && (posicion < getUtiles(a)+1))
        nota = a.notas[posicion];
    else
        nota = -1.0;
    
    return nota;
}

double calcularMediaCalificacionesAlumno(const Alumno1DAM &a){
    double media = 0.0;
    for (int i=0; i < getUtiles(a); i++)
        media = media + getNotas(a,i);
    
    media = media / getUtiles(a);
    
    return media;
}

/**
 * @brief Asigna una nueva nota al alumno en la posición deseada de su vector de notas.
 * @param Alumno1DAM a El alumno al que se le quiere actualizar la nota determinada.
 * @param int posicion Posicion del Vector de Notas del alumno de la que se quiere actualizar la calificación.
 * @param double nueva_nota La nueva nota que se quiere asignar.
 * @pre La posición debe estar comprendida entre 0 y las utiles del alumno, ya que sino, no se actualizará nada.
 * @post Al terminar el módulo, la nota estará actualizada. Si la posición no está en el rango permitido, no cambiará nada. LA MEDIA DEL EXPEDIENTE SE ACTUALIZARÁ AUTOMÁTICAMENTE.
 */
void setNotas(Alumno1DAM &a, int posicion, double nueva_nota){
    if ((posicion >= 0) && (posicion < getUtiles(a)+1)){
        a.notas[posicion] = nueva_nota;
        a.media_expediente = calcularMediaCalificacionesAlumno(a);
    }
}


void setAsignaturas(Alumno1DAM &a, int posicion, string nueva_asignatura){
    if ((posicion >= 0) && (posicion < getUtiles(a)+1))
        a.asignaturas[posicion] = nueva_asignatura;
}

string getAsignaturas(const Alumno1DAM &a, int posicion){
    string asignatura = "";

    if ((posicion >= 0) && (posicion < getUtiles(a)+1))
        asignatura = a.asignaturas[posicion];
    else
        asignatura = "ERROR";

    return asignatura;
}

/**********************************************************************/
/******** Módulo que calcula la nota media de las calificaciones ******/
/**********************************************************************/


void printAlumno1DAM(const Alumno1DAM &a){
    cout << "**** ------ Alumno del Infierno de 1ºDAM ------- **** " << endl;
    cout << "Nombre: " << getNombre(a) << endl;
    cout << "Apellido1: " << getApellido1(a) << endl;
    cout << "          #### Calficaciones Infernales ####" << endl;
    for(int i=0; i < getUtiles(a); i++){
        cout << "                "<< getAsignaturas(a,i) << " = " << getNotas(a,i) << endl;
    }
    //Imprimiremos la nota media, haciendo la llamada al módulo pertinente con el alumno pertinente
    cout << "                "<< "Media del Expediente: " << calcularMediaCalificacionesAlumno (a) << endl;
    cout << endl;
}


/* MÓDULOS PARA LA GESTIÓN DE UN VECTOR DE ALUMNOS */

void insertarAlumno(Alumno1DAM v[], int &util_v, const int DIM_V, const Alumno1DAM &a){
    if (util_v < DIM_V){
        v[util_v] = a; //HAY UNA COPIA ESTÁTICA DE LOS DATOS
        util_v++;
    }
}

/*****************************************************************************/
/******** Módulo que ordena un vector de alumnos por calificación media ******/
/*****************************************************************************/
void ordenarVectorAlumnos1DAMporNotaMedia(Alumno1DAM v[], int util_v){
    
}

void imprimirClase1DAM(Alumno1DAM v[], int util_v){
    //Llamando al módulo printAlumno1DAM para cada elemento del vector ¿no? ;)
}


int main(){
    Alumno1DAM arturo, angel; //DECLARO VARIABLES DEL TIPO DE LA ESTRUCTURA
    
    //Metemos los datos básicos del Alumno Arturo
    setNombre(arturo, "Arturo");
    setApellido1(arturo, "Muñoz");
    setUtiles(arturo, 0);
    
        //Le cargamos asignaturas al Alumno
        setAsignaturas(arturo, 0, "PROG");
        setNotas(arturo, 0, 9.9);
        setUtiles(arturo, getUtiles(arturo) + 1);
    
        setAsignaturas(arturo, 1, "BD");
        setNotas(arturo, 1, 4.9);
        setUtiles(arturo, getUtiles(arturo) + 1);
    
    //Metemos los datos del Alumno Ángel
    setNombre(angel, "Ángel");
    setApellido1(angel, "Hernández");
    setUtiles(angel, 0);
    
        //Le cargamos asignaturas al Alumno
        setAsignaturas(angel, 0, "ED");
        setNotas(angel, 0, 6.3);
        setUtiles(angel, getUtiles(angel) + 1);
    
        setAsignaturas(angel, 1, "LM");
        setNotas(angel, 1, 1.9);
        setUtiles(angel, getUtiles(angel) + 1);
    
    //Imprimimos por pantalla nuestros alumnos
    printAlumno1DAM(arturo);
    printAlumno1DAM(angel);
    
    /* OTRA COSA QUE VEREMOS MAÑANA */
    const int DIM_PROMOCION = 21;
    Alumno1DAM promocion_actual[DIM_PROMOCION]; //aquí hay espacio para vuestras personas
    int util_promocion_actual = 0;
    
    cout << endl << "***** GESTIÓN DE VECTORES DE ESTRUCTURAS ******" << endl;
    
    //Meto un alumno en el vector de alumnos
    insertarAlumno(promocion_actual, util_promocion_actual, DIM_PROMOCION, arturo);
    
    cout << "utiles de arturo: " << getUtiles(arturo) << endl;
    cout << "utiles de arturo en el vector: " << getUtiles(promocion_actual[0]) << endl;
    
    setAsignaturas(promocion_actual[0], getUtiles(promocion_actual[0]), "PSP");
    setNotas(promocion_actual[0], getUtiles(promocion_actual[0]), 0.0);
    setUtiles(promocion_actual[0], getUtiles(promocion_actual[0]) + 1);
    
    cout << "Ahora imprimo la primera posición que he guardado en el vector de Alumnos..." << endl;
    printAlumno1DAM(promocion_actual[0]);
    
    /*** METEMOS VARIOS ALUMNOS EN EL VECTOR ***/
    
    /*** ORDENAMOS EL VECTOR ***/
    
}

