// pass by pointer = the function receives the ADDRESS of the argument
// dereferencing the pointer inside the function changes the original variable

#include <iostream>
using namespace std;

void say_age(int* age);

int main(){
    int age {23};

    cout << "age before : " << age << endl;
    say_age(&age);   // passing the address of age
    cout << "age after  : " << age << endl;

    return 0;
}

void say_age(int* age){
    ++(*age);   // dereference to modify the original value
    cout << "hello! you are " << *age << " years old" << endl;
}

// output:
// age before : 23
// hello! you are 24 years old
// age after  : 24   <-- original changed because we worked on its address
