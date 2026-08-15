// the 'final' specifier has two uses in C++:
// 1. prevent a virtual METHOD from being overridden further down the hierarchy
// 2. prevent a CLASS from being inherited at all

#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void run() const{
            cout << "Animal::run called" << endl;
        }
        virtual void breathe() const{
            cout << "Animal::breathe called" << endl;
        }
};

class Land : public Animal{
    public:
        // override final on a METHOD:
        // Dog and any class below can't override run() anymore
        // the 'final' tells downstream classes: this is the last version of this function
        void run() const override final{
            cout << "Land::run called — no one can override this further" << endl;
        }
};

class Dog : public Land{
    public:
        // this would be a compile ERROR — run() is final in Land
        // void run() const override { ... }

        void breathe() const override{
            cout << "Dog::breathe called" << endl;
        }
};

// 'final' on a CLASS:
// Cat cannot be inherited from — any attempt to derive from it is a compile error
class Cat final : public Land{
    public:
        void breathe() const override{
            cout << "Cat::breathe called" << endl;
        }
};

// this would be a compile ERROR — Cat is final
// class HouseCat : public Cat {};


int main(){
    Dog dog1;
    dog1.run();      // Land::run() — can't be overridden, so always this version
    dog1.breathe();  // Dog::breathe()

    Cat cat1;
    cat1.run();      // Land::run()
    cat1.breathe();  // Cat::breathe()

    return 0;
}

// summary:
// void run() const override final  — this override is the LAST one, no further overriding allowed
// class Cat final                  — this class is the LAST in the chain, no further inheritance allowed
