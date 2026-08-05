// math functions from <cmath>

#include <cmath>
#include <iostream>
using namespace std;

int main(){

    // floor() = rounds down to nearest whole number
    cout << floor(2.9) << endl;    // 2

    // ceil() = rounds up to nearest whole number
    cout << ceil(2.1) << endl;     // 3

    // round() = rounds to nearest whole number (0.5 rounds up)
    cout << round(2.5) << endl;    // 3
    cout << round(2.4) << endl;    // 2

    // abs() = absolute value (removes negative sign)
    cout << abs(-7) << endl;       // 7

    // pow() = power, pow(base, exponent)
    cout << pow(2, 8) << endl;     // 256

    // sqrt() = square root
    cout << sqrt(25) << endl;      // 5

    // exp() = e raised to the power of the given number
    cout << exp(1) << endl;        // 2.71828 (e^1)
    cout << exp(2) << endl;        // 7.38906 (e^2)

    // log() = natural log (base e)
    cout << log(exp(1)) << endl;   // 1

    // cos(), sin(), tan() = trig functions (input is in radians)
    cout << cos(0) << endl;        // 1
    cout << sin(0) << endl;        // 0
    cout << tan(0) << endl;        // 0

    return 0;
}
