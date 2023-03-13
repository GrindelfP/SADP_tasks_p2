//
// SADP_part2_task2 main file for the exercises.
//

#ifndef SADP_TASKS_P2_MAIN_TASK2_HPP
#define SADP_TASKS_P2_MAIN_TASK2_HPP

#include "pointer.hpp"
#include "arrays.hpp"

void mainTask2() {
/*    pointerProcedures();
    pointerPositioning();

    int a = 3, b = 4;
    swap(&a, &b);

    std::cout << a << ' ' << b << std::endl;*/
    const int arrayLength = 5;
    int array[arrayLength] = {3, 4, 5, 6, 7};
    arrayOutput(array, arrayLength);
    arrayRotation(array, arrayLength, false);
    arrayOutput(array, arrayLength);
}

#endif //SADP_TASKS_P2_MAIN_TASK2_HPP
