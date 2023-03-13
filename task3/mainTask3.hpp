//
// Created by gregory on 2/27/23.
//

#ifndef SADP_TASKS_P2_MAINTASK3_HPP
#define SADP_TASKS_P2_MAINTASK3_HPP

#include <iostream>
#include "complexNumber.hpp"

void task3Main() {
    ComplexNumber cn[4] {1, 2, ComplexNumber(2, 3)};

    std::cout << '[';
    for (ComplexNumber n : cn) {
        std::cout << n << ", ";
    }
    std::cout << ']' << std::endl;

    ComplexNumber *pComplexNumber = new ComplexNumber[3];
    pComplexNumber[1].getReal();
    delete[] pComplexNumber;

    ComplexNumber cn3(2, 3);
    ComplexNumber cn4(5, 8);
    std::cout << cn3 * cn4 << std::endl;
}

#endif //SADP_TASKS_P2_MAINTASK3_HPP
