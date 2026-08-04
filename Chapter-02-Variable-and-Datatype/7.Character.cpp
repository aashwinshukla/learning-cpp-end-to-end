// char holds a single character
// size is 1 byte

// char character {'a'};
// above is the format

// learn ASCII to understand how characters are stored internally.

#include <iostream>

int main(){

    char value = 65;
    std::cout << "value : " << value << std::endl;
    // output will be 'A' because 65 is the ASCII code for capital A.

    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;
    // static_cast<int> tells the compiler to treat the char as an int,
    // so instead of printing 'A' it prints the raw number 65.

    return 0;
}
