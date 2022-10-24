/**
 * @file maxstack.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author
 */
#ifndef _MAXSTACK_
#define _MAXSTACK_

#include <queue>

using namespace std;

struct element{
    int value;
    int max_value;
};


class MaxPila{
    private:
        queue<element> datos;

    public:
        
        void push (int a);

        void pop ();

        int size();

        element top();

        bool empty() const;
};


#endif // _MAXSTACK_