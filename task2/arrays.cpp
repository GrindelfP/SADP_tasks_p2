//
// SADP_part2_task2 exercises with arrays
//

#include "arrays.hpp"

void arrayProcessing() {
    int a[5]{1,2,3,4,5};
    for(int i : a) std::cout<< i << ' ';
    std::cout<<std::endl;

    for (int *p = a; p-a<5; ++p) std::cout << *p << ' ';
    std::cout << std::endl;
}

void arrayRotation(int array[], int arrayLength, bool clockwise) {
    int x;
    if (clockwise) {
        x = array[0];
        for (int i = 1; i < arrayLength; ++i) array[i - 1] = array[i];
        array[arrayLength - 1] = x;
    } else {
        x = array[arrayLength - 1];
        for (int i = arrayLength - 1; i > 0; --i) array[i] = array[i - 1];
        array[0] = x;
    }
}

void arrayOutput(int array[], int arrayLength) {
    std::cout << '[';
    int i;
    for (i = 0; i < arrayLength - 1; ++i) {
        std::cout << array[i] << ", ";
    }
    std::cout << array[i] << ']' << std::endl;
}




