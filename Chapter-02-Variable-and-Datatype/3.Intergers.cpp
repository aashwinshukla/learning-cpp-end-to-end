// int is used to store integers 
// typically occupies 4 bytes in memory

// variable is a named piece of memory 
// above definition is all you need to know about a variable.

#include <iostream>
using namespace std;

int main(){

    int age {};
    // above we did not put a value in the variable.
    // if you leave it uninitialized like this it may hold a garbage value, so always initialize.

    // don't store fractional numbers in int because you will lose the decimal part of the data.

    int ans = 0;
    int a = 3;
    int b = 10;

    ans = b/a;
    cout << "Answer is: " << ans << endl;
    // output will be 3, the .33 is dropped because int can't store decimals.

    ans = a/b;
    cout << "Answer is: " << ans << endl;
    // output will be 0, the .3 is dropped because int can't store decimals.

    // imp: variable names should start with a letter, not a number. after that you can write anything.
    // variables are case sensitive.

    // general syntax:
    // typename variable_name {initializer_value};

    // VERY IMP: braced initializer {} will throw an error if you try to store a decimal like 2.9 in an int.
    // whereas functional initializer () will silently truncate it (2.9 becomes 2).
    // assignment notation = also silently truncates decimals.

    // we can use sizeof(int) to check the size of int, which will be 4 bytes.
    cout << "size of int: " << sizeof(int) << " bytes" << endl;

    return 0;
}
