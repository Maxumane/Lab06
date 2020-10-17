//
// Created by Max on 2020-10-16.
//

#ifndef LAB06_DIVISION_OPERATION_HPP
#define LAB06_DIVISION_OPERATION_HPP

#include "abstract_operation.hpp"

class division_operation : public abstract_operation {
public:
    static const char DIVISION_CODE = '/';
    division_operation() : abstract_operation(DIVISION_CODE) {
    };
    virtual int perform(int n, int j) {
        int result = n / j;
        return result;
    }

    virtual ~division_operation() {};
};
#endif //LAB06_DIVISION_OPERATION_HPP
