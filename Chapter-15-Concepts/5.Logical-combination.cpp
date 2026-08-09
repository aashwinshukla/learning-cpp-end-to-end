// concepts can be combined with && and || just like regular boolean expressions

#include <iostream>
#include <concepts>
using namespace std;

// individual concepts
template <typename T>
concept Integral = std::integral<T>;

template <typename T>
concept FloatingPoint = std::floating_point<T>;

template <typename T>
concept Incrementable = requires(T a){
    a += 1;
    ++a;
    a++;
};


// && — T must satisfy BOTH concepts
template <typename T>
requires Integral<T> && Incrementable<T>
T add_and_increment(T a, T b){
    ++a;
    return a + b;
}

// || — T must satisfy AT LEAST ONE concept
template <typename T>
requires Integral<T> || FloatingPoint<T>
T add(T a, T b){
    return a + b;
}

// you can also combine inline without defining separate concepts
template <typename T>
requires std::integral<T> || std::floating_point<T>
T multiply(T a, T b){
    return a * b;
}


int main(){

    // int satisfies both Integral and Incrementable
    cout << add_and_increment(3, 4)   << endl;   // 8  (3 incremented to 4, then + 4)

    // int satisfies Integral — passes || check
    cout << add(10, 20)               << endl;   // 30

    // double satisfies FloatingPoint — also passes || check
    cout << add(1.5, 2.5)             << endl;   // 4.0

    // int satisfies integral — passes inline || check
    cout << multiply(3, 4)            << endl;   // 12

    // string satisfies neither integral nor floating_point
    // multiply("a", "b") would give a compile error

    return 0;
}
