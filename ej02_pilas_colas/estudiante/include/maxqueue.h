/**
 * @file maxqueue.h
 * @brief  Archivo de especificación del TDA MaxQueue
 * @author
 */
#ifndef _MAXQUEUE_
#define _MAXQUEUE_

#include <stack>

using namespace std;

struct element{
    int value;
    int max_value;
};


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

