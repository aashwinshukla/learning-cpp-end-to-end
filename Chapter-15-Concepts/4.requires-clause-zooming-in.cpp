// the requires expression can contain four kinds of requirements

#include <iostream>
#include <concepts>
using namespace std;

// 1. Simple requirement — only checks if the expression is VALID SYNTAX
//    does NOT check if the result is true
template <typename T>
concept HasMultiply = requires(T a, T b){
    a * b;   // just checks that * is a valid operation for T
};


// 2. Nested requirement — checks if a condition is actually TRUE at compile time
//    uses 'requires' inside the requires block
template <typename T>
concept TinyType = requires(T t){
    requires sizeof(T) <= 4;   // T's size must actually be <= 4 bytes
};
// sizeof(T) <= 4 alone (without the inner requires) would be a simple requirement
// that only checks syntax — the inner requires makes it evaluate the boolean result


// 3. Compound requirement — checks syntax, optionally checks noexcept, and optionally checks return type
template <typename T>
concept Addable = requires(T a, T b){
    { a + b } -> std::convertible_to<int>;
    // checks: a + b is valid syntax AND result is convertible to int
    // noexcept is optional: { a + b } noexcept -> std::convertible_to<int>
    // that would also require the operation to not throw exceptions
};


// 4. Type requirement — checks that a certain nested type exists inside T
template <typename T>
concept HasValueType = requires{
    typename T::value_type;   // T must have a nested type called value_type
    // eg. std::vector<int> has value_type = int, so it satisfies this
};


// quick demo
template <typename T>
requires TinyType<T>
void show_size(T val){
    cout << "size : " << sizeof(T) << " bytes, value : " << val << endl;
}

int main(){
    show_size(42);      // int = 4 bytes, satisfies TinyType
    show_size('A');     // char = 1 byte, satisfies TinyType
    // show_size(3.14); // double = 8 bytes — would fail TinyType constraint

    return 0;
}
