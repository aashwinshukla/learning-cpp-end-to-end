// increment and decrement

#include <iostream>
using namespace std;

int main(){

    int value {5};

    // longhand way to increment and decrement
    value = value + 1;
    cout << "value is: " << value << endl;   // 6

    value = value - 1;
    cout << "value is: " << value << endl;   // 5

    // shorthand: postfix increment/decrement
    // value++ or value--
    // the output is printed FIRST using the current value, THEN it increments
    cout << "it will stay : " << value++ << endl;   // prints 5
    cout << "now it will be: " << value << endl;    // prints 6
    // this is postfix — increment happens after the expression is evaluated

    // shorthand: prefix increment/decrement
    // ++value or --value
    // it increments FIRST, then the output is printed with the new value
    cout << "value: " << ++value << endl;   // prints 7
    // this is prefix — increment happens before the expression is evaluated

    return 0;
}
