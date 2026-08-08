// declaring and using references

#include <iostream>
using namespace std;

int main(){

    int int_value {45};
    double double_value {33.65};

    int& reference_to_int_value_1 {int_value};   // initialized with braces
    int& reference_to_int_value_2 = int_value;    // initialized with assignment
    double& reference_to_double_value_1 {double_value};

    // using a reference is exactly like using the original variable
    cout << "int_value : " << int_value << endl;                       // 45
    cout << "reference  : " << reference_to_int_value_1 << endl;      // 45

    // modifying through the reference also modifies the original
    reference_to_int_value_1 = 55;
    cout << "int_value after modifying reference : " << int_value << endl;   // 55

    // and vice versa — modifying the original updates the reference too
    int_value = 100;
    cout << "reference after modifying original : " << reference_to_int_value_1 << endl;  // 100

    return 0;
}
