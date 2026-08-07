// array bounds — what happens when you go out of range

#include <iostream>

int main(){

    int numbers[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // valid indices are 0 to 9

    // reading beyond bounds: reads garbage value or crashes the program
    std::cout << "numbers[12] : " << numbers[12] << std::endl;

    // writing beyond bounds: the compiler allows it but it's dangerous
    // index 12 is memory you don't own
    // other parts of your program or the OS may use that memory
    // you can corrupt data or cause unpredictable behavior
    numbers[12] = 1000;
    std::cout << "numbers[12] : " << numbers[12] << std::endl;

    // IMPORTANT: C++ does not check array bounds automatically
    // it's your responsibility to stay within the valid range
    // out of bounds access is undefined behavior

    return 0;
}
