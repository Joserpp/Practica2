/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxQueue
 * @author
 */
#include "maxqueue.h"

/**

**/
void MaxCola::push(int numero){
    element num;
    num.value = numero;
    num.max_value = numero;
    stack<element> datos2;

    while(!datos.empty()){
        
    }
}

void MaxCola::pop(){
    datos.pop();
}

element MaxCola::front() const{
    return datos.top();
}

int MaxCola::size(){
    return datos.size();
}

bool MaxCola::empty() const{
    return datos.empty();
}
