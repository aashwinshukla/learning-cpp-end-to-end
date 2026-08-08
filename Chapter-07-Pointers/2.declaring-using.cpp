// declaring pointers

#include <iostream>
using namespace std;

int main(){

    int* p_number{};          // can only store an address of a variable of type int
    double* p_fractional{};   // can only store an address of a variable of type double

    // explicitly initializing to nullptr (best practice)
    int* p_number1 {nullptr};
    double* p_fractional1 {nullptr};

    // all pointers are the same size regardless of the type they point to
    // (typically 4 bytes on 32-bit, 8 bytes on 64-bit systems)

    // the * can be placed anywhere between the type and the variable name
    // int* p;  int *p;  int * p;  — all mean the same thing

    // address-of operator (&) — gets the address of a variable
    int int_var {43};
    int* p_int {&int_var};

    cout << "p_int (address in memory) : " << p_int << endl;

    // you can reassign a pointer to a different address — the data type must match
    int int_var2 {99};
    p_int = &int_var2;
    cout << "p_int (new address) : " << p_int << endl;

    // dereferencing a pointer — gets the value at the address the pointer holds
    int num_data {50};
    int* num {&num_data};

    cout << "address : " << num  << endl;   // prints the address
    cout << "value   : " << *num << endl;   // prints 50

    return 0;
}
