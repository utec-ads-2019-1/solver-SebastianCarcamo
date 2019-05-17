#ifndef OPERATION_H
#define OPERATION_H

#include <string>
#include <iostream>

using namespace std;

class Operation {
    protected:
        string equation;
        Operation* childs[2];
              
    public:
        inline string name() { return equation; }

        virtual float operate() = 0;
};

#endif