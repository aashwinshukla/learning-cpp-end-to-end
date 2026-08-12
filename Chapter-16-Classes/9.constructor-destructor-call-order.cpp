#include <iostream>
#include<string_view>
#include<string>
using namespace std;

class Dog{
    public : 
        Dog() = default;
        Dog(string_view name_param, string_view breed_param, int age_param);
        ~Dog();
    private :
        string name;
        string breed;
        int * p_age{nullptr};
};

Dog::Dog(string_view name_param, string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    cout << "Dog constructor called for "<< name << endl;
}

Dog::~Dog(){
    delete p_age;
    cout << "Dog Destructor Called for : " << name << endl;
}

int main(){
    Dog dog1("Doggy1", "Shepherd", 2);
    Dog dog2("Doggy2", "Shepherd", 3);
    Dog dog3("Doggy3", "Shepherd", 4);
    Dog dog4("Doggy4", "Shepherd", 5);
    return 0;
}


// output will tell you how the constructa nnd destruct are called


// output : 
// Dog constructor called for Doggy1
// Dog constructor called for Doggy2
// Dog constructor called for Doggy3
// Dog constructor called for Doggy4
// Dog Destructor Called for : Doggy4
// Dog Destructor Called for : Doggy3
// Dog Destructor Called for : Doggy2
// Dog Destructor Called for : Doggy1
