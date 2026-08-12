// 'this' is a hidden pointer inside every class method
// it points to the current object the method is being called on
// available in all member functions, constructors, and destructors

#include <iostream>
#include <string>
using namespace std;

class Dog{
    public:
        Dog() = default;
        Dog(string name_param, string breed_param, int age_param);
        ~Dog();

    private:
        string dog_name;
        string dog_breed;
        int* dog_age {nullptr};
};

Dog::Dog(string name_param, string breed_param, int age_param){
    dog_name  = name_param;
    dog_breed = breed_param;
    dog_age   = new int;
    *dog_age  = age_param;
    cout << "Dog : " << dog_name << " constructed at address : " << this << endl;
    // 'this' prints the memory address of the object being constructed
}

Dog::~Dog(){
    delete dog_age;
    dog_age = nullptr;
    cout << "Dog : " << dog_name << " destroyed" << endl;
}

int main(){
    Dog dog1("Rex",  "Shepherd", 3);
    Dog dog2("Max",  "Labrador", 5);
    Dog dog3("Buddy","Poodle",   2);

    // dog1, dog2, dog3 all have different addresses
    // 'this' inside each constructor printed that object's unique address
    cout << "&dog1 : " << &dog1 << endl;
    cout << "&dog2 : " << &dog2 << endl;
    cout << "&dog3 : " << &dog3 << endl;
    // these will match what was printed during construction

    return 0;
}

// other uses of 'this':
// 1. to resolve naming conflicts between parameters and member variables
//    void set_name(string dog_name){ this->dog_name = dog_name; }
//    without 'this->' the compiler would think both sides are the parameter

// 2. to return the current object from a method (method chaining)
//    Dog& set_name(string n){ dog_name = n; return *this; }
//    dog1.set_name("Rex").set_breed("Shepherd");
