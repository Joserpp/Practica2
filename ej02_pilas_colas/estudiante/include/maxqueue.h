/**
 * @file maxqueue.h
 * @brief  Archivo de especificación del TDA MaxQueue
 * @author
 */
#ifndef _MAXQUEUE_
#define _MAXQUEUE_

#include <stack>
#include <iostream>
using namespace std;

/**
 * @brief Struct con dos atributos value y max_value.
 * 
 * value almacena un valor.
 * max_value guarda el máximo de los valores que hay.
 **/
struct element{
    int value;
    int max_value;
    /**
     * @brief sobrecarga del operador << para sacar por pantalla los valores
     * @param numero flujo de salida
     * @param p representa la instancia que se saca por pantalla
     * @return se devulve el flujo de salida p.
     **/
    friend ostream & operator <<(ostream & p, const element & numero){

        p<<numero.value<<","<<numero.max_value;

    return p;

    }
};

/**
 * @brief La clase MaxCola nos permitira crear instancias donde almacenaremos valores siguiendo la estructura de una cola, sin embargo 
 * internamente seguirá una estructura basada en una pila 
 * 
 * Para poder usar el TDA MaxCola es necesario incluir el fichero #include <maxqueue.h>.
 * 
 **/
class MaxCola{
    private:
        stack<element> datos;

    public:

   /**
    * @brief Devuelve el primer elemento almacenado en la cola
    * @return Una instancia de tipo element formado por el valor que más tiempo lleva en la cola junto 
    * al valor actual más grande contenido en la cola 
    */
    element front() const;
    /**
     * Almacena una nueva instancia de tipo element en la última posición de la cola
     * @param valor es el valor que se va a introducir en la cola
     * Si valor es mayor que todos los introducidos con anterioridad se convertirá en el nuevo
     * máximo     
     */        
    void push (int valor);
    /**
     * @brief Elimina el primer elemento introducido en la cola
     */
    void pop ();

    /**
     * @brief Devuelve el tamaño de la cola
     * @return Numero de elementos contenidos en la cola
     * 
     */
    int size();
    /**
     * @brief Informa si la cola se encuentra vacia o no
     * @return true-> si la pila se encuentra vacia
     * @return false-> si la pila contiene algun elemento
     */
    bool empty() const;

};


#endif // _MAXQUEUE_

