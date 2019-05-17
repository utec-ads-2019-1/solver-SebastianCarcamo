#ifndef MULTIPLY_H
#define MULTIPLY_H

#include "operation.h"

class Multiply : public Operation {
    public:
    	Multiply(Operation* left, Operation* right) {
    		this->childs[0] = left;
    		this->childs[1] = right;
    	}

        float operate() {
        	return childs[0]->operate() * childs[1]->operate();
        }
};

#endif
