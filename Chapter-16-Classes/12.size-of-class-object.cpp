// the size of a class object is determined by its member variables only
// member functions do NOT contribute to the size

#include <iostream>
using namespace std;

class Dog{
    private:
        size_t leg_count;   // 8 bytes
        size_t arm_count;   // 8 bytes
};

class Cat{
    private:
        int age;            // 4 bytes
        double weight;      // 8 bytes
};

class Empty{};   // no member variables

int main(){

    Dog dog1;
    cout << "sizeof(Dog) : " << sizeof(Dog) << endl;   // 16 (8 + 8)

    Cat cat1;
    cout << "sizeof(Cat) : " << sizeof(Cat) << endl;   // 16 (4 + 8, but padded to 16)

    cout << "sizeof(Empty) : " << sizeof(Empty) << endl;  // 1 — compiler gives 1 minimum

    return 0;
}

// the compiler may add padding bytes between members to align them in memory
// that's why Cat is 16 instead of 12 (4 + 8) — the int is padded to match double alignment
// member functions are shared across all objects and stored separately — not counted in size
