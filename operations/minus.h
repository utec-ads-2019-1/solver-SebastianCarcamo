#ifndef MINUS_H
#define MINUS_H

#include "operation.h"

class Minus : public Operation {
    public:
    	Minus(Operation* left, Operation* right) {
    		this->childs[0] = left;
    		this->childs[1] = right;
    	}

        float operate() {
        	return childs[0]->operate() - childs[1]->operate();
        }
};

#endif
