// constructors are called in the order objects are created (top to bottom)
// destructors are called in REVERSE order (last created = first destroyed)
// this is because objects are stored on a stack — last in, first out

#include <iostream>
#include <string>
#include <string_view>
using namespace std;

class Dog{
    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param, int age_param);
        ~Dog();

    private:
        string name;
        string breed;
        int* p_age {nullptr};
};

Dog::Dog(string_view name_param, string_view breed_param, int age_param){
    name  = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    cout << "Dog constructor called for " << name << endl;
}

Dog::~Dog(){
    delete p_age;
    p_age = nullptr;
    cout << "Dog destructor called for  " << name << endl;
}

int main(){
    Dog dog1("Doggy1", "Shepherd", 2);
    Dog dog2("Doggy2", "Shepherd", 3);
    Dog dog3("Doggy3", "Shepherd", 4);
    Dog dog4("Doggy4", "Shepherd", 5);
    return 0;
}

// output:
// Dog constructor called for Doggy1
// Dog constructor called for Doggy2
// Dog constructor called for Doggy3
// Dog constructor called for Doggy4
// Dog destructor called for  Doggy4
// Dog destructor called for  Doggy3
// Dog destructor called for  Doggy2
// Dog destructor called for  Doggy1
