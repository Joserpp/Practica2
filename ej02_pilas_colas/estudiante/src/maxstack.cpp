/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author
 */

#include "maxstack.h"
#include <iostream>
void MaxPila::push(int numero){
    element nuevo_num;
    nuevo_num.value=numero;

    if(!datos.empty() && datos.front().max_value > numero)
        nuevo_num.max_value=datos.front().max_value;

    else
        nuevo_num.max_value=numero;

    //una vez que ya tenemos hechas las comprobaciones de 
    //que sea el mayor numero de los dos creamos un vector
    //auxiliar y lo rellenamos

    queue<element> datos2;
    
    //Introducimos el dato que hemos creado con 
    //los valores pasados como argumento
    
    datos2.push(nuevo_num);

    while(!datos.empty()){
        datos2.push(datos.front());
        datos.pop();

    }

    datos=datos2;
    //

}

void MaxPila::pop(){

    datos.pop();

}

int MaxPila::size(){
    return datos.size();
}

element MaxPila::top(){
    return datos.front();
}
bool MaxPila::empty() const{
    return datos.empty();
}
