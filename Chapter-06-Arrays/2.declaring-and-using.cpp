// declaring and using arrays

#include <iostream>
using namespace std;

int main(){

    int score[10];  // array storing 10 integers, indices 0 to 9

    // since we didn't assign any values, all elements hold garbage values
    // always initialize your arrays to avoid this

    // one of the best ways to assign values to an array
    for(size_t i{0}; i < 10; ++i){
        score[i] = i * 5;
    }

    // now print all 10 values
    for(size_t i{0}; i < 10; ++i){
        cout << "Score " << i+1 << ": " << score[i] << endl;
    }

    // indexing starts from 0
    // score[10] means the array has values at indices 0 to 9

    // we can also assign values upfront
    double grades[10] {10, 30, 56, 80, 90, 23, 45, 12};
    // the unassigned ones will automatically be 0

    // you can also omit the size — the compiler figures it out from the data
    double points[] {10, 30, 56, 80, 90};

    // const array — data can't be changed after declaration
    const int fixed[] {1, 2, 3, 4, 5};

    // you can also do operations on individual elements
    // eg: score[0] = score[1] + score[2];

    return 0;
}
