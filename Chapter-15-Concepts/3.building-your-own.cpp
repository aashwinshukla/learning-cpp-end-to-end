// building your own concepts
// syntax: template <typename T> concept Name = constraint;

#include <iostream>
#include <concepts>
using namespace std;

// 1. wrapping a standard type trait into your own concept name
template <typename T>
concept MyIntegral = std::is_integral_v<T>;
// std::is_integral_v<T> is true for int, char, short, long etc.
// note: it's is_integral_v not is_integral-v (underscore not dash)

// 2. concept using a requires expression — checks if an operation is valid for T
template <typename T>
concept Multipliable = requires(T a, T b){
    a * b;   // T must support the * operator
};

// 3. concept checking multiple operations
template <typename T>
concept Incrementable = requires(T a){
    a += 1;
    ++a;
    a++;
    // T must support all three increment forms
};


// using your custom concepts
template <typename T>
requires MyIntegral<T>
T add(T a, T b){
    return a + b;
}

template <typename T>
requires Multipliable<T>
T multiply(T a, T b){
    return a * b;
}

int main(){
    cout << add(3, 4)      << endl;   // 7  — int satisfies MyIntegral
    cout << multiply(3, 4) << endl;   // 12 — int satisfies Multipliable
    cout << multiply(2.5, 4.0) << endl; // 10 — double also supports *

    // add(2.5, 4.0) would fail — double doesn't satisfy MyIntegral

    return 0;
}
