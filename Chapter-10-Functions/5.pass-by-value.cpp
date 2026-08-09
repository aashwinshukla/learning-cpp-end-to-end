// pass by value = the function receives a COPY of the argument
// changes inside the function do not affect the original variable

#include <iostream>
using namespace std;

void say_age(int age);

int main(){
    int age {23};

    cout << "age before : " << age << endl;
    say_age(age);
    cout << "age after  : " << age << endl;

    return 0;
}

void say_age(int age){
    ++age;
    cout << "hello! you are " << age << " years old" << endl;
    // age here is a copy — incrementing it doesn't touch the original in main
}

// output:
// age before : 23
// hello! you are 24 years old
// age after  : 23   <-- original unchanged

// if you print &age inside the function and &age in main you'll see two different addresses
// that confirms they are two separate copies in memory
