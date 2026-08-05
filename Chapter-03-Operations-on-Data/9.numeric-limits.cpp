#include <limits>
#include <iostream>

using namespace std;

int main(){

    // std::numeric_limits<T> is a template — replace T with any data type you want to check.

    // ::min() = smallest value that type can hold
    // for integers it gives the most negative number
    // for floating point types it gives the smallest POSITIVE number above zero (not negative!)
    cout << "int min:         " << numeric_limits<int>::min()         << endl;  // -2147483648
    cout << "float min:       " << numeric_limits<float>::min()       << endl;  // 1.17549e-38 (smallest positive float)
    cout << "double min:      " << numeric_limits<double>::min()      << endl;  // 2.22507e-308

    // ::max() = largest positive value that type can hold
    cout << "int max:         " << numeric_limits<int>::max()         << endl;  // 2147483647
    cout << "float max:       " << numeric_limits<float>::max()       << endl;  // 3.40282e+38
    cout << "double max:      " << numeric_limits<double>::max()      << endl;  // 1.79769e+308

    // ::lowest() = most negative value that type can hold
    // for integers this is the same as min()
    // for floats/doubles this gives the actual most negative number (unlike min())
    cout << "int lowest:      " << numeric_limits<int>::lowest()      << endl;  // -2147483648
    cout << "float lowest:    " << numeric_limits<float>::lowest()    << endl;  // -3.40282e+38
    cout << "double lowest:   " << numeric_limits<double>::lowest()   << endl;  // -1.79769e+308

    // KEY DIFFERENCE: min() vs lowest() for floats
    // min()    = smallest positive value (above zero)
    // lowest() = most negative value
    // for integers both are the same, for decimals they are different.

    return 0;
}
