#ifndef CONSTANT_H
#define CONSTANT_H

#include <string>
#include <stdlib.h>
#include "operation.h"

using namespace std;

class Constant: public Operation {
    public:
    	Constant(string equation) {
    		this->equation = equation;
    	}

        float operate() {
        	return atof(equation.c_str());
        }
};

#endif
