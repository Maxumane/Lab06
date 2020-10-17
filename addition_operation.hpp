//
// Created by Max on 2020-10-16.
//

#ifndef LAB06_ADDITION_OPERATION_HPP
#define LAB06_ADDITION_OPERATION_HPP

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation {
public:
    static const char ADDITION_CODE = '+';
    addition_operation() : abstract_operation(ADDITION_CODE) {
    };
    virtual int perform(int n, int j) {
        int result = n + j;
        return result;
    }

    virtual ~addition_operation() {};
};

#endif //LAB06_ADDITION_OPERATION_HPP
