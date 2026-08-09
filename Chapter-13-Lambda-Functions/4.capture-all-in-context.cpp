// instead of listing every variable in the capture list,
// you can capture everything in the surrounding scope at once

#include <iostream>
using namespace std;

int main(){

    int c {42};
    int x {10};
    int y {20};

    // [=] captures ALL local variables by VALUE
    auto func_by_value = [=](){
        cout << "c (copy) : " << c << endl;
        cout << "x (copy) : " << x << endl;
    };

    for(size_t i{}; i < 5; ++i){
        cout << "inner c : " << c << endl;
        func_by_value();   // always prints original value of c — it's a copy
        ++c;
    }

    // reset c for the next example
    c = 42;

    // [&] captures ALL local variables by REFERENCE
    auto func_by_ref = [&](){
        cout << "c (ref)  : " << c << endl;
        cout << "x (ref)  : " << x << endl;
    };

    for(size_t i{}; i < 5; ++i){
        cout << "inner c : " << c << endl;
        func_by_ref();   // c inside the lambda changes with the outer c
        ++c;
    }

    // summary:
    // [=]  = capture all by value  (copies, originals unaffected)
    // [&]  = capture all by reference (aliases, both change together)
    // [x]  = capture only x by value
    // [&x] = capture only x by reference
    // mixing is allowed: [=, &x] captures all by value except x by reference

    return 0;
}
