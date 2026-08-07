// for loop syntax:
// for(initializer; condition; increment){ code }

// starting with a simple example

#include <iostream>
using namespace std;

int main(){

    for(unsigned int i{}; i < 10; ++i){
        cout << "I love C++" << endl;
    }

    // above code says:
    // start i at 0
    // keep repeating the code until i reaches 10 (condition is i < 10)
    // ++i keeps incrementing so it doesn't get stuck in an endless loop

    // eg. if i = 1 and condition is i < 10 but we didn't write ++i
    // i = 1 will make the condition always true
    // therefore infinite loop, which we don't want.

    // using a named constant for the limit instead of hardcoding it
    const size_t LIMIT {10};
    for(size_t i{0}; i < LIMIT; ++i){
        cout << i + 1 << endl;
    }
    cout << "Loop done!" << endl;

    // this will print 1 to 10
    // i was declared inside the for loop's parentheses
    // so i only exists inside the loop — using it outside will give an error
    // if declared outside, the loop can be written as: i; i < 10; ++i (no type needed again)

    return 0;
}
