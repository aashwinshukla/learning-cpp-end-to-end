#include <iostream>
// we first include libraries that will halp us write the code and help program to understand specific keywords (function/commands)
// which we will learn as we go.

int main(){
    // this is the main function where, you can say our body of the code resides.
    std::cout << "hello world!" << std::endl;
    // the above line of code prints out hello world! on the terminal.
    // to compile the code write g++ first-program.cpp -o first-program 
    // to run it , use the compiled .exe file ie, .\first-program.exe

    // the std::endl creates a new line character, in other words if we write 
    std::cout <<"Number 1";
    std::cout << "Number 2";
    // they will be printed on the same line
    // to avoid that add <<std::endl
    // and now number 2 will be on new line
    
    // std::cout"" helps in printing things out 
    // we are able to use it because of <isotream> library
    
    return 0;

}