// concepts can be used with auto to constrain variables and function parameters
// this is called the abbreviated function template syntax (C++20)

#include <iostream>
#include <concepts>
using namespace std;


// regular auto — accepts any type
auto add_any(auto a, auto b){
    return a + b;
}

// constrained auto — only accepts integral types
auto add_integral(integral auto a, integral auto b){
    return a + b;
}

// constrained auto — only accepts floating point types
auto add_float(floating_point auto a, floating_point auto b){
    return a + b;
}


// auto variables can also be constrained
// integral auto x = 42;   — x must be an integral type, deduced as int
// floating_point auto y = 3.14;  — y must be floating point, deduced as double


int main(){

    // any type works
    cout << add_any(1, 2)       << endl;   // 3
    cout << add_any(1.5, 2.5)   << endl;   // 4.0
    cout << add_any(1, 2.5)     << endl;   // 3.5 — a is int, b is double (each deduced separately)

    // only integral
    cout << add_integral(3, 4)  << endl;   // 7
    // add_integral(1.5, 2.5) would fail — double is not integral

    // only floating point
    cout << add_float(1.1, 2.2) << endl;   // 3.3
    // add_float(1, 2) would fail — int is not floating point

    // constrained auto variables
    integral auto x {42};
    cout << "x : " << x << endl;   // 42

    floating_point auto y {3.14};
    cout << "y : " << y << endl;   // 3.14

    return 0;
}

// summary:
// auto alone     = no constraint, any type
// concept auto   = constrained, only matching types allowed
// shorter and cleaner than writing full template syntax for simple cases
