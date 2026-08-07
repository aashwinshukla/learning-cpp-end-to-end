// getting the size of an array

#include <iostream>
#include <iterator>  // needed for std::size()
using namespace std;

int main(){

    int scores[] {10, 20, 30, 40, 50};

    // method 1: use std::size() — simplest way
    cout << "size of array: " << size(scores) << endl;

    for(size_t i{0}; i < size(scores); ++i){
        cout << "scores[" << i << "] : " << scores[i] << endl;
    }

    // method 2: sizeof() trick
    // sizeof(array) gives total bytes, sizeof(array[0]) gives bytes of one element
    // dividing gives the number of elements
    size_t count {sizeof(scores) / sizeof(scores[0])};

    for(size_t i{0}; i < count; ++i){
        cout << "scores[" << i << "] : " << scores[i] << endl;
    }

    // both methods work, std::size() is cleaner and preferred in modern C++

    return 0;
}
