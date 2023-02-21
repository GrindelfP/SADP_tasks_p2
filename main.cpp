//
// SADP_tasks_part2_main
//
#include <iostream>
#include "task1/complexNumber.hpp"

int main() {
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

    return 0;
}
