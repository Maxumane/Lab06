//
// Created by Max on 2020-10-16.
//

#ifndef LAB06_ABSTRACT_OPERATION_HPP
#define LAB06_ABSTRACT_OPERATION_HPP

#include "operation.hpp"

class abstract_operation : public operation {
public:
    abstract_operation(char operatorChar) {
        operation_type = operatorChar;
    }

    abstract_operation() {};
    char get_code() override {
      return operation_type;
    };
    virtual ~abstract_operation() {};
private:
    char operation_type;
};
#endif //LAB06_ABSTRACT_OPERATION_HPP
