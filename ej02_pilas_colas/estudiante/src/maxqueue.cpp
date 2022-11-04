/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxQueue
 * @author
 */
#include "maxqueue.h"
#include <iostream>
/**

 */
void MaxCola::push(int numero){
    element num;
    num.value = numero;
    num.max_value = numero;
    stack<element> datos2;

    while(!datos.empty()){
        datos2.push(datos.top());
        datos.pop();
    }

    datos2.push(num);

    while(!datos2.empty()){
        datos.push(datos2.top());
        if(datos.top().max_value<num.max_value)
            datos.top().max_value=num.max_value;
        datos2.pop();
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
