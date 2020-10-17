//
// Created by Max on 2020-10-16.
//

#ifndef LAB06_MULTIPLICATION_OPERATION_HPP
#define LAB06_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"

class multiplication_operation : public abstract_operation {
public:
    static const char MULTIPLICATION_CODE = '*';
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) {
    };
    virtual int perform(int n, int j) {
        int result = n * j;
        return result;
    }

    virtual ~multiplication_operation() {};
};

#endif //LAB06_MULTIPLICATION_OPERATION_HPP
