#ifndef DIVIDE_H
#define DIVIDE_H

#include "operation.h"

class Divide : public Operation {
    public:
    	Divide(Operation* left, Operation* right) {
    		this->childs[0] = left;
    		this->childs[1] = right;
    	}

        float operate() {
        	return childs[0]->operate() / childs[1]->operate();
        }
};

#endif
