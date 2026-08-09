// return value — function computes something and hands it back to the caller

#include <iostream>
using namespace std;

int sum(int a, int b){
    int result = a + b;
    cout << "inside function  &result : " << &result << endl;
    return result;
    // result is a local variable — it lives on the function's stack
    // when the function returns, its value is COPIED back to the caller
    // the local variable itself is then destroyed
}

int main(){
    int a {34};
    int b {16};

    int result = sum(a, b);
    cout << "inside main      &result : " << &result << endl;
    cout << "sum : " << result << endl;   // 50

    return 0;
}

// the two &result addresses will be DIFFERENT
// that proves result inside sum() and result in main() are two separate variables
// the value 50 was copied from the function's result into main's result on return
