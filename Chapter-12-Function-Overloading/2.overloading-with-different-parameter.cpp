#include <iostream>
using namespace std;

// 1. overloading by NUMBER of parameters
// same name, different number of arguments

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}


// 2. overloading by TYPE of parameters
// same name, same number of arguments, different types

double add(double a, double b){
    return a + b;
}


// 3. overloading by ORDER of parameters
// same name, same types but in a different order

void display(int a, double b){
    cout << "int first    : " << a << ", " << b << endl;
}

void display(double a, int b){
    cout << "double first : " << a << ", " << b << endl;
}


int main(){

    // compiler picks add(int, int)
    cout << add(3, 4)       << endl;   // 7

    // compiler picks add(int, int, int)
    cout << add(3, 4, 5)    << endl;   // 12

    // compiler picks add(double, double)
    cout << add(3.1, 4.2)   << endl;   // 7.3

    // compiler picks display(int, double)
    display(10, 3.5);                  // int first    : 10, 3.5

    // compiler picks display(double, int)
    display(3.5, 10);                  // double first : 3.5, 10

    return 0;
}
