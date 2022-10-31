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

struct element{
    int value;
    int max_value;
};

ostream & operator <<(ostream & p, const element & numero){

    p<<numero.value<<","<<numero.max_value;

    return p;

}
class MaxCola{
    private:
        stack<element> datos;

    public:

    element front() const;
        
    void push (int a);

    void pop ();

    int size();

    bool empty() const;

};


#endif // _MAXQUEUE_

