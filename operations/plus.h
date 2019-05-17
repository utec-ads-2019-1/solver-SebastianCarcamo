#ifndef PLUS_H
#define PLUS_H

#include "operation.h"

class Plus : public Operation {
    public:
    	Plus(Operation* left, Operation* right) {
    		this->childs[0] = left;
    		this->childs[1] = right;
    	}

        float operate() {
        	return childs[0]->operate() + childs[1]->operate();
        }
};

#endif
