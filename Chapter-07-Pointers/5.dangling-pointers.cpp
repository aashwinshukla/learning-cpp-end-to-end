// a dangling pointer is one that doesn't point to a valid memory address
// dereferencing it causes undefined behavior — crash, garbage output, or worse

#include <iostream>
using namespace std;

int main(){

    // case 1: uninitialized pointer
    int* p_number;   // dangling — holds garbage address
    cout << "p_number : " << p_number << endl;
    // cout << *p_number << endl;   // CRASH — never dereference an uninitialized pointer
    // fix: always initialize pointers to nullptr


    // case 2: deleted pointer
    int* p_number1 {new int{67}};
    cout << "*p_number1 (before delete) : " << *p_number1 << endl;   // 67

    delete p_number1;
    p_number1 = nullptr;   // reset after delete — fix for case 2
    // cout << *p_number1 << endl;   // would crash if not reset to nullptr


    // case 3: multiple pointers pointing to the same address
    int* p_number3 {new int{83}};
    int* p_number4 {p_number3};   // p_number4 is a slave/observer pointer

    cout << "p_number3 - " << p_number3 << " - " << *p_number3 << endl;
    cout << "p_number4 - " << p_number4 << " - " << *p_number4 << endl;

    delete p_number3;
    p_number3 = nullptr;

    // p_number4 now points to deleted memory — dangling
    // fix: always check the master pointer before using the slave
    if(p_number3 != nullptr){
        cout << "p_number4 - " << p_number4 << " - " << *p_number4 << endl;
    }


    // general null check before dereferencing any pointer
    int* p_number6 {nullptr};
    if(p_number6 != nullptr){
        cout << "*p_number6 : " << *p_number6 << endl;
    }
    // pointers can also be used directly as bools
    if(p_number6){
        cout << "*p_number6 : " << *p_number6 << endl;
    }


    // solutions summary:
    // 1. always initialize pointers (to nullptr if not pointing to anything yet)
    // 2. reset pointers to nullptr after deleting
    // 3. for multiple pointers to same address, make the ownership clear (master/slave)

    return 0;
}
