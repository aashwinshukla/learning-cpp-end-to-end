// destructor = a special method called automatically when an object is destroyed
// used to release any dynamic memory the object allocated during its lifetime
// rules:
// 1. no return type
// 2. same name as the class but with ~ in front
// 3. no parameters
// 4. only one destructor per class

#include <iostream>
#include <string>
using namespace std;

class Dog{
    public:
        Dog() = default;
        Dog(string name_param, string breed_param, int age_param);
        ~Dog();   // destructor declaration

    private:
        string dog_name;
        string dog_breed;
        int* dog_age {nullptr};
};

// no-parameter constructor
Dog::Dog(){
    dog_name  = "None";
    dog_breed = "None";
    dog_age   = new int;   // dynamic memory allocation
    *dog_age  = 0;
}

// parameterized constructor
Dog::Dog(string name_param, string breed_param, int age_param){
    dog_name  = name_param;
    dog_breed = breed_param;
    dog_age   = new int;   // memory allocated on heap
    *dog_age  = age_param;
}

// destructor — releases heap memory when the object is destroyed
Dog::~Dog(){
    delete dog_age;
    dog_age = nullptr;
    cout << "Dog destructor called for " << dog_name << endl;
}

int main(){
    Dog dog1("Rex", "Shepherd", 3);
    Dog dog2("Max", "Labrador", 5);
    // destructors called automatically when main ends
    return 0;
}

// destructors are called when:
// - a local (stack) object goes out of scope
// - a heap object is released with delete
// - an object is passed by value to a function (a copy is made, then destroyed)
// - a local object is returned from a function (for some compilers)
