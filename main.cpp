#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>
using namespace std;

//2 ejercicios a realizar estan ubicados en el archivo Lista.h

//Devuelve el promedio de los valres de mi_lista dada
float obtenerPromedio(std::list<float> mi_lista)
{
    float suma = 0;
    float promedio = 0;
    int cant = 0;
    for(list<float>::iterator temp = mi_lista.begin(); temp!=mi_lista.end(); temp++)
    {
         suma += *temp;
         cant++;
    }
    promedio = suma/cant;
    return promedio;
}

//Devuelve la suma de los valres de mi_vector dada
int obtenerSuma(std::vector<int> mi_vector)
{
    int suma = 0;
    for(vector<int>::iterator temp = mi_vector.begin(); temp!=mi_vector.end(); temp++)
         suma += *temp;
    return suma;
}

//Devuelve verdadero si encuentra cadena (dada) en el archivo con nombre nombre_archivo (dado), de lo contrario devuelve false
bool existeEnArchivo(string nombre_archivo, string cadena)
{
    ifstream in(nombre_archivo.c_str());
    string str;
    bool resu = false;
    int c = 0;

   do
    {
      in>>str;

      if (str == cadena)
      {
        in.close();
        resu = true;
      }
      else
        resu = false;
        c++;
    }
     while(str[c-2]);

     return resu;

}

//Devuelve devuelve el tamano en bytes del archivo con nombre nombre_archivo (dado)
int obtenerTamanoDeArchivo(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());//se crea un ifstream para leer el archivo
    in.seekg(0,ios::end); //se posiciona al final del archivo
    int tamano = in.tellg();//indica el tamano en bytes del archivo

    return tamano;
}

//Devuelve true si encuentra el valor num (dado) en el arbol dada su raiz

bool existeEnArbol(NodoTrinario* raiz, int num)
{
  /* bool res = false;
   for(  NodoTrinario  *t = raiz; t!=NULL; t=t)
   {
   if(t==num)
   res = true;
   else
    res = false;
   }
*/
return false;
   }


int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
