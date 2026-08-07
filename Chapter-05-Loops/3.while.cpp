// while loop syntax:
// while(condition){ code }

#include <iostream>
using namespace std;

int main(){

    const unsigned int COUNT {10};
    unsigned int i {0};

    while(i < COUNT){
        cout << "I love C++" << endl;
        ++i;
    }

    // as you can see: just a single condition in the parentheses and the increment inside the body
    // it checks condition => runs code => increments => repeats
    // breaks once the condition is false

    // we can also use while(true) for an intentional infinite loop
    // and break out of it manually with a break statement
    while(true){
        cout << "runs once then breaks" << endl;
        break;
    }
    // without break this would run forever

    return 0;
}
