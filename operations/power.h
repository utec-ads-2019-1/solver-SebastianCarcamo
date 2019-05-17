#ifndef POWER_H
#define POWER_H

#include "operation.h"
#include <math.h>

class Power : public Operation {
    public:
    	Power(Operation* left, Operation* right) {
    		this->childs[0] = left;
    		this->childs[1] = right;
    	}

        float operate() {
        	return pow(childs[0]->operate(),childs[1]->operate());
        }
};

#endif
