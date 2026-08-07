// do while loop syntax:
// do{ code }while(condition);

#include <iostream>
using namespace std;

int main(){

    const unsigned int COUNT {10};
    unsigned int i {0};

    do{
        cout << "I love C++" << endl;
        ++i;
    }while(i < COUNT);

    // the order is a little different compared to while:
    // runs code first => then checks condition => repeats if true
    // once condition is false it stops

    // KEY DIFFERENCE from while loop:
    // even if the condition is never true, do-while runs at least once

    unsigned int j {11};

    do{
        cout << "this runs once even though j > COUNT" << endl;
        ++j;
    }while(j < COUNT);

    // j = 11, COUNT = 10 so condition is false from the start
    // in a regular while loop this would never run
    // in do-while it runs once, then checks the condition and stops

    // output: "this runs once even though j > COUNT"

    return 0;
}
