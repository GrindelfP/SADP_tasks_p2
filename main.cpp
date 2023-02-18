//
// SADP_tasks_part2_task1
//
#include <iostream>
#include "complexNumber.hpp"

int main() {
    ComplexNumber cn(4, 5);
    std::cout << cn + cn << std::endl;
    std::cout << cn - ComplexNumber(2, 1) << std::endl;
    std::cout << cn * cn << std::endl;
    std::cout << cn / ComplexNumber(2, 5) << std::endl;
    std::cout << -cn << std::endl;
    std::cout << (cn == ComplexNumber(5, 5)) << std::endl;
    std::cout << cn.abs() << std::endl;
    std::cout << cn.getReal() << std::endl;
    std::cout << cn.getImaginary() << std::endl;
    std::cout << cn.argument() << std::endl;
    std::cout << cn.conjugate() << std::endl;
    std::cout << ComplexNumber(0, 0).argument() << std::endl;
    std::cout << ComplexNumber(1, 0).argument() << std::endl;
    std::cout << ComplexNumber(-1, 1).argument() << std::endl;
    std::cout << ComplexNumber(-1, 0).argument() << std::endl;
    std::cout << ComplexNumber(-1, -1).argument() << std::endl;
    std::cout << ComplexNumber(0, 1).argument() << std::endl;
    std::cout << ComplexNumber(0, -1).argument() << std::endl;

    return 0;
}
