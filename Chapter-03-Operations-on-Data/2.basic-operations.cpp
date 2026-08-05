#include <iostream>
using namespace std;

int main(){

    int number1 {20};
    int number2 {4};

    // Addition
    int sum { number1 + number2 };
    cout << "the sum is: " << sum << endl;          // 24

    // Subtraction
    int difference { number1 - number2 };
    cout << "the difference is: " << difference << endl;   // 16

    // Multiply
    int product { number1 * number2 };
    cout << "the product is: " << product << endl;         // 80

    // Division
    int division { number1 / number2 };
    cout << "the quotient is: " << division << endl;       // 5

    // Modulus
    int modulus { number1 % number2 };
    cout << "the remainder is: " << modulus << endl;       // 0

    return 0;
}
