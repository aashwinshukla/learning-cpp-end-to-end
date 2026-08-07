#include <iostream>
using namespace std;

int main(){

    char *p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;

    cout << " the value stored in p_char_var is : " << *p_char_var << endl;

    char char_var1 {'C'};
    p_char_var = &char_var1;

    cout << "The value stored in p_char_var is : " << *p_char_var << endl;

    return 0;
}

// we can also use it for string 

char* p_message {" Hello World! "};
// some compilers are going to stop you from puting string in pointer array.
// error: invalid conversion from ‘const char*’ to ‘char’ 


