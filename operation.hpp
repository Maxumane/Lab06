//
// Created by Max on 2020-10-16.
//

#ifndef LAB06_OPERATION_HPP
#define LAB06_OPERATION_HPP
class operation {
public:
    virtual char get_code() = 0;
    virtual int perform(int n, int j) = 0;
    virtual ~operation() {};
};
#endif //LAB06_OPERATION_HPP
