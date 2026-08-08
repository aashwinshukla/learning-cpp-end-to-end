// const references

#include <iostream>
using namespace std;

int main(){

    int age {30};
    const int& const_ref_age {age};
    // const here applies to const_ref_age — you can't modify age through this reference
    // age itself is still non-const and can be changed directly

    cout << "age           : " << age           << endl;   // 30
    cout << "const_ref_age : " << const_ref_age << endl;   // 30

    // modifying age directly is fine
    age = 35;
    cout << "age after direct modify : " << age << endl;           // 35
    cout << "const_ref_age sees it   : " << const_ref_age << endl; // 35

    // trying to modify through the const reference is an ERROR
    // const_ref_age = 32;   // ERROR: assignment of read-only reference


    // for comparison — const pointer to const:
    const int* const const_ptr_to_const_age {&age};
    // *const_ptr_to_const_age = 32;   // ERROR: can't modify value through it
    // const_ptr_to_const_age = nullptr; // ERROR: can't change the address either


    // there is no such thing as re-seating a reference (changing what it refers to)
    // int& ref1 {age};
    // int& ref1 {age};   // ERROR: redeclaration
    // once a reference is bound to a variable, it stays bound forever

    return 0;
}
