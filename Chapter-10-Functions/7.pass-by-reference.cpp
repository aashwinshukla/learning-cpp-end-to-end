// pass by reference = the function receives an alias for the original variable
// no dereferencing needed — changes directly affect the original

#include <iostream>
using namespace std;

void say_age(int& age);

int main(){
    int age {23};

    cout << "age before : " << age << endl;
    say_age(age);   // no & needed here when calling — just pass the variable
    cout << "age after  : " << age << endl;

    return 0;
}

void say_age(int& age){
    ++age;   // modifies the original directly through the reference
    cout << "hello! you are " << age << " years old" << endl;
}

// output:
// age before : 23
// hello! you are 24 years old
// age after  : 24   <-- original changed

// summary of all three:
// pass by value     — copy, original safe,    use when you don't need to modify original
// pass by pointer   — address, original changed, need * to dereference
// pass by reference — alias, original changed, cleanest syntax, no * needed
