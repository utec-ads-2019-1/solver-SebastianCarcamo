#ifndef FACTORY_H
#define FACTORY_H

#include <string>
#include <iostream>

using namespace std;

#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "divide.h"
#include "power.h"
#include "constant.h"

//TEST
// cout << "left: " << equation.substr(0, position) << endl;
// cout << "right: " << equation.substr(position + 1, equation.length() - 1) << endl;

class Factory {
    public:
        static Operation* buildFromEquation(string equation) {
			int position = equation.find("+");
			if (position != string::npos) {

				Operation* left = buildFromEquation(equation.substr(0, position));
				Operation* right = buildFromEquation(equation.substr(position + 1, equation.length() - 1)); 
				return new Plus(left, right);
			}

			position = equation.find("-");

			if (position != string::npos) {
				
				Operation* left = buildFromEquation(equation.substr(0, position)); 
				Operation* right = buildFromEquation(equation.substr(position + 1, equation.length() - 1));
				return new Minus(left, right);
			}

			position = equation.find("*");

			if (position != string::npos) {
				Operation* left = buildFromEquation(equation.substr(0, position));
				Operation* right = buildFromEquation(equation.substr(position + 1, equation.length() - 1)); 

				return new Multiply(left, right);
			}

			position = equation.find("/");

			if (position != string::npos) {	
				Operation* left = buildFromEquation(equation.substr(0, position));
				Operation* right = buildFromEquation(equation.substr(position + 1, equation.length() - 1));
				return new Divide(left, right);
			}

			position = equation.find("^");

			if (position != string::npos) {			
				Operation* left = buildFromEquation(equation.substr(0, position));
				Operation* right = buildFromEquation(equation.substr(position + 1, equation.length() - 1));
				return new Power(left, right);
			}

			return new Constant(equation);
		}
};

#endif