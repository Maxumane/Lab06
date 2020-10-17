//
// Created by Max on 2020-10-16.
//

#ifndef LAB06_SUBTRACTION_OPERATION_HPP
#define LAB06_SUBTRACTION_OPERATION_HPP
#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation {
public:
    static const char SUBTRACTION_CODE = '-';
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE) {
    };
    virtual int perform(int n, int j) {
        int result = n - j;
        return result;
    }

    virtual ~subtraction_operation() {};
};
#endif //LAB06_SUBTRACTION_OPERATION_HPP
