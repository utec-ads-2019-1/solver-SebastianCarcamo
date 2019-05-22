#ifndef CONSTANT_H
#define CONSTANT_H

#include <string>
#include <stdlib.h>
#include "operation.h"
#include <map>
#include <iostream>

using namespace std;

extern map<string,float> mapa;


class Constant: public Operation {
    public:
    	Constant(string equation) {
    		this->equation = equation;
    	}

    	float searchMap(map<string,float> &m,string a){
			auto it = m.find(a);
			string num;

			if(it!=m.end()){
				return it->second;
			}
			getline(cin, num);
			m.insert({a,atof(num.c_str())});
			return atof(num.c_str());
		}

        float operate() {
        	if(equation.length()==1 && ((equation.c_str()[0]>64 && equation.c_str()[0]<91) || (equation.c_str()[0]>96 && equation.c_str()[0]<123))){
        		return searchMap(mapa,equation);
        	}
        	return atof(equation.c_str());
        	

        }
};

#endif
