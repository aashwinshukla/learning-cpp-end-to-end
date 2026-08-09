#include <iostream>
using namespace std;

void num_change(int &num1, int &num2);   //function declaration
                                        // this tells what fuction to check before going to main 
                                        // otherwise it will go through main and not relasise what funvtion was used in call function
int main() {
    int num1 {5};
    int num2 {6};

    num_change(num1, num2);

    cout << "Num1 : " << num1 << endl; // Output: 6
    cout << "Num2 : " << num2 << endl; // Output: 7

    return 0;
}


// function defination
void num_change(int &num1, int &num2) {
    ++num1;
    ++num2;
}

