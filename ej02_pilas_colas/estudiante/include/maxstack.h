/**
 * @file maxstack.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author
 */
#ifndef _MAXSTACK_
#define _MAXSTACK_

#include <queue>
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
 * @brief Un objeto de tipo MaxStack nos permite almacenar valores como si fuera una
 * pila, pero internamente tiene una estructura que se basa en una cola
 *
 * Su único atributo es una cola en la que se almacenan los valores.
 *
 * Para poder unsar la clase se debe añadir la cabecera: #include <maxstack.h>.
 **/
class MaxPila{
    private:
        queue<element> datos;

    public:
        
        /**
         * @brief pone en la última posición de la pila una instancia de tipo element
         * @param a es el valor que se va almacenar en la última posición de la pila
         * pudiendo ser el máximo
         **/
        void push (int a);

        /**
         * @brief Elimina el último elemento introducido en la pila
         **/
        void pop ();

        /**
         * @brief Permite saber el tamaño de la pila (número total de elementos) 
         * @return devulve el tamaño de la pila en el momento que llamamos a la función
         **/
        int size();

        /**
         * @brief Permite conocer el último elemento almacenado de la pila
         * @return una instancia de tipo elemento con los valores.
         **/
        element top();

        /**
         * @brief Nos dice con un bool si la pila está vacía o no.
         * @return true si la pila está vacía.
         * @return false si la pila no está vacía.
         **/
        bool empty() const;
};


#endif // _MAXSTACK_