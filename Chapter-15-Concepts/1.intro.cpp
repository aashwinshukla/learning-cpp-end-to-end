// concepts = a mechanism to place constraints on template type parameters
// instead of accepting any type, you restrict what types are allowed
// if a type doesn't meet the constraint, you get a clear compile error

// the old way — static_assert (works but error messages are hard to read)
#include <iostream>
#include <type_traits>

template <typename T>
void print_number(T n){
    static_assert(std::is_integral<T>::value, "Must pass in an integral argument");
    std::cout << "n : " << n << std::endl;
}

// concepts (C++20) do the same thing but with cleaner syntax and better error messages
// require C++20: compile with g++ -std=c++20
