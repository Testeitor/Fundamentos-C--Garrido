//
//
//  alumno.cpp
//	@autor Ángel Ruiz
//	@Versión1  
//	Ejercicio pedagógico para comprender el funcionamiento de las Estructuras.
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
    double notaMedia;
};

//////////////////////////////////SET Y GET DE NOMBRE////////////////////////

void setNombre(Alumno1DAM &a, string nuevo_nombre){
    a.nombre = nuevo_nombre;
}

string getNombre(const Alumno1DAM &a){
    return a.nombre;
}

////////////////////////////////////SET Y GET DE APELLIDO1////////////////////
void setApellido1(Alumno1DAM &a, string nuevo_apellido1){
    a.apellido1 = nuevo_apellido1;
}

string getApellido1(const Alumno1DAM &a){
    return a.apellido1;
}

///////////////////////////////////SET Y GET DE APELLIDO2//////////////////////
void setApellido2(Alumno1DAM &a, string nuevo_apellido2){
    a.apellido2 = nuevo_apellido2;
}

string getApellido2(const Alumno1DAM &a){
    return a.apellido2;
}

/////////////////////////////////////SET Y GET DE EDAD//////////////////////////
void setEdad(Alumno1DAM &a, int nueva_edad){
    a.edad = nueva_edad;
}

int getEdad(const Alumno1DAM &a){
    return a.edad;
}

//////////////////////////////////////SET Y GET DE UTILES////////////////////////
void setUtiles(Alumno1DAM &a, int nuevas_utiles){
    a.utiles = nuevas_utiles;
}

int getUtiles(const Alumno1DAM &a){
    return a.utiles;
}

/////////////////////////////////////SET Y GET DE MEDIA NOTAS////////////////////
void setNotaMedia(Alumno1DAM &a, double nueva_media_notas){
    a.notaMedia = nueva_media_notas;
}

double getNotaMedia(const Alumno1DAM &a){
    return a.notaMedia;
}


/**
 * @brief Asigna una nueva nota al alumno en la posición deseada de su vector de notas.
 * @param Alumno1DAM a El alumno al que se le quiere actualizar la nota determinada.
 * @param int posicion Posicion del Vector de Notas del alumno de la que se quiere actualizar la calificación.
 * @param double nueva_nota La nueva nota que se quiere asignar.
 * @pre La posición debe estar comprendida entre 0 y las utiles del alumno, ya que sino, no se actualizará nada.
 * @post Al terminar el módulo, la nota estará actualizada. Si la posición no está en el rango permitido, no cambiará nada.
 */
void setNotas(Alumno1DAM &a, int posicion, double nueva_nota){
    if ((posicion >= 0) && (posicion < getUtiles(a)+1))
        a.notas[posicion] = nueva_nota;
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



void printAlumno1DAM(const Alumno1DAM &a){
    cout << "**** ------ Alumno del Infierno de 1ºDAM ------- **** " << endl;
    cout << "Nombre: " << getNombre(a) << endl;
    cout << "Apellido1: " << getApellido1(a) << endl;
    cout << "          #### Calficaciones Infernales ####" << endl;
    for(int i=0; i < getUtiles(a); i++){
        cout << "                "<< getAsignaturas(a,i) << " = " << getNotas(a,i) << endl;
    }
    cout << endl;
    
    //Imprimiremos la nota media, haciendo la llamada al módulo pertinente con el alumno pertinente
    cout << "La nota media es : " << getNotaMedia(a);

    cout << endl;
}

void imprimirClase1DAM(Alumno1DAM v[], int util_v){

    //Llamando al módulo printAlumno1DAM para cada elemento del vector.

	for(int i=0;i<util_v;i++){

		printAlumno1DAM(v[i]);
	}

}

/*****************************************************************************/
/******** Módulo que ordena un vector de alumnos por calificación media ******/
/*****************************************************************************/
void ordenarVectorAlumnos1DAMporNotaMedia(Alumno1DAM v[], int util_v){
   
	bool cambio = true; //Variable que nos indica si es necesario cambiar

		for(int izda=0; izda<util_v && cambio; izda++){

			cambio = false;

			for(int i=util_v-1 ; i>izda; i--){

					if( getNotaMedia(v[i]) < getNotaMedia(v[i-1]) ){ //comparamos las notas medias de los Alumnos1DAM

						cambio = true;
				
						Alumno1DAM aux = v[i]; // aux ES UNA VARIABLE DEL TIPO DE LA ESTRUCTURA Alumno1DAM (Intercambia las posciones contiguas).
						v[i] = v[i-1];
						v[i-1] = aux;	   					
					}

			}

		}

}

/**********************************************************************/
/******** Módulo que calcula la nota media de las calificaciones ******/
/**********************************************************************/
void calcularMediaNotasAlumnos1DAM(Alumno1DAM v[], int util_v){

	for(int i=0;i<util_v;i++){

		double nota_media_final = 0.0;

		for(int j=0;j< getUtiles(v[i]);j++){

			nota_media_final += getNotas(v[i],j);

		}

		nota_media_final /= getUtiles(v[i]);

		setNotaMedia(v[i], nota_media_final);

	}


}

int main(){

    Alumno1DAM arturo, angel, carlos; //DECLARO VARIABLES DEL TIPO DE LA ESTRUCTURA

    /////////////Metemos los datos básicos del Alumno Arturo///////////
    setNombre(arturo, "Arturo");
    setApellido1(arturo, "Muñoz");
    setUtiles(arturo, 0);
    setNotaMedia(arturo, 0.0);
    
        //Le cargamos asignaturas al Alumno
        setAsignaturas(arturo, 0, "PROG");
        setNotas(arturo, 0, 9.9);
        setUtiles(arturo, getUtiles(arturo) + 1);
    
        setAsignaturas(arturo, 1, "BD");
        setNotas(arturo, 1, 4.9);
        setUtiles(arturo, getUtiles(arturo) + 1);

    /////////////Metemos los datos básicos del Alumno Ángel///////////
    setNombre(angel, "Ángel");
    setApellido1(angel, "Hernández");
    setUtiles(angel, 0);
    setNotaMedia(angel, 0.0);
    
        //Le cargamos asignaturas al Alumno
        setAsignaturas(angel, 0, "ED");
        setNotas(angel, 0, 6.3);
        setUtiles(angel, getUtiles(angel) + 1);
    
        setAsignaturas(angel, 1, "LM");
        setNotas(angel, 1, 1.9);
        setUtiles(angel, getUtiles(angel) + 1);

    /////////////Metemos los datos básicos del Alumno Carlos///////////
    setNombre(carlos, "Carlos");
    setApellido1(carlos, "Molina");
    setUtiles(carlos, 0);
    setNotaMedia(carlos, 0.0);
    
        //Le cargamos asignaturas al Alumno
        setAsignaturas(carlos, 0, "ED");
        setNotas(carlos, 0, 5.3);
        setUtiles(carlos, getUtiles(carlos) + 1);
    
        setAsignaturas(carlos, 1, "LM");
        setNotas(carlos, 1, 2.8);
        setUtiles(carlos, getUtiles(carlos) + 1);
    
    //Imprimimos por pantalla nuestros alumnos
    //printAlumno1DAM(arturo);
    //printAlumno1DAM(angel);
    //printAlumno1DAM(carlos);
    
    /* OTRA COSA QUE VEREMOS MAÑANA */
    const int DIM_PROMOCION = 21;
    Alumno1DAM promocion_actual[DIM_PROMOCION]; //aquí hay espacio para vuestras personas
    int util_promocion_actual = 0;
    
    cout << endl << "***** GESTIÓN DE VECTORES DE ESTRUCTURAS ******" << endl;
    
    //Meto un alumno en el vector de alumnos
    promocion_actual[0] = arturo; //HAY UNA COPIA ESTÁTICA DE LOS DATOS
    util_promocion_actual++;

    promocion_actual[1] = angel;
    util_promocion_actual++;

    promocion_actual[2] = carlos;
    util_promocion_actual++;
    
    //cout << "Ahora imprimo la primera posición que he guardado en el vector de Alumnos..." << endl;

    //printAlumno1DAM(promocion_actual[0]);
    //printAlumno1DAM(promocion_actual[1]);
    //printAlumno1DAM(promocion_actual[2]);
    
    calcularMediaNotasAlumnos1DAM(promocion_actual, util_promocion_actual);
    ordenarVectorAlumnos1DAMporNotaMedia(promocion_actual, util_promocion_actual);
    imprimirClase1DAM(promocion_actual, util_promocion_actual);

}//Final del Programa

