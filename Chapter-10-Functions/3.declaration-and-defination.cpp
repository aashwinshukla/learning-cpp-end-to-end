// declaration = telling the compiler the function exists and what its signature is
//               no body, just ends with a semicolon
//               allows you to call the function before its definition

// definition  = the actual implementation with the full body

// if the definition comes AFTER main and there is no declaration above main,
// the compiler won't know about the function when it sees the call — compile error.
// a declaration above main fixes this.

#include <iostream>
using namespace std;

void num_change(int& num1, int& num2);   // declaration — tells compiler it exists

int main(){
    int num1 {5};
    int num2 {6};

    num_change(num1, num2);

    cout << "Num1 : " << num1 << endl;   // 6
    cout << "Num2 : " << num2 << endl;   // 7

    return 0;
}

// definition — actual body comes after main
void num_change(int& num1, int& num2){
    ++num1;
    ++num2;
}
