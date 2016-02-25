//
//
//	diccionario.cpp
//	@Versión1
//	@autor: Ángel Ruiz Soler
//
//

#include <iostream>
#include <cstring>
using namespace std;

const int MAX_NUM_PALABRAS = 1000;


/*	Donde almacena, junto a cada palabra(palabra) que es una cadena de caracteres de C (cstring),
 *	el índice (traducción) de la entrada de su traducción en el otro vector del diccionario.
 */

struct entrada{

	string palabra;
	int traduccion;
};


//Se define un diccionario español-inglés como una estructura:
struct diccionario{

	entrada ingles[MAX_NUM_PALABRAS];
	entrada espanol[MAX_NUM_PALABRAS];

	int num_palabras; //num_palabras contiene el número de palabras que hay actualmente en el diccionario, y entrada es la estructura:
};


/* Realizar una función que busque una palabra en un vector de entrada y devuelva la posición donde se encuentra
 * la palabra, si no está, la variable "pos" valdrá  -1 .
 */

 int busca(const string palabra,const entrada idioma[], int num_palabras){

 		int pos = -1;
 		bool comprobar = true;

 		for(int i=0;i<num_palabras && comprobar;i++){

 			if(palabra == idioma[i].palabra){

 				pos = i;
 				comprobar = false;

 			}else{

 				comprobar = true;
 				
 			}


 		}

 		return pos;
 }


 /*	Realizar la función que, dada una palabra en español almacenada en un cstring y un diccionario,
  *	devuelve un cstring con la traducción de dicha palabra al inglés.
  */

  bool traduce_palabra_esp_ing(const string palabra,const diccionario &dic, string &traduc){


  	int pos = busca(palabra, dic.espanol, dic.num_palabras);

  	if(pos != -1){ //Está en el diccionario

  		int trad = dic.espanol[pos].traduccion;
  		traduc = dic.ingles[trad].palabra;

  		return true;
  	}else{

  		return false; //Error en la traducción
  	}


  }

  /* 
   * Imprimir el contenido del diccionario
   */

   void imprime(const diccionario &dic){

   	cout << "*************************Contenido del Diccionario*********************" << endl;
   	cout << "Número de palabras:  " << dic.num_palabras << endl;
   	cout << "Palabras en español" << " y traducidas al ingles: " << endl;

   	for(int i=0;i<dic.num_palabras;i++){

   		cout << "\t" << dic.espanol[i].palabra  << "\t" << dic.ingles[dic.espanol[i].traduccion].palabra << endl;

   	}

   }


    /*
     *	Añadir una pareja de palabras en el diccionario.
     */

     bool anade_al_diccionario(const string esp, const string ing, diccionario &dic){


     	if( busca(esp,dic.espanol, dic.num_palabras) == -1 && busca(ing, dic.ingles, dic.num_palabras) == -1){


     		//Nota: tenemos que buscar en los dos diccionarios
     		//antes de añadir, para evitar tener entradas repetidas

     		dic.espanol[dic.num_palabras].palabra = esp;
     		dic.ingles[dic.num_palabras].palabra = ing;	

     		dic.espanol[dic.num_palabras].traduccion = dic.num_palabras;
     		dic.ingles[dic.num_palabras].traduccion = dic.num_palabras;

     		dic.num_palabras++; //tenemos una palabra más.
     		return true;

     	}else{ //alguna palabra ya está en el diccionario.

     		return false;
     	}


     }

     void inicializa(diccionario &dic){

     	dic.espanol[0].palabra = "hola";
     	dic.espanol[0].traduccion = 0;

     	dic.ingles[0].palabra = "hello";
     	dic.ingles[0].traduccion = 0;

		dic.num_palabras = 1;

     }

     int main(){

     	//Declaramos variables de tipo estructura.
     	diccionario dic;

     	//Declaramos las Variables
     	string trad;
     	string palab_buscar;
     	string palab_ingles;

     	//Inicializando diccionario
     	inicializa(dic);


     	//Introduzca una palabra para buscar su traducción

     	cout << "Introduzca una palabra para su traducción" << endl;
     	cin >> palab_buscar;

     	cout << endl;

     	/////////////////TRADUCIMOS LA PALABRA////////////////////

     	cout << "Traduciendo '" << palab_buscar << "' ..." << endl;

     	if(traduce_palabra_esp_ing(palab_buscar,dic,trad)){

     		cout << "'" << palab_buscar << "' es " << trad << endl;

     	}else{

	     		cout << "'" << palab_buscar << "' no está en el diccionario" << endl;


	     		///EN EL CASO DE QUE NO ESTÉ LA INTRODUCIMOS EN EL DICCIONARIO///

	     	
		     	cout << "Introduzca la palabra en ingles para introducirla en el diccionario" << endl;
		     	cin >> palab_ingles;

		     	cout << endl;
		     	
		     	cout << "Tratando de añadir '" << palab_buscar << "' <-> '" << palab_ingles << "'" << endl;

		     	if(!anade_al_diccionario(palab_buscar,palab_ingles,dic)){

		     		cout << "Erro al añadir '" << palab_buscar << "'/ '" << palab_ingles << "'\n";

		     	}else{
			
					cout << "La palabra: " << palab_ingles << " ha sido añadida correctamente." << endl;
		     	}


     		}

     	cout << endl;
     	imprime(dic);

     	

     }//Final del programa