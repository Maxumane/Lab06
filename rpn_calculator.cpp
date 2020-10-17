//
// Created by Max on 2020-10-16.
//

#include "rpn_calculator.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "division_operation.hpp"
#include "multiplication_operation.hpp"

int rpn_calculator :: process_form(string formula) {
    istringstream iss (formula);
    istringstream iss2;
    operation * newOp;
    int n;
    string operand;
    while (iss >> operand) {
        iss2.clear();
        iss2.str(operand);
        if (iss2 >> n) {
            calcStack.push(n);
        } else {
            newOp = operation_type(operand[0]);
            perform(newOp);
            delete newOp;
        }
    }
    iss.clear();
    return calcStack.top();
}

void rpn_calculator :: perform(operation *currentOp) {
    int n = calcStack.top();
    calcStack.pop();
    int j = calcStack.top();
    calcStack.pop();
    int final = currentOp->perform(n, j);
    calcStack.push(final);
}

operation* rpn_calculator :: operation_type(char c) {
    operation *opType;
    switch (c) {
        case '+':
            opType = new addition_operation;
            break;
        case '-':
            opType = new subtraction_operation;
            break;
        case '/':
            opType = new division_operation;
            break;
        case '*':
            opType = new multiplication_operation;
            break;
        default: opType = nullptr;
        break;
    }
    return opType;
};