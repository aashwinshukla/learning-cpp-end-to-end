// struct vs class — they are almost identical in C++
// the only real difference is default access:
// class  = members are private by default
// struct = members are public by default

#include <iostream>
#include <string>
using namespace std;

// class — must use public: to access from outside
class Dog{
    string name {"none"};   // private by default — not accessible from main
};

// struct — members are public by default
struct Cat{
    string name {"none"};   // public by default — accessible from main
    int age {0};
};

int main(){
    Cat cat1;
    cat1.name = "Whiskers";
    cat1.age  = 3;
    cout << "cat name : " << cat1.name << endl;   // Whiskers
    cout << "cat age  : " << cat1.age  << endl;   // 3

    // dog1.name would be an error — it's private
    Dog dog1;

    return 0;
}

// in practice:
// use struct for simple data bundles with no behavior (plain data types)
// use class when you have private data + methods + constructors
