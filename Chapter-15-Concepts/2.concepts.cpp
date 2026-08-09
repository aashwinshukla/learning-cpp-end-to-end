// there are built-in concepts in the C++ library
// but if required you can create your own custom concepts as well
// concepts require C++20 — compile with: g++ -std=c++20 file.cpp -o file

#include <iostream>
#include <concepts>
using namespace std;


// syntax 1: requires clause after template parameter
template <typename T>
requires integral<T>
T add_1(T a, T b){
    return a + b;
}

// syntax 2: concept directly in the template parameter list
template <integral T>
T add_2(T a, T b){
    return a + b;
}

// syntax 3: trailing requires clause after the parameter list
template <typename T>
T add_3(T a, T b) requires integral<T> {
    return a + b;
}

// syntax 4: auto with concept (abbreviated function template — C++20)
auto add_4(integral auto a, integral auto b){
    return a + b;
}

// all four do the same thing — only integral types (int, char, short, long etc.) are allowed
// passing a double or float will cause a compile error: constraint not satisfied


int main(){

    // char is integral — works fine
    char a_0 {10};
    char a_1 {20};
    auto result_a = add_1(a_0, a_1);
    cout << "result_a (char)  : " << static_cast<int>(result_a) << endl;   // 30

    // int is integral — works fine
    int b_0 {11};
    int b_1 {12};
    auto result_b = add_2(b_0, b_1);
    cout << "result_b (int)   : " << result_b << endl;   // 23

    // long is integral — works fine
    long d_0 {100};
    long d_1 {200};
    auto result_d = add_3(d_0, d_1);
    cout << "result_d (long)  : " << result_d << endl;   // 300

    // abbreviated syntax
    auto result_e = add_4(5, 7);
    cout << "result_e (auto)  : " << result_e << endl;   // 12

    // double is NOT integral — uncomment to see the error
    // double c_0 {11.1};
    // double c_1 {12.4};
    // auto result_c = add_1(c_0, c_1);   // ERROR: constraint not satisfied

    return 0;
}
