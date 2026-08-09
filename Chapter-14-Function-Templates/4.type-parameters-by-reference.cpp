// passing template parameters by reference
// instead of copying the arguments, the function works directly on the originals
// useful for large objects like strings where copying is expensive

#include <iostream>
#include <string>
using namespace std;

template <typename T> const T& maximum(const T& a, const T& b);

int main(){

    double c {34.4};
    double d {23.4};

    // &a here would be an error — a is a parameter inside the function, not in scope here
    // we print &c instead to see the address of c in main
    cout << "Out - &c : " << &c << endl;

    double max1 = maximum(c, d);
    cout << "max : " << max1 << endl;   // 34.4

    return 0;
}

template <typename T> const T& maximum(const T& a, const T& b){
    cout << "In  - &a : " << &a << endl;
    // &a and &c from main will be the SAME address
    // that confirms no copy was made — a is a reference to c directly
    return (a > b) ? a : b;
}

// by value vs by reference with templates:
// template <typename T> T maximum(T a, T b)          — passes copies, safe but slower for big types
// template <typename T> const T& maximum(const T& a, const T& b) — passes references, no copy made

// these two versions CAN coexist as overloads
// if both are defined, the compiler picks the by-value version for small types like int
// and you can explicitly call either one
// but having both can cause ambiguity errors if the compiler can't decide which to use —
// so only define both if you have a clear reason to
