// function: a reusable piece of code that can take optional inputs and produce some output

// syntax:
// return_type function_name(param1, param2, ...){
//     // operations
//     return value;
// }

// function signature = function name + its parameters (not the return type)

// calling a function:
// result_var = function_name(arg1, arg2);
// function_name();   // if no parameters

#include <iostream>
using namespace std;

// void means no return value — typeless
void say_hello(){
    cout << "hello world" << endl;
}

// takes no input but returns an int
int lucky_number(){
    return 99;
}

// IMPORTANT: changes to parameters inside a function happen on COPIES of the arguments
// the original variables in main are not affected unless you use references or pointers

// example — pass by value (changes don't affect originals)
void num_change_by_value(int num1, int num2){
    ++num1;
    ++num2;
    // num1 and num2 here are copies — originals in main stay the same
}

// example — pass by reference (changes DO affect originals)
void num_change_by_ref(int& num1, int& num2){
    ++num1;
    ++num2;
}

int main(){
    int num1 {5};
    int num2 {6};

    num_change_by_value(num1, num2);
    cout << "after by value — Num1: " << num1 << " Num2: " << num2 << endl;
    // output: 5 and 6 — unchanged

    num_change_by_ref(num1, num2);
    cout << "after by ref   — Num1: " << num1 << " Num2: " << num2 << endl;
    // output: 6 and 7 — changed because we passed references

    return 0;
}
