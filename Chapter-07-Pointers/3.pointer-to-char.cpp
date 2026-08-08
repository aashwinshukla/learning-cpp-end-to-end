// pointer to char works just like any other pointer

#include <iostream>
using namespace std;

int main(){

    char* p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;
    cout << "the value stored in p_char_var is : " << *p_char_var << endl;   // A

    char char_var1 {'C'};
    p_char_var = &char_var1;
    cout << "the value stored in p_char_var is : " << *p_char_var << endl;   // C

    return 0;
}

// we can also point to a string literal using a const char pointer
// the const is important — string literals are read-only in C++
const char* p_message {"Hello World!"};
// without const, some compilers will throw:
// error: invalid conversion from 'const char*' to 'char*'
