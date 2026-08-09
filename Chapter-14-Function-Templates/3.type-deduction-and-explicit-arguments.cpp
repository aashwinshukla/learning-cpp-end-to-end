#include <iostream>
#include <string>
using namespace std;

template <typename T> T maximum(T a, T b);

int main(){
    int a {10};
    int b {20};

    double c {34.4};
    double d {23.4};

    string e {"Hello"};
    string f {"World"};

    // type deduction — compiler figures out T from the arguments automatically
    cout << "max int    : " << maximum(a, b) << endl;   // int deduced
    cout << "max double : " << maximum(c, d) << endl;   // double deduced
    cout << "max string : " << maximum(e, f) << endl;   // string deduced

    // explicit type argument — you tell the compiler which type to use
    cout << "explicit double : " << maximum<double>(c, d) << endl;

    // works even if arguments are different types — int gets converted to double
    cout << "int + double    : " << maximum<double>(a, c) << endl;

    // ERROR: can't convert string to double — uncomment to see the error
    // maximum<double>(a, e);

    return 0;
}

template <typename T> T maximum(T a, T b){
    return (a > b) ? a : b;
}

// summary:
// type deduction   = compiler infers T from what you pass — most common usage
// explicit argument = you write maximum<double>(...) to force a specific type
// useful when arguments are mixed types and you need to control the conversion
