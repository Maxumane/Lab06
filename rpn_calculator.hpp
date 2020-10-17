//
// Created by Max on 2020-10-16.
//

#ifndef LAB06_RPN_CALCULATOR_HPP
#define LAB06_RPN_CALCULATOR_HPP


#include <stack>
#include <string>
#include <sstream>
#include "operation.hpp"


using namespace std;

class rpn_calculator {
private:
    std::stack<int> calcStack;

    operation* operation_type(char c);

    void perform(operation *currentOp);
//        int n = calcStack.top();
//        calcStack.pop();
//        int j = calcStack.top();
//        calcStack.pop();
//        int final = currentOp->perform(n, j);
//        calcStack.push(final);
//    }

public:
    int process_form(string formula);
};

#endif //LAB06_RPN_CALCULATOR_HPP
