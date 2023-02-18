//
// SADP_tasks_part2_task1
// Class ComplexNumber is dedicated to help perform math operations on complex numbers.
// Created by Grindelf P. the 17th of Feb, 2023.
//

#include "complexNumber.hpp"

// returns the argument of this complex number, declared in complexNumber.hpp
double ComplexNumber::argument() const {
    if (this->abs() == 0) return 0;
    if (real > 0) return atan(imaginary / real);
    if (real < 0) {
        if (imaginary >= 0) return M_PI + atan(imaginary / real);
        return -M_PI + atan(imaginary / real);
    }
    if (imaginary > 0) return M_PI_2;
    return -M_PI_2;
}
